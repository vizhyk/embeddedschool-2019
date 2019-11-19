/*
 * heartbeat_module.c
 *
 *  Created on: Nov 19, 2019
 *      Author: vit
 */

#include "main.h"
#include "drv_led.h"
#include "heartbeat_module.h"

void heartbeat_func (led_colour colour,int duty_cycle){
Leds_activation(colour);
HAL_Delay(duty_cycle);
Leds_disable(colour);
HAL_Delay(duty_cycle);
}
