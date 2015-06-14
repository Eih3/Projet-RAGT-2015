/****Déclarations****/
#include <project.h>

/****Définitions Variables****/
#define EOM_CR          0x0D    //char (\r)
#define EOM_LF          0x0A    //char (\n)

/****Déclarations Variables****/

/****Déclarations Fonctions****/
CY_ISR_PROTO(Rx_ISR);

void Init_Rx_ISR(),
     Init_UART();

/* [] END OF FILE */
