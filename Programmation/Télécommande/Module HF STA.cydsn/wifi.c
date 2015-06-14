/****Déclarations****/
#include <project.h>
#include "wifi.h"
  
/****Déclarations Variables****/    
const char *AT[] = {
    "+++", //Entre en mode commande
    "a", //Valide la demande
    "AT+E", //Arrête l'affichage de la commande saisie
    "AT+UART=115200,8,1,None,NFC", //Définition des paramètres de transmissions
    "AT+WMODE=STA", //Mode client
    "AT+WSSSID=RAGT_ETUVE", //Nom du réseau auquel le module se connecte
    "AT+WSKEY=OPEN,NONE", //Paramètres de sécurité
    "AT+WANN=static,10.10.100.150,255.255.255.0,10.10.100.254", //Assignation IP
    "AT+NETP=TCP,Client,8899,10.10.100.254", //Paramétrage Client TCP
    "AT+ENTM" //Entre en mode transmission invisible "Serial Wifi"
};

/****Fonction Mode AT****/
void EnterATMode()
{  
    UART_PutString(AT[0]);
    CyDelay(50);    
    UART_PutString(AT[1]);
    CyDelay(1000);   
}

/****Fonction Configuration module client****/
void ConfigSTA()
{
    uint8 i =2;
    do
    {
        SendATCommand(AT[i]);  
        i++;
    }
    while(i < 10);    
}

/****Envoi Commande UART****/
void SendATCommand(const char *at)
{
    UART_PutString(at);
    UART_PutCRLF(0x0d);
    CyDelay(100);
}

/****Fonction Transmission TCP OK****/
void TCPOK()
{
    LCD_ClearDisplay();
    LCD_PrintString("Transmission TCP");
    LCD_Position(1u, 7u);
    LCD_PrintString("OK");    
    CyDelay(1000);
    LCD_ClearDisplay(); 
}

/* [] END OF FILE */
