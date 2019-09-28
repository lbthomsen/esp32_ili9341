/**
 * @file lv_templ.h
 *
 */

#ifndef ST7789_H
#define ST7789_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/lvgl.h"
#include "sdkconfig.h"

/*********************
 *      DEFINES
 *********************/
#define DISP_BUF_SIZE (LV_HOR_RES_MAX * 40)
#define ST7789_DC   CONFIG_DISP_DC
#define ST7789_RST  CONFIG_DISP_RST
#define ST7789_BCKL CONFIG_DISP_BCKL

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

void st7789_init(void);
void st7789_flush(lv_disp_drv_t * drv, const lv_area_t * area, lv_color_t * color_map);

/**********************
 *      MACROS
 **********************/


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* ST7789_H */
