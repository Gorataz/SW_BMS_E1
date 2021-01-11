/*
 * InfoBatt.c
 *
 *  Created on: 27 Nov 2020
 *      Author: jerem
 */

#include "InfoBatt.h" //Voir les fichiers HAL pour faire le lien entre "nb_batt" et le type de port i2c que l'on utilise
#include "i2c.h"
#include <string.h>
#include <stdio.h>

static const float DeltaQ=0.00085;

/***********************************
 *	BATTERY 1 & 2
 **********************************/

float InfoBatt_getCurrent(int nb_batt)
{
	float voltage;
	uint16_t bufRx16=read_register(nb_batt,VOLT_REG);
	voltage=70.8*bufRx16/65535;
	return voltage;
}


float InfoBatt_getVoltage(int nb_batt)
{
	float current;
	uint16_t bufRx16=read_register(nb_batt, AMP_REG);
	current=64*(bufRx16-32767)/(32767*5);
	return current;
}


float InfoBatt_getSoc(int nb_batt)
{
	float SOC;
	uint16_t bufRx16=read_register(nb_batt, COUL_REG_MSB);
	SOC=bufRx16*DeltaQ;
	return SOC;
}



//fonctions annexe pour faire les mesures en auto ou 10s ?
