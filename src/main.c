/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "lvgl.h"
#include "app_hal.h"

#include "demos/lv_demos.h"

void lv_demo_1(void)
{
  lv_obj_t * obj = lv_obj_create(lv_scr_act());

  // lv_obj_set_width(obj,200);
  // lv_obj_set_height(obj,200);
  lv_obj_set_size(obj,100,100);

  // print("W:%d\n",lv_obj_get_width(obj));
  // print("H:%d\n",lv_obj_get_height(obj));
  
  // lv_obj_set_x(obj,100);
  // lv_obj_set_y(obj,100);
  // lv_obj_set_pos(obj,100,100);

  // lv_obj_set_align(obj,LV_ALIGN_CENTER);

  // lv_obj_align(obj,LV_ALIGN_CENTER,-100,-100);

}

int main(void)
{
	lv_init();

	hal_setup();


  lv_demo_1();





	hal_loop();
}
