/*
 * Primary and Secondary School License - for use in teaching and meeting
 * course requirements at primary and secondary schools only.  Not for
 * government, commercial, university, or other organizational use.
 *
 * File: lire_imu.c
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

#include "lire_imu.h"
#include "lire_imu_private.h"

/* Block signals (default storage) */
B_lire_imu_T lire_imu_B;

/* Block states (default storage) */
DW_lire_imu_T lire_imu_DW;

/* Real-time model */
RT_MODEL_lire_imu_T lire_imu_M_;
RT_MODEL_lire_imu_T *const lire_imu_M = &lire_imu_M_;

/* Forward declaration for local functions */
static void lire_imu_SystemCore_release(const codertarget_arduinobase_inter_T
  *obj);
static void lire_imu_SystemCore_delete(const codertarget_arduinobase_inter_T
  *obj);
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_inter_T *obj);
static void lire_imu_SystemCore_release_h(h_codertarget_arduinobase_int_T *obj);
static void lire_imu_SystemCore_delete_h(h_codertarget_arduinobase_int_T *obj);
static void matlabCodegenHandle_matlabCod_h(h_codertarget_arduinobase_int_T *obj);
static codertarget_arduinobase_inter_T *lir_arduinoBNO055_arduinoBNO055
  (codertarget_arduinobase_inter_T *obj, g_codertarget_arduinobase_int_T *iobj_0);
static boolean_T arduinoBNO055_check_BNO055_Chip(const
  codertarget_arduinobase_inter_T *obj);
static void arduinoBNO055_BNO055_WriteSenso(const
  codertarget_arduinobase_inter_T *obj);
static void lire_imu_SystemCore_setup(codertarget_arduinobase_inter_T *obj);
static void lire_imu_SystemCore_release(const codertarget_arduinobase_inter_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_I2C_Close(obj->i2cObj.MW_I2C_HANDLE);
  }
}

static void lire_imu_SystemCore_delete(const codertarget_arduinobase_inter_T
  *obj)
{
  lire_imu_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_inter_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    lire_imu_SystemCore_delete(obj);
  }
}

static void lire_imu_SystemCore_release_h(h_codertarget_arduinobase_int_T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void lire_imu_SystemCore_delete_h(h_codertarget_arduinobase_int_T *obj)
{
  lire_imu_SystemCore_release_h(obj);
}

static void matlabCodegenHandle_matlabCod_h(h_codertarget_arduinobase_int_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    lire_imu_SystemCore_delete_h(obj);
  }
}

static codertarget_arduinobase_inter_T *lir_arduinoBNO055_arduinoBNO055
  (codertarget_arduinobase_inter_T *obj, g_codertarget_arduinobase_int_T *iobj_0)
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

static void arduinoBNO055_BNO055_WriteSenso(const
  codertarget_arduinobase_inter_T *obj)
{
  uint8_T b_RegisterValue;
  uint8_T b_RegisterValue_0;
  uint8_T b_SwappedDataBytes[2];
  uint8_T SwappedDataBytes;
  uint8_T status;
  uint8_T SwappedDataBytes_0[2];
  status = 61U;
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

  status = 0U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 61U;
  memcpy((void *)&SwappedDataBytes_0[0], (void *)&b_SwappedDataBytes[0],
         (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, SwappedDataBytes_0, 2U,
                     false, false);
  MW_delay_in_milliseconds(25U);
  status = 7U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, &SwappedDataBytes,
    1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(obj->i2cObj.MW_I2C_HANDLE, 40U, &status, 1U, false, true);
    memcpy((void *)&b_RegisterValue_0, (void *)&status, (uint32_T)((size_t)1 *
            sizeof(uint8_T)));
  } else {
    b_RegisterValue_0 = 0U;
  }

  status = 1U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 7U;
  memcpy((void *)&SwappedDataBytes_0[0], (void *)&b_SwappedDataBytes[0],
         (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, SwappedDataBytes_0, 2U,
                     false, false);
  status = 13U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 8U;
  memcpy((void *)&SwappedDataBytes_0[0], (void *)&b_SwappedDataBytes[0],
         (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, SwappedDataBytes_0, 2U,
                     false, false);
  status = 11U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 9U;
  memcpy((void *)&SwappedDataBytes_0[0], (void *)&b_SwappedDataBytes[0],
         (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, SwappedDataBytes_0, 2U,
                     false, false);
  status = 56U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 10U;
  memcpy((void *)&SwappedDataBytes_0[0], (void *)&b_SwappedDataBytes[0],
         (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, SwappedDataBytes_0, 2U,
                     false, false);
  MW_delay_in_milliseconds(10U);
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&b_RegisterValue_0, (uint32_T)
         ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 7U;
  memcpy((void *)&SwappedDataBytes_0[0], (void *)&b_SwappedDataBytes[0],
         (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, SwappedDataBytes_0, 2U,
                     false, false);
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&b_RegisterValue, (uint32_T)
         ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 61U;
  memcpy((void *)&SwappedDataBytes_0[0], (void *)&b_SwappedDataBytes[0],
         (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, SwappedDataBytes_0, 2U,
                     false, false);
  MW_delay_in_milliseconds(20U);
}

static void lire_imu_SystemCore_setup(codertarget_arduinobase_inter_T *obj)
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
    CastedData = 7U;
    memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
           ((size_t)1 * sizeof(uint8_T)));
    b_SwappedDataBytes[0] = 61U;
    memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
           (uint32_T)((size_t)2 * sizeof(uint8_T)));
    MW_I2C_MasterWrite(obj->i2cObj.MW_I2C_HANDLE, 40U, SwappedDataBytes, 2U,
                       false, false);
    MW_delay_in_milliseconds(25U);
  }

  arduinoBNO055_BNO055_WriteSenso(obj);
  obj->isSetupComplete = true;
}

/* Model step function */
void lire_imu_step(void)
{
  int16_T b_RegisterValue[3];
  int16_T b_output[3];
  uint8_T SwappedDataBytes;
  uint8_T status;
  uint8_T output_raw[6];

  /* MATLABSystem: '<Root>/BNO055 IMU Sensor' */
  if (lire_imu_DW.obj.SampleTime != lire_imu_P.BNO055IMUSensor_SampleTime) {
    lire_imu_DW.obj.SampleTime = lire_imu_P.BNO055IMUSensor_SampleTime;
  }

  status = 8U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(lire_imu_DW.obj.i2cObj.MW_I2C_HANDLE, 40U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(lire_imu_DW.obj.i2cObj.MW_I2C_HANDLE, 40U, output_raw, 6U,
                      false, true);
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
  status = MW_I2C_MasterWrite(lire_imu_DW.obj.i2cObj.MW_I2C_HANDLE, 40U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(lire_imu_DW.obj.i2cObj.MW_I2C_HANDLE, 40U, output_raw, 6U,
                      false, true);
    memcpy((void *)&b_output[0], (void *)&output_raw[0], (uint32_T)((size_t)3 *
            sizeof(int16_T)));
  }

  status = 14U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(lire_imu_DW.obj.i2cObj.MW_I2C_HANDLE, 40U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(lire_imu_DW.obj.i2cObj.MW_I2C_HANDLE, 40U, output_raw, 6U,
                      false, true);
    memcpy((void *)&b_output[0], (void *)&output_raw[0], (uint32_T)((size_t)3 *
            sizeof(int16_T)));
  }

  lire_imu_B.BNO055IMUSensor_o1[0] = (real_T)b_RegisterValue[0] / 100.0;
  lire_imu_B.BNO055IMUSensor_o1[1] = (real_T)b_RegisterValue[1] / 100.0;
  lire_imu_B.BNO055IMUSensor_o1[2] = (real_T)b_RegisterValue[2] / 100.0;

  /* End of MATLABSystem: '<Root>/BNO055 IMU Sensor' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.1s, 0.0s] */
    rtExtModeUpload(0, (real_T)lire_imu_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.1s, 0.0s] */
    if ((rtmGetTFinal(lire_imu_M)!=-1) &&
        !((rtmGetTFinal(lire_imu_M)-lire_imu_M->Timing.taskTime0) >
          lire_imu_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(lire_imu_M, "Simulation finished");
    }

    if (rtmGetStopRequested(lire_imu_M)) {
      rtmSetErrorStatus(lire_imu_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  lire_imu_M->Timing.taskTime0 =
    (++lire_imu_M->Timing.clockTick0) * lire_imu_M->Timing.stepSize0;
}

/* Model initialize function */
void lire_imu_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(lire_imu_M, -1);
  lire_imu_M->Timing.stepSize0 = 0.1;

  /* External mode info */
  lire_imu_M->Sizes.checksums[0] = (3805241641U);
  lire_imu_M->Sizes.checksums[1] = (2190903049U);
  lire_imu_M->Sizes.checksums[2] = (2983739055U);
  lire_imu_M->Sizes.checksums[3] = (1057251307U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    lire_imu_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(lire_imu_M->extModeInfo,
      &lire_imu_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(lire_imu_M->extModeInfo, lire_imu_M->Sizes.checksums);
    rteiSetTPtr(lire_imu_M->extModeInfo, rtmGetTPtr(lire_imu_M));
  }

  /* Start for MATLABSystem: '<Root>/BNO055 IMU Sensor' */
  lire_imu_DW.obj.i2cObj.matlabCodegenIsDeleted = true;
  lire_imu_DW.obj.matlabCodegenIsDeleted = true;
  lir_arduinoBNO055_arduinoBNO055(&lire_imu_DW.obj, &lire_imu_DW.gobj_0);
  lire_imu_DW.obj.SampleTime = lire_imu_P.BNO055IMUSensor_SampleTime;
  lire_imu_SystemCore_setup(&lire_imu_DW.obj);
}

/* Model terminate function */
void lire_imu_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/BNO055 IMU Sensor' */
  matlabCodegenHandle_matlabCodeg(&lire_imu_DW.obj);
  matlabCodegenHandle_matlabCod_h(&lire_imu_DW.obj.i2cObj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
