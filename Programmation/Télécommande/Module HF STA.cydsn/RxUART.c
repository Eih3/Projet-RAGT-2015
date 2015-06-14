/****Déclarations****/
#include <project.h>
#include "RxUART.h"

/****Déclarations Variables****/
extern int8 RxData,
            ConfigEnd;

/****Déclarations Fonctions****/
extern void TCPOK();

/****Fonction Interruption****/    
CY_ISR(Rx_ISR)
{ 
    UART_ReadRxStatus();
    RxData = UART_GetByte();
    if (ConfigEnd && RxData == 'A') TCPOK(); 
    
    /*writepointer++;

    tempchar = received character;

    if( ( writepointer <= end of buffer ) && ( tempchar != NULL ) ) {

        *writetpointer = tempchar;
        charactercount++;
    }
    else 
    {
     writepointer = begin of buffer;

    }*/
}

/****Fonction Interruption Rx****/
void Init_Rx_ISR()
{
    CyGlobalIntEnable; 
    Rx_Int_StartEx(Rx_ISR);
}

/****Fonction UART****/
void Init_UART()
{
    UART_Start();     
    UART_ClearRxBuffer();   
}

/* [] END OF FILE */
