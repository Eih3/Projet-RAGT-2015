/***************************************************************
* Nom Fichier: WIFI.c
*
* Fonctions: - Liaison série sans fil  
*            - Mode point d'accès Wifi
*
* Connexion: Module GPIO5 (Rx)   -> PSoc P3[7] (Tx)
*            Module GPIO6 (Tx)   -> PSoC P3[5] (Rx)
*            Module GPIO1 (GND)  -> PSoC GND
*            Module GPIO2 (DVDD) -> PSoC 3.3V (max)
*
* Paramètres: - Bits per second 	= 115200
*             - Data bits		    = 8
*             - Parity			    = None
*             - Stop Bits		    = 1
*             - Flow Control		= None
*
* Informations: Voir document PDF "USR-WIFI232-T.pdf"
*
****************************************************************
* CARNUS 2015, Escamez Michel - Soler Donovan - Verdier Jordan
***************************************************************/

/**** Déclarations & Directives ****/
#include "Application.h"

/**** Déclarations Variables ****/    
char *AT[NUM_COM] = {
    "+++", //Entre en mode commande
    "a", //Valide la demande
    "AT+E", //Arrête l'affichage de la commande saisie
    "AT+UART=115200,8,1,None,NFC", //Définition des paramètres de transmissions
    "AT+WMODE=AP", //Mode point d'accès
    "AT+WAP=11BGN,RAGT_ETUVE,CH11", //Nom du réseau auquel le module se connecte
    "AT+WAKEY=OPEN,NONE", //Paramètres de sécurité
    "AT+WADHCP=off", //Service DHCP = OFF
    "AT+LANN=10.10.100.254,255.255.255.0", //Assignation IP
    "AT+NETP=TCP,Server,8899,10.10.100.254", //Paramétrage Server TCP
    "AT+ENTM" //Entre en mode transmission invisible "Serial Wifi"
};

extern uint8 ConfigEnd; //La configuration du module est finie
extern uint8 Linked; //Client connecté ? 1u oui; 0u non

uint8 command;

/**** Entrer en mode commande ****/
void ATModeCommande()
{    
    UART_PutString(AT[0]);    
    CyDelay(10);    
    UART_PutString(AT[1]);
    CyDelay(500);
}

/**** Configuration module AP ****/
void ConfigAP() { for (i = 2; i < NUM_COM; i++)  { SendATCommand(AT[i]); } }

/**** Envoi Commande UART ****/
void SendATCommand(char *at)
{
    UART_PutString(at);
    UART_PutCRLF(0x0d);
    CyDelay(100);
}

/**** Configuration Wifi ****/
void ConfigWifi()
{    
    ATModeCommande();     
    ConfigAP(); 
    CyDelay(1000);
    UART_ClearRxBuffer();
    ConfigEnd = 1u;
}

/**** Fonction Transmission TCP OK ****/
void TCPOK()
{    
    UART_PutChar(0x40);
    LCD_ClearDisplay();
    LCD_PrintString("Transmission TCP");
    LCD_Position(1u, 7u);
    LCD_PrintString("OK");    
    CyDelay(1000);
    LCD_ClearDisplay(); 
    Linked = 1u;
    LCD_Position(1u, 14u); 
    LCD_PrintString("ok");
}

/* [] END OF FILE */
