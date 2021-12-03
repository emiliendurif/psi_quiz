/*
 * Primary and Secondary School License - for use in teaching and meeting
 * course requirements at primary and secondary schools only.  Not for
 * government, commercial, university, or other organizational use.
 *
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Mon Jan  4 18:01:20 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Block signals (default storage) */
B_untitled_T untitled_B;

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Forward declaration for local functions */
static void untitled_arduinoBNO055_stepImpl(const
  codertarget_arduinobase_inter_T *obj, real_T varargout_1[3], real_T
  varargout_2[3], real_T varargout_3[3], real_T varargout_4[3], int8_T
  varargout_5[4]);
static void untitled_SystemCore_release(const codertarget_arduinobase_inter_T
  *obj);
static void untitled_SystemCore_delete(const codertarget_arduinobase_inter_T
  *obj);
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_inter_T *obj);
static void untitled_SystemCore_release_b(g_codertarget_arduinobase_int_T *obj);
static void untitled_SystemCore_delete_b(g_codertarget_arduinobase_int_T *obj);
static void matlabCodegenHandle_matlabCod_b(g_codertarget_arduinobase_int_T *obj);
static codertarget_arduinobase_inter_T *unt_arduinoBNO055_arduinoBNO055
  (codertarget_arduinobase_inter_T *obj, f_codertarget_arduinobase_int_T *iobj_0);
static boolean_T arduinoBNO055_check_BNO055_Chip(const
  codertarget_arduinobase_inter_T *obj);
static void untitled_SystemCore_setup(codertarget_arduinobase_inter_T *obj);
static void untitled_arduinoBNO055_stepImpl(const
  codertarget_arduinobase_inter_T *obj, real_T varargout_1[3], real_T
  varargout_2[3], real_T varargout_3[3], real_T varargout_4[3], int8_T
  varargout_5[4])
{
  int16_T b_RegisterValue[3];
  int16_T b_RegisterValue_0[3];
  int16_T b_RegisterValue_1[3];
  int16_T b_RegisterValue_2[3];
  uint8_T b_RegisterValue_3;
  uint8_T SwappedDataBytes;
  uint8_T status;
  uint8_T output_raw[6];
  status = 8U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, &SwappedDataBytes,
    1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(obj->i2cObj.MW_I2C_HANDLE, 40U, output_raw, 6U, false,
                      true);
    memcpy((void *)&b_RegisterValue[0], (void *)&output_raw[0], (uint32_T)
           ((size_t)3 * sizeof(int16_T)));
  } else {
    b_RegisterValue[0] = 0;
    b_RegisterValue[1] = 0;
    b_RegisterValue[2] = 0;
  }

  status = 20U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, &SwappedDataBytes,
    1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(obj->i2cObj.MW_I2C_HANDLE, 40U, output_raw, 6U, false,
                      true);
    memcpy((void *)&b_RegisterValue_0[0], (void *)&output_raw[0], (uint32_T)
           ((size_t)3 * sizeof(int16_T)));
  } else {
    b_RegisterValue_0[0] = 0;
    b_RegisterValue_0[1] = 0;
    b_RegisterValue_0[2] = 0;
  }

  status = 14U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, &SwappedDataBytes,
    1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(obj->i2cObj.MW_I2C_HANDLE, 40U, output_raw, 6U, false,
                      true);
    memcpy((void *)&b_RegisterValue_1[0], (void *)&output_raw[0], (uint32_T)
           ((size_t)3 * sizeof(int16_T)));
  } else {
    b_RegisterValue_1[0] = 0;
    b_RegisterValue_1[1] = 0;
    b_RegisterValue_1[2] = 0;
  }

  status = 26U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, &SwappedDataBytes,
    1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(obj->i2cObj.MW_I2C_HANDLE, 40U, output_raw, 6U, false,
                      true);
    memcpy((void *)&b_RegisterValue_2[0], (void *)&output_raw[0], (uint32_T)
           ((size_t)3 * sizeof(int16_T)));
  } else {
    b_RegisterValue_2[0] = 0;
    b_RegisterValue_2[1] = 0;
    b_RegisterValue_2[2] = 0;
  }

  if (obj->isBNOcorrect) {
    status = 53U;
    memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
            sizeof(uint8_T)));
    status = MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U,
      &SwappedDataBytes, 1U, true, false);
    if (0 == status) {
      MW_I2C_MasterRead(obj->i2cObj.MW_I2C_HANDLE, 40U, &status, 1U, false, true);
      memcpy((void *)&b_RegisterValue_3, (void *)&status, (uint32_T)((size_t)1 *
              sizeof(uint8_T)));
    } else {
      b_RegisterValue_3 = 0U;
    }

    varargout_5[0] = (int8_T)((uint32_T)(b_RegisterValue_3 & 192) >> 6);
    varargout_5[1] = (int8_T)((uint32_T)(b_RegisterValue_3 & 48) >> 4);
    varargout_5[2] = (int8_T)((uint32_T)(b_RegisterValue_3 & 12) >> 2);
    varargout_5[3] = (int8_T)(b_RegisterValue_3 & 3);
  } else {
    varargout_5[0] = -1;
    varargout_5[1] = -1;
    varargout_5[2] = -1;
    varargout_5[3] = -1;
  }

  varargout_1[0] = (real_T)b_RegisterValue[0] / 100.0;
  varargout_2[0] = (real_T)b_RegisterValue_0[0] / 16.0;
  varargout_3[0] = (real_T)b_RegisterValue_1[0] / 16.0;
  varargout_4[0] = (real_T)b_RegisterValue_2[0] / 16.0;
  varargout_1[1] = (real_T)b_RegisterValue[1] / 100.0;
  varargout_2[1] = (real_T)b_RegisterValue_0[1] / 16.0;
  varargout_3[1] = (real_T)b_RegisterValue_1[1] / 16.0;
  varargout_4[1] = (real_T)b_RegisterValue_2[1] / 16.0;
  varargout_1[2] = (real_T)b_RegisterValue[2] / 100.0;
  varargout_2[2] = (real_T)b_RegisterValue_0[2] / 16.0;
  varargout_3[2] = (real_T)b_RegisterValue_1[2] / 16.0;
  varargout_4[2] = (real_T)b_RegisterValue_2[2] / 16.0;
}

static void untitled_SystemCore_release(const codertarget_arduinobase_inter_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_I2C_Close(obj->i2cObj.MW_I2C_HANDLE);
  }
}

static void untitled_SystemCore_delete(const codertarget_arduinobase_inter_T
  *obj)
{
  untitled_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_inter_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    untitled_SystemCore_delete(obj);
  }
}

static void untitled_SystemCore_release_b(g_codertarget_arduinobase_int_T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void untitled_SystemCore_delete_b(g_codertarget_arduinobase_int_T *obj)
{
  untitled_SystemCore_release_b(obj);
}

static void matlabCodegenHandle_matlabCod_b(g_codertarget_arduinobase_int_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    untitled_SystemCore_delete_b(obj);
  }
}

static codertarget_arduinobase_inter_T *unt_arduinoBNO055_arduinoBNO055
  (codertarget_arduinobase_inter_T *obj, f_codertarget_arduinobase_int_T *iobj_0)
{
  codertarget_arduinobase_inter_T *b_obj;
  obj->isInitialized = 0;
  obj->SampleTime = -1.0;
  b_obj = obj;
  obj->i2cObj.isInitialized = 0;
  obj->i2cObj.matlabCodegenIsDeleted = false;
  iobj_0->AvailablePwmPinNames.f1 = '2';
  iobj_0->AvailablePwmPinNames.f2 = '3';
  iobj_0->AvailablePwmPinNames.f3 = '4';
  iobj_0->AvailablePwmPinNames.f4 = '5';
  iobj_0->AvailablePwmPinNames.f5 = '6';
  iobj_0->AvailablePwmPinNames.f6 = '7';
  iobj_0->AvailablePwmPinNames.f7 = '8';
  iobj_0->AvailablePwmPinNames.f8 = '9';
  iobj_0->AvailablePwmPinNames.f9[0] = '1';
  iobj_0->AvailablePwmPinNames.f9[1] = '0';
  iobj_0->AvailablePwmPinNames.f10[0] = '1';
  iobj_0->AvailablePwmPinNames.f10[1] = '1';
  iobj_0->AvailablePwmPinNames.f11[0] = '1';
  iobj_0->AvailablePwmPinNames.f11[1] = '2';
  iobj_0->AvailablePwmPinNames.f12[0] = '1';
  iobj_0->AvailablePwmPinNames.f12[1] = '3';
  obj->i2cObj.Hw = iobj_0;
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static boolean_T arduinoBNO055_check_BNO055_Chip(const
  codertarget_arduinobase_inter_T *obj)
{
  uint8_T b_RegisterValue;
  uint8_T SwappedDataBytes;
  uint8_T status;
  status = 0U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, &SwappedDataBytes,
    1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(obj->i2cObj.MW_I2C_HANDLE, 40U, &status, 1U, false, true);
    memcpy((void *)&b_RegisterValue, (void *)&status, (uint32_T)((size_t)1 *
            sizeof(uint8_T)));
  } else {
    b_RegisterValue = 0U;
  }

  return b_RegisterValue == 160;
}

static void untitled_SystemCore_setup(codertarget_arduinobase_inter_T *obj)
{
  uint32_T i2cname;
  uint8_T CastedData;
  uint8_T b_SwappedDataBytes[2];
  uint8_T SwappedDataBytes[2];
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  i2cname = 0;
  obj->i2cObj.MW_I2C_HANDLE = MW_I2C_Open(i2cname, 0);
  MW_I2C_SetBusSpeed(obj->i2cObj.MW_I2C_HANDLE, 100000.0);
  MW_delay_in_milliseconds(600U);
  obj->isBNOcorrect = arduinoBNO055_check_BNO055_Chip(obj);
  if (obj->isBNOcorrect) {
    CastedData = 0U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 61U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, SwappedDataBytes, 2U,
                       false, false);
    MW_delay_in_milliseconds(25U);
    CastedData = 32U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 63U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, SwappedDataBytes, 2U,
                       false, false);
    obj->isBNOcorrect = arduinoBNO055_check_BNO055_Chip(obj);
    while (!obj->isBNOcorrect) {
      MW_delay_in_milliseconds(10U);
      obj->isBNOcorrect = arduinoBNO055_check_BNO055_Chip(obj);
    }

    MW_delay_in_milliseconds(50U);
    CastedData = 0U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 62U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, SwappedDataBytes, 2U,
                       false, false);
    CastedData = 0U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 63U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, SwappedDataBytes, 2U,
                       false, false);
    CastedData = 0U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 7U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, SwappedDataBytes, 2U,
                       false, false);
    MW_delay_in_milliseconds(10U);
    CastedData = 128U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 59U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, SwappedDataBytes, 2U,
                       false, false);
    CastedData = 12U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 61U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, SwappedDataBytes, 2U,
                       false, false);
    MW_delay_in_milliseconds(25U);
  }

  obj->isSetupComplete = true;
}

/* Model step function */
void untitled_step(void)
{
  int8_T b_varargout_5[4];
  real_T b_varargout_1[3];

  /* MATLABSystem: '<Root>/BNO055 IMU Sensor' */
  if (untitled_DW.obj.SampleTime != untitled_P.BNO055IMUSensor_SampleTime) {
    untitled_DW.obj.SampleTime = untitled_P.BNO055IMUSensor_SampleTime;
  }

  untitled_arduinoBNO055_stepImpl(&untitled_DW.obj, b_varargout_1,
    untitled_B.b_varargout_2, untitled_B.b_varargout_3,
    untitled_B.BNO055IMUSensor_o4, b_varargout_5);

  /* End of MATLABSystem: '<Root>/BNO055 IMU Sensor' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.1s, 0.0s] */
    rtExtModeUpload(0, (real_T)untitled_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(untitled_M)!=-1) &&
        !((rtmGetTFinal(untitled_M)-untitled_M->Timing.taskTime0) >
          untitled_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(untitled_M, "Simulation finished");
    }

    if (rtmGetStopRequested(untitled_M)) {
      rtmSetErrorStatus(untitled_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  untitled_M->Timing.taskTime0 =
    (++untitled_M->Timing.clockTick0) * untitled_M->Timing.stepSize0;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(untitled_M, 10.0);
  untitled_M->Timing.stepSize0 = 0.1;

  /* External mode info */
  untitled_M->Sizes.checksums[0] = (1143376769U);
  untitled_M->Sizes.checksums[1] = (727018081U);
  untitled_M->Sizes.checksums[2] = (3407285975U);
  untitled_M->Sizes.checksums[3] = (1775860177U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    untitled_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(untitled_M->extModeInfo,
      &untitled_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(untitled_M->extModeInfo, untitled_M->Sizes.checksums);
    rteiSetTPtr(untitled_M->extModeInfo, rtmGetTPtr(untitled_M));
  }

  /* Start for MATLABSystem: '<Root>/BNO055 IMU Sensor' */
  untitled_DW.obj.i2cObj.matlabCodegenIsDeleted = true;
  untitled_DW.obj.matlabCodegenIsDeleted = true;
  unt_arduinoBNO055_arduinoBNO055(&untitled_DW.obj, &untitled_DW.gobj_0);
  untitled_DW.obj.SampleTime = untitled_P.BNO055IMUSensor_SampleTime;
  untitled_SystemCore_setup(&untitled_DW.obj);
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/BNO055 IMU Sensor' */
  matlabCodegenHandle_matlabCodeg(&untitled_DW.obj);
  matlabCodegenHandle_matlabCod_b(&untitled_DW.obj.i2cObj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
