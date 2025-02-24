/*******************************************************************************
 *                            CHANGE HISTORY                                   *
 *-----------------------------------------------------------------------------*
 *   <Date>   | <Version> | <Author>      |            <Description>           *
 *-----------------------------------------------------------------------------*
 * 2023-05-28 | 0.1       | Thomasvon     |                 create
 ******************************************************************************/

#ifndef __BLIKVM_ST7789_OLED_H__
#define __BLIKVM_ST7789_OLED_H__

#include "common/blikvm_type.h"

int oled_240_240_run();
blikvm_int8_t blikvm_backlight_close();
blikvm_int8_t blikvm_backlight_open();

#endif