/*
 * Primary and Secondary School License - for use in teaching and meeting
 * course requirements at primary and secondary schools only.  Not for
 * government, commercial, university, or other organizational use.
 *
 * File: lire_imu_types.h
 *
 * Code generated for Simulink model 'lire_imu'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Mon Jan  4 22:13:55 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_lire_imu_types_h_
#define RTW_HEADER_lire_imu_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Custom Type definition for MATLABSystem: '<Root>/BNO055 IMU Sensor' */
#include "MW_SVD.h"
#ifndef typedef_d_cell_lire_imu_T
#define typedef_d_cell_lire_imu_T

typedef struct {
  char_T f1;
  char_T f2;
  char_T f3;
  char_T f4;
  char_T f5;
  char_T f6;
  char_T f7;
  char_T f8;
  char_T f9[2];
  char_T f10[2];
  char_T f11[2];
  char_T f12[2];
} d_cell_lire_imu_T;

#endif                                 /*typedef_d_cell_lire_imu_T*/

#ifndef typedef_g_codertarget_arduinobase_int_T
#define typedef_g_codertarget_arduinobase_int_T

typedef struct {
  d_cell_lire_imu_T AvailablePwmPinNames;
} g_codertarget_arduinobase_int_T;

#endif                               /*typedef_g_codertarget_arduinobase_int_T*/

#ifndef typedef_h_codertarget_arduinobase_int_T
#define typedef_h_codertarget_arduinobase_int_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  g_codertarget_arduinobase_int_T *Hw;
  MW_Handle_Type MW_I2C_HANDLE;
} h_codertarget_arduinobase_int_T;

#endif                               /*typedef_h_codertarget_arduinobase_int_T*/

#ifndef typedef_codertarget_arduinobase_inter_T
#define typedef_codertarget_arduinobase_inter_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T SampleTime;
  boolean_T isBNOcorrect;
  h_codertarget_arduinobase_int_T i2cObj;
} codertarget_arduinobase_inter_T;

#endif                               /*typedef_codertarget_arduinobase_inter_T*/

/* Parameters (default storage) */
typedef struct P_lire_imu_T_ P_lire_imu_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_lire_imu_T RT_MODEL_lire_imu_T;

#endif                                 /* RTW_HEADER_lire_imu_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
