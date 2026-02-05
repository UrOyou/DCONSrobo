/**
  ****************************(C) COPYRIGHT 2026 公司名称替换****************************
  * @file       compiler_compat.h
  * @brief      文件英文描述补充
  *             由keil转clion开发后代码编译器改变，部分定义不兼容，这里做一个兼容定义宏
  * @note       CLion 的代码分析引擎默认使用 GCC/Clang 语法解析，而 ARM Compiler 5/6（Keil）特有语法
  * @history
  *  Version    Date            Time            Author          Modification
  *  V1.0.0     02-05-2026     11:41            youg            1. 初始版本
  *
  @verbatim
  ==============================================================================
    使用方法补充
  ==============================================================================
  @endverbatim
  ****************************(C) COPYRIGHT 2026 公司名称替换****************************
  */
#ifndef CMAKELED_COMPILER_COMPAT_H
#define CMAKELED_COMPILER_COMPAT_H


/**
  * @brief          __packed 的兼容
  * @param[in]      pvParameters: NULL
  * @retval         none
  */
#if defined(__GNUC__) || defined(__clang__)
    // GCC 和 Clang 使用 __attribute__((packed))
    #define __packed __attribute__((packed))
    #define PACKED __attribute__((packed))
#elif defined(__CC_ARM) || defined(__ARMCC_VERSION)
    // Keil/ARM Compiler 5/6 保持原样
    #define __packed __packed
#else
    // 其他编译器默认不处理
    #define __packed
#endif



#endif //CMAKELED_COMPILER_COMPAT_H