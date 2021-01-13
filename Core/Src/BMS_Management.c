/*
 * BMS_Management.c
 *
 *  Created on: 27 Nov 2020
 *      Author: jerem
 */

#include "BMS_Management.h"


void BMSManagement_setModeBatt(void)
{
	//Do your thing mate.
}

int BMSManagement_getLastStatus(void) //Comment on va faire ???
{
	int val;
	//Do your thing mate.
	return val;
}


float BMSManagement_getInfo(char info, int num_batt) //done
{
	float val;
	switch (info)
	{
		case 'V':
			val=InfoBatt_getVoltage(nb_batt);
			break;
		case 'I':
			val=InfoBatt_getCurrent(nb_batt);
			break;
		case 'S':
			val=InfoBatt_getSOC(nb_batt);
			break;
	}
	return val;
}
