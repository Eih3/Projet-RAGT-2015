/************************
 * Programme Module HF  *
 *                      *
 * Auteurs :            *
 *  Escamez Michel      *
 *  Soler Donovan       * 
 *  Verdier Jordan      *
 *                      *
 * Fonctions :          *
 *  Liaison HF          *
 *  Liaison I²C         *
 *  Commande Relai      *
 *  R/W EEPROM          *
 *                      *
 * MàJ :                *
 *  06/02/2015 Exemple  *
 *                      *
 ***********************/

/****Déclarations****/
#include <project.h>
#include "wifi.h"
#include "RxUART.h"
    
/****Déclarations Variables****/
uint8 RxData,
      ConfigEnd;

/****Déclarations Fonctions****/
void Config(),
     Init(),
     Init_LCD();

/****Fonction Principale****/
int main()
{    
    Init();    
    Config();
    
    int8 i=33;
        
    for(;;)
    {
        if (!SW2_Read()) LCD_ClearDisplay();        
        
        LCD_Position(0, 0);
        LCD_PrintString("Char rec: ");
        LCD_Position(0, 13);
        LCD_PrintString("STA");
        LCD_Position(1, 0);
        LCD_PrintString("Char env: ");
        
        CyDelay(1000u);
        UART_PutChar(i);
        LCD_Position(1u, 10u);
        LCD_PutChar(i);
        i++;
        if (i==127) i=33;         
    }    
}

/****Fonction Initialisation****/
void Init()
{    
    Init_LCD();
    Init_UART();  
    Init_Rx_ISR();  
}

/****Fonction Configuration****/
void Config()
{
    EnterATMode();     
    ConfigSTA(); 

    CyDelay(1000);
    UART_ClearRxBuffer();
    ConfigEnd = 1u;
}

/****Fonction LCD****/
void Init_LCD()
{
    LCD_Start();
    LCD_PrintString("   Module STA"); 
    LCD_Position(1u, 1u);
    LCD_PrintString("Initialisation");
    CyDelay(1000);
    LCD_ClearDisplay(); 
}

/* [] END OF FILE */
