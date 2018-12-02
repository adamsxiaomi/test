/*
 * log.h
 *
 *  Created on: 2018年11月19日
 *      Author: ASUS
 */

#ifndef APPLICATION_LOG_H_
#define APPLICATION_LOG_H_

#include <ti/sysbios/knl/Clock.h>
#include <xdc/runtime/System.h>
// 清除屏幕
#define CLEAR() System_printf("\033[2J")

#define LOG_LEVEL 4
#if LOG_LEVEL>=4
#define log(format,...) System_printf("\033[1;33m<log>[%d]""File: "__FILE__", Line: %05d: ""%s "format"\033[0m\r\n",(Clock_getTicks()/100000), __LINE__,__func__, ##__VA_ARGS__)
#else
#define log(format,...)
#endif
#if LOG_LEVEL>=3
#define debug(format,...) System_printf("\033[1;32m<debug>[%d]""File: "__FILE__", Line: %05d: ""%s "format"\033[0m\r\n",(Clock_getTicks()/100000), __LINE__,__func__, ##__VA_ARGS__)
#else
#define log(format,...)
#endif
#if LOG_LEVEL>=2
#define warn(format,...) System_printf("\033[1;35m<warn>[%d]""File: "__FILE__", Line: %05d: ""%s "format"\033[0m\r\n",(Clock_getTicks()/100000), __LINE__,__func__, ##__VA_ARGS__)
#else
#define warn(format,...)
#endif
#if LOG_LEVEL>=1
#define error(format,...) System_printf("\033[1;31m<error>[%d]""File: "__FILE__", Line: %05d: ""%s "format"\033[0m\r\n",(Clock_getTicks()/100000), __LINE__,__func__, ##__VA_ARGS__)
#else
#define error(format,...)
#endif


#endif /* APPLICATION_LOG_H_ */
