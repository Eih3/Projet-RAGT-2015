/**** Déclarations & Directives ****/
#include <project.h>

#define BUFFER_SIZE (254u)

/**** Déclarations Variables ****/
uint8 i;

uint8 adresse[2] = {0x00};

uint8 dataBuffer[BUFFER_SIZE] = {0x00};

uint8 writeData[BUFFER_SIZE];

uint8 readData[BUFFER_SIZE];

/**** Déclarations Fonctions ****/
void Config();

void Init();

void Init_I2C();

void Init_Interruptions();

void fonctionTest();

extern void EcritureEEPROM(uint8 address, uint8 * writeData, uint8 length);

extern void LectureEEPROM(uint8 address, uint8 * readData, uint8 length);
    
    
/* [] END OF FILE */
