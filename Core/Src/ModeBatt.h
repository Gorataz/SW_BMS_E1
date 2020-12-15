/*
 * ModeBatt.h
 *
 *  Created on: 27 Nov 2020
 *      Author: jerem
 */

#include "BMS_Management.h"

#ifndef SRC_MODEBATT_H_
#define SRC_MODEBATT_H_

/*
 * @brief: This function configure the switches to put
 * the two batteries in series. The information is sent
 * to the CPLD IO inputs.
 * @param: mode - le mode que l'on souhaite avoir ; nb_batt la batterie que l'on souhaite charger
 * @retval: None
 * */
void ModeBatt_setMode(int mode);


/*
 * @brief: This function configures the switches to reset the system.
 * It happens after an overload has occured. The information is sent
 * to the CPLD IO inputs.
 * */
void ModeBatt_resetMode(void);


/*
 * @brief: This function retrieves, from the CPLD, the information
 * saying if the configuration mode is correct.
 * @param: None
 * @retval: 0 if 'Correct' OR 1 if there is a problem
 * */
int ModeBatt_checkModeBattery(void);

#endif /* SRC_MODEBATT_H_ */
