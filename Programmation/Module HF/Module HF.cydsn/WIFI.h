/***************************************************************
* Nom Fichier: WIFI.h              
****************************************************************
* CARNUS 2015, Escamez Michel - Soler Donovan - Verdier Jordan
***************************************************************/

/**** Déclarations & Directives ****/
#include "Application.h"

#define NUM_COM        (11u)

/**** Déclarations Fonctions ****/
void ATModeCommande();

void SendATCommand(char *at);

void ConfigAP();

void ConfigWifi();

void TCPOK();
    
/* [] END OF FILE */
