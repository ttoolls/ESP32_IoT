/**
 ******************************************************************************
 * @file    main.c
 * @brief   Main rutine
 * 
 * @section License
 * 
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
 *
 * @author  Anatoly Selivanov https://github.com/ttoolls
 * @date    12-April-2022
 *    
 ****************************************************************************** 
 **/



/* Includes-------------------------------------------------------------------*/
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "dht11.h"


/* Defines--------------------------------------------------------------------*/
#define GPIO_OUTPUT_IO_0    GPIO_NUM_18
#define GPIO_OUTPUT_PIN_SEL (1ULL<<GPIO_OUTPUT_IO_0)
#define GPIO_INPUT_IO_0     GPIO_NUM_4
#define GPIO_INPUT_PIN_SEL  (1ULL<<GPIO_INPUT_IO_0)


/* Data types-----------------------------------------------------------------*/


/* Function prototypes--------------------------------------------------------*/
void vRead_sensor(void*);

/* Functions------------------------------------------------------------------*/
void app_main() {
    BaseType_t xReturned;    
    xReturned = xTaskCreate(vRead_sensor, "Read_sensor", 2000, NULL, 1, NULL);    
}


void vRead_sensor(void* param) {
    DHT11_init(GPIO_NUM_25);
    while(1) {
        printf("Temperature is %d \n", DHT11_read().temperature);
        printf("Humidity is %d\n", DHT11_read().humidity);
        printf("Status code is %d\n", DHT11_read().status);
        vTaskDelay(1000);
    }
}


void GPIO_Rutine(void) {
    gpio_config_t io_conf;
    io_conf.intr_type = GPIO_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pin_bit_mask = GPIO_OUTPUT_PIN_SEL;
    io_conf.pull_down_en = 0;
    io_conf.pull_up_en = 0;
    gpio_config(&io_conf);

    //io_conf.intr_type = GPIO_INTR_POSEDGE;
    io_conf.pin_bit_mask = GPIO_INPUT_PIN_SEL;
    io_conf.mode = GPIO_MODE_INPUT;
    io_conf.pull_up_en = 1;
    gpio_config(&io_conf);

    int cnt = 0;
    while(1) {
        if (gpio_get_level(GPIO_INPUT_IO_0) == 0) {
            gpio_set_level(GPIO_OUTPUT_IO_0, 1 );
            cnt ^= 1;
        }
        gpio_set_level(GPIO_OUTPUT_IO_0, 0);
    }
}