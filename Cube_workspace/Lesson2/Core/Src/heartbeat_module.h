/*
 * heartbeat_module.h
 *
 *  Created on: Nov 19, 2019
 *      Author: vit
 */

#ifndef SRC_HEARTBEAT_MODULE_H_
#define SRC_HEARTBEAT_MODULE_H_
#include "drv_led.h"

void heartbeat_moving(int duty_cycle);
void all_leds_blinking(int dual_duty_cycle);

#endif /* SRC_HEARTBEAT_MODULE_H_ */
