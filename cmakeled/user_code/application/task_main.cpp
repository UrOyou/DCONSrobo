/**
  ****************************(C) COPYRIGHT 2026 公司名称替换****************************
  * @file       task_main.cpp
  * @brief      文件英文描述补充
  *             统一管理freeRTOS task
  * @note       
  * @history
  *  Version    Date            Time            Author          Modification
  *  V1.0.0     02-05-2026     14:04            youg            1. 初始版本
  *
  @verbatim
  ==============================================================================
    使用方法补充
  ==============================================================================
  @endverbatim
  ****************************(C) COPYRIGHT 2026 公司名称替换****************************
  */

#include "task_main.h"
#include "struct_typedef.h"
#include "FreeRTOS.h"
#include "task.h"

#include "bsp_delay.h"

//这里将my_test_task作为参考模板
// #include "my_test_task.h" 引用任务头文件

#define Tiny_Stack_Size       64
#define Small_Stack_Size      128
#define Normal_Stack_Size     256
#define Large_Stack_Size      512
#define Huge_Stack_Size       1024
#define PriorityVeryLow       1
#define PriorityLow           2
#define PriorityBelowNormal   3
#define PriorityNormal        4
#define PriorityAboveNormal   5
#define PriorityHigh          6
#define PrioritySuperHigh     7
#define PriorityRealtime      8

TaskHandle_t my_test_task_handle;

/**
* @brief Load and start User Tasks.
* @note  Edit this function to add tasks into the activated tasks list.
*/
void System_Resource_Init(void)
{
  /* System Service init --------------*/
  delay_init();

  /* Applications Init ----------------*/
}

/**
* @brief Load and start User Tasks.
* @note  Edit this function to add tasks into the activated tasks list.
*/
void Task_start(void)
{
  /* System Service init --------------*/
  /* Applications Init ----------------*/

  //xTaskCreate(my_test_task, "my_test_task", Small_Stack_Size, NULL, PriorityHigh, &my_test_task_handle);

}

