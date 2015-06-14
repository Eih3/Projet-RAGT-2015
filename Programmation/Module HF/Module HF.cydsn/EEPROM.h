/***************************************************************
* Nom Fichier: EEPROM.h              
****************************************************************
* CARNUS 2015, Escamez Michel - Soler Donovan - Verdier Jordan
***************************************************************/

/**** Déclarations & Directives ****/
#include "Application.h"

#define SLAVE_ADDRESS (0x50u)

/**** Déclarations Variables ****/
uint8 i;

extern uint8 adresse[];

extern uint8 dataBuffer[];

/**** Déclarations Fonctions ****/
void EcritureEEPROM(uint8 address, uint8 * readData, uint8 length);

void LectureEEPROM(uint8 address, uint8 * writeData, uint8 length);

/* [] END OF FILE */
