/***************************************************************
* Nom Fichier: Application.c
*
* Fonctions: - Lecture EEPROM           
*            - Ecriture EEPROM          
*
****************************************************************
* CARNUS 2015, Escamez Michel - Soler Donovan - Verdier Jordan
***************************************************************/

/**** Déclarations & Directives ****/
#include <Application.h>

/**** Déclarations Variables ****/
uint8 i;
uint8 adresse[2] = {0x00};
uint8 dataBuffer[BUFFER_SIZE] = {0x00};
uint8 writeData[BUFFER_SIZE];
uint8 readData[BUFFER_SIZE];
uint8 RxData = 0x20;
uint8 ConfigEnd; //La configuration du module est finie
uint8 Linked; //Client connecté ? 1u oui; 0u non

/**** Fonction de base de l'appication ****/
void Application()
{
    Initialisations();
    Configurations();     

    //fonctionTest();
    
    LCD_ClearDisplay();

    i=33;
        
    for(;;)
    { 
        if (!SW2_Read()) LCD_ClearDisplay();
        if (!SW3_Read()) UART_PutChar(0x40); 

        if (Linked) wifiTest();
        else { LCD_Position(0, 0); LCD_PrintString("Attente de STA"); }
        
        CyDelay(1000u);        
    }
}

/**** Fonction Configurations ****/
void Configurations()
{
    LCD_PrintString("   Module HF"); 
    LCD_Position(1u, 1u);
    LCD_PrintString("Configuration"); 
    
    ConfigWifi();
    
    UART_ClearRxBuffer();
}

/**** Initialisations ****/
void Initialisations()
{   
    Init_Interruptions();
    
    Init_I2C();
    
    Init_UART();
    
    Init_LCD();
}

/**** Initialisation LCD ****/
void Init_LCD()
{
    LCD_Start();
    LCD_PrintString("   Module AP"); 
    LCD_Position(1u, 1u);
    LCD_PrintString("Initialisation");
    CyDelay(1000);
    LCD_ClearDisplay();  
}

/**** Initialisation UART ****/
void Init_UART()
{
    UART_Start();     
    UART_ClearRxBuffer();   
}

/**** Initialisation I2C ****/
void Init_I2C()
{
    I2C_Start();
    I2C_MasterClearStatus();
}

/**** Fonction Test Divers ****/
void fonctionTest()
{    
    LCD_Position(0, 0);    
    
    //writeData = 10 octets de 0 à 9
    for (i = 0; i < 10; i++)  { writeData[i] = 0x30 + i; };
    
    /** Ecriture I2C 10 caractères **/
    EcritureEEPROM(0, writeData, 10);

    /** Lecture I2C 10 caractères **/ 
    LectureEEPROM(0, readData, 10);
    
    //Affiche 10 caractères
    for (i = 0; i < 10; i++)  { LCD_PutChar(readData[i]); };
}

void wifiTest()
{
    LCD_Position(0, 0);
    LCD_PrintString("Char rec: ");
    LCD_Position(0, 14);
    LCD_PrintString("AP");
    LCD_Position(1, 0);
    LCD_PrintString("Char env: ");   

    UART_PutChar(i);
    LCD_Position(1, 10);
    LCD_PutChar(i);
    i++;        
    if(i==127) i=33;  
}

/* [] END OF FILE */
