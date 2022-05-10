/**
 ******************************************************************************
 * @file    wifi.h
 * @brief   This file comprises function prototypes and declarations for 
 *          the WiFi communication
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
 * @date    May-2022
 *    
 ****************************************************************************** 
 **/

#ifndef __WIFI_H
#define __WIFI_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes-------------------------------------------------------------------*/


/* Defines--------------------------------------------------------------------*/


/* Data types-----------------------------------------------------------------*/


/* Function prototypes--------------------------------------------------------*/

void wifi_init_sta(void);


#ifdef __cplusplus
}
#endif

#endif // __WIFI_H
