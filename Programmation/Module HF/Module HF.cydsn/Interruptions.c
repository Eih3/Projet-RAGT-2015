/***************************************************************
* Nom Fichier: Interruptions.c
*
* Fonctions: - Interruption UART Rx  
*            - Interruption 
*
****************************************************************
* CARNUS 2015, Escamez Michel - Soler Donovan - Verdier Jordan
***************************************************************/

/**** Déclarations & Directives ****/
#include "Application.h"

/**** Déclarations Variables ****/   
extern uint8 RxData;
extern uint8 ConfigEnd; //La configuration du module est finie
extern uint8 Linked; //Client connecté ? 1u oui; 0u non

/**** Interruption UART Rx ****/    
CY_ISR(Rx_ISR)
{
    UART_ReadRxStatus();
    RxData = UART_GetByte();
    
    if (ConfigEnd && RxData == 0x3F) TCPOK();
    
    LCD_Position(0, 10);
    if (ConfigEnd && RxData && Linked) LCD_PutChar(RxData);
}

/**** Initialisation Interruptions ****/
void Init_Interruptions()
{
    CYGlobalIntEnable;
    Rx_Int_Start();
    Rx_Int_SetVector(Rx_ISR);
}

/* [] END OF FILE */
