/**** Déclarations & Directives ****/
#include <project.h>

#define BUFFER_SIZE (254u)

/**** Déclarations Variables ****/
uint8 i;
uint8 adresse[2] = {0x00};
uint8 dataBuffer[BUFFER_SIZE] = {0x00};
uint8 writeData[BUFFER_SIZE];
uint8 readData[BUFFER_SIZE];
uint8 RxData = 0x20;
uint8 Rxflag;
uint8 ConfigEnd = 0u;

/* [] END OF FILE */
