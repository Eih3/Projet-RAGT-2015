/***************************************************************
* Nom Fichier: Application.h              
****************************************************************
* CARNUS 2015, Escamez Michel - Soler Donovan - Verdier Jordan
***************************************************************/

#if !defined(APPLICATION_H)
    
#define APPLICATION_H
    
/**** Déclarations & Directives ****/
#include <project.h>
#include "EEPROM.h"
#include "WIFI.h"
#include "Interruptions.h"

#define BUFFER_SIZE    (254u)

/**** Déclarations Fonctions ****/
void Application();

void Initialisations();

void Configurations();

void Init_LCD();

void Init_UART();

void Init_I2C();

void Init_Interruptions();


/* Temporaire */
void fonctionTest();
void wifiTest();
   
#endif

/* [] END OF FILE */
