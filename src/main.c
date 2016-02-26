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
#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

#include "debug.h"

void clock_init(void);

int main(void)
{
  clock_init();
  gpio_mode_setup(GPIOC, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO8|GPIO9);
  gpio_set(GPIOC, GPIO8|GPIO9);
  


  while (1)
  {
   
  }

}

void clock_init(void)
{
  rcc_clock_setup_in_hsi_out_48mhz();
  rcc_periph_clock_enable(RCC_GPIOC);
}



