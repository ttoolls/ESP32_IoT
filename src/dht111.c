/*
 * MIT License
 * 
 * Copyright (c) 2022 Anatoly Selivanov
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/

/**
  ******************************************************************************
  * @file    dth111.c
  * @author  Anatoly Selivanov
  * @date    12-April-2022
  * @brief   
  ******************************************************************************
*/


/* Includes-------------------------------------------------------------------*/
#include "dht111.h"
//#include "freertos/task.h"
//#include "driver/gpio.h"


/* Defines--------------------------------------------------------------------*/


/* Data types-----------------------------------------------------------------*/


/* Global variables-----------------------------------------------------------*/
//static gpio_num_t dht_data;


/* Private functions----------------------------------------------------------*/


/* Functions------------------------------------------------------------------*/
int dht111_init(int pin_no) {
    // Wait while the sensor pass its initial unstable state
    //Add timer 
    //dht_data = pin_no;
    return true;
}

void dht111_get_data(void) {
    return;
}
