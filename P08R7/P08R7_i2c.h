/*
 BitzOS (BOS) V0.3.6 - Copyright (C) 2017-2024 Hexabitz
 All rights reserved

 File Name          : P08R7_i2c.h
 Description        : This file contains all the functions prototypes for
                      the i2c
*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __i2c_H
#define __i2c_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/

extern I2C_HandleTypeDef hi2c2;


extern void MX_I2C_Init(void);
extern void MX_I2C2_Init(void);

#ifdef __cplusplus
}
#endif
#endif /*__i2c_H */


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
