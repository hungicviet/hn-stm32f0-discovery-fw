/*
 * This file is part of the libopencm3 project.
 *
 * (C) Copyright 2015 Tuan PM.
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Lesser General Public License
 * (LGPL) version 2.1 which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/lgpl-2.1.html
 *
 * Contributors:
 *     Tuan PM <tuanpm@live.com>
 * File: main.c
 * Created: 8:15:47 AM Nov 17, 2015 GMT+7
 */

#include "config.h"
#include <stdlib.h>
#include <errno.h>
//#include <stdio.h>
//#include <unistd.h>
#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>
//#include <libopencm3/usb/usbd.h>
//#include <libopencm3/usb/cdc.h>
//#include "cdcacm.h"
//#include "tick.h"
#include "debug.h"

void clock_init(void);

int main(void)
{
  clock_init();
 // tick_init();

 // cdcacm_init();
  //tick_wait_ms(5000);

  //int32_t main_tick = tick_get();

  gpio_mode_setup(GPIOC, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO8|GPIO9);
  gpio_set(GPIOC, GPIO8|GPIO9);
  


  while (1)
  {
    //gpio_set(GPIOC, GPIO9);
    
    //cdcacm_manage();
   /* if(tick_expire_ms(&main_tick, 1000)){

      gpio_toggle(GPIOC, GPIO9);
    }*/
    
  }

}

void clock_init(void)
{
  rcc_clock_setup_in_hsi_out_48mhz();
  rcc_periph_clock_enable(RCC_GPIOC);
 // rcc_periph_clock_enable(RCC_GPIOB);
//  rcc_periph_clock_enable(RCC_AFIO);
}



