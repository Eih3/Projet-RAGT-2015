/***************************************************************
* Nom Fichier: EEPROM.c
*
* Fonctions:           
*  Lecture EEPROM           
*  Ecriture EEPROM          
*
****************************************************************
* CARNUS 2015, Escamez Michel - Soler Donovan - Verdier Jordan
***************************************************************/

/**** Déclarations & Directives ****/
#include "Application.h"
#include "EEPROM.h"

/**** Fonction pour écrire dans l'EEPROM ****
 *
 * uint8 address = adresse de l'EEPROM où placer le curseur
 * uint8 * writeData = Stockage des valeurs EEPROM dans le tableau
 *                    où dataBuffer[1] = addresse
 * uint8 length = longueur des données à écrire
 */
void EcritureEEPROM(uint8 address, uint8 * writeData, uint8 length)
{
    I2C_Start();
    I2C_MasterClearStatus();
    
    dataBuffer[1] = address;
    
    length += 2;   
    
    for (i = 0; i < length; i++)  { dataBuffer[i + 2] = writeData[i]; };
    
    I2C_MasterWriteBuf(SLAVE_ADDRESS,(uint8 *) dataBuffer, length, I2C_MODE_COMPLETE_XFER);
    while((I2C_MasterStatus() & I2C_MSTAT_WR_CMPLT) == 0u) {}
    
    CyDelay(50);
                
    I2C_MasterClearStatus();
}

/**** Fonction pour lire l'EEPROM ****
 *
 * uint8 address = adresse de l'EEPROM où placer le curseur
 * uint8 * readData = Stockage des valeurs EEPROM dans le tableau
 *                    où adresse[1] = addresse
 * uint8 length = longueur des données à lire
 */
void LectureEEPROM(uint8 address, uint8 * readData, uint8 length)
{   
    I2C_Start();
    I2C_MasterClearStatus();
    
    adresse[1] = address;
    
    length += 1;   
    
    I2C_MasterWriteBuf(SLAVE_ADDRESS,(uint8 *) adresse ,2 , I2C_MODE_COMPLETE_XFER);
    while((I2C_MasterStatus() & I2C_MSTAT_WR_CMPLT) == 0u) {}
    
    I2C_MasterSendStart(SLAVE_ADDRESS, 1);   
    
    for (i = 0; i < length; i++)  { readData[i] = I2C_MasterReadByte(1u); };
    
    CyDelay(50);
    
    I2C_MasterSendStop();
    
    I2C_MasterClearStatus();   
}

/* [] END OF FILE */
