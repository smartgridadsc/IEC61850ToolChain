/*
 * static_model.c
 *
 * automatically generated from LIED11.iid
 */
#include "LIED11.h"

static void initializeValues();

extern DataSet iedModelds_CTRL_LLN0_Status;
extern DataSet iedModelds_PROT_LLN0_Alarm;
extern DataSet iedModelds_MEAS_LLN0_Meas;


extern DataSetEntry iedModelds_CTRL_LLN0_Status_fcda0;
extern DataSetEntry iedModelds_CTRL_LLN0_Status_fcda1;
extern DataSetEntry iedModelds_CTRL_LLN0_Status_fcda2;
extern DataSetEntry iedModelds_CTRL_LLN0_Status_fcda3;
extern DataSetEntry iedModelds_CTRL_LLN0_Status_fcda4;

DataSetEntry iedModelds_CTRL_LLN0_Status_fcda0 = {
  "CTRL",
  false,
  "XCBR$ST$Pos$stVal",
  -1,
  NULL,
  NULL,
  &iedModelds_CTRL_LLN0_Status_fcda1
};

DataSetEntry iedModelds_CTRL_LLN0_Status_fcda1 = {
  "CTRL",
  false,
  "XSWI$ST$Pos$stVal",
  -1,
  NULL,
  NULL,
  &iedModelds_CTRL_LLN0_Status_fcda2
};

DataSetEntry iedModelds_CTRL_LLN0_Status_fcda2 = {
  "CTRL",
  false,
  "XSWI$ST$Pos$stVal",
  -1,
  NULL,
  NULL,
  &iedModelds_CTRL_LLN0_Status_fcda3
};

DataSetEntry iedModelds_CTRL_LLN0_Status_fcda3 = {
  "CTRL",
  false,
  "PTRC$ST$EEHealth$stVal",
  -1,
  NULL,
  NULL,
  &iedModelds_CTRL_LLN0_Status_fcda4
};

DataSetEntry iedModelds_CTRL_LLN0_Status_fcda4 = {
  "CTRL",
  false,
  "XCBR$ST$Loc$stVal",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_CTRL_LLN0_Status = {
  "CTRL",
  "LLN0$Status",
  5,
  &iedModelds_CTRL_LLN0_Status_fcda0,
  &iedModelds_PROT_LLN0_Alarm
};

extern DataSetEntry iedModelds_PROT_LLN0_Alarm_fcda0;
extern DataSetEntry iedModelds_PROT_LLN0_Alarm_fcda1;
extern DataSetEntry iedModelds_PROT_LLN0_Alarm_fcda2;
extern DataSetEntry iedModelds_PROT_LLN0_Alarm_fcda3;
extern DataSetEntry iedModelds_PROT_LLN0_Alarm_fcda4;

DataSetEntry iedModelds_PROT_LLN0_Alarm_fcda0 = {
  "PROT",
  false,
  "PIOC$ST$Op$general",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_Alarm_fcda1
};

DataSetEntry iedModelds_PROT_LLN0_Alarm_fcda1 = {
  "PROT",
  false,
  "XCBR$ST$EEHealth$stVal",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_Alarm_fcda2
};

DataSetEntry iedModelds_PROT_LLN0_Alarm_fcda2 = {
  "PROT",
  false,
  "LPHD$ST$PwrSupAlm$stVal",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_Alarm_fcda3
};

DataSetEntry iedModelds_PROT_LLN0_Alarm_fcda3 = {
  "PROT",
  false,
  "PSCH$ST$ProTx$stVal",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_Alarm_fcda4
};

DataSetEntry iedModelds_PROT_LLN0_Alarm_fcda4 = {
  "PROT",
  false,
  "PSCH$ST$ProRx$stVal",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_PROT_LLN0_Alarm = {
  "PROT",
  "LLN0$Alarm",
  5,
  &iedModelds_PROT_LLN0_Alarm_fcda0,
  &iedModelds_MEAS_LLN0_Meas
};

extern DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda0;
extern DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda1;
extern DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda2;
extern DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda3;
extern DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda4;
extern DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda5;
extern DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda6;
extern DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda7;
extern DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda8;
extern DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda9;

DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda0 = {
  "MEAS",
  false,
  "MMXU$MX$A$phsA$instCVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_Meas_fcda1
};

DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda1 = {
  "MEAS",
  false,
  "MMXU$MX$A$phsB$instCVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_Meas_fcda2
};

DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda2 = {
  "MEAS",
  false,
  "MMXU$MX$A$phsC$instCVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_Meas_fcda3
};

DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda3 = {
  "MEAS",
  false,
  "MMXU$MX$PhV$phsA$instCVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_Meas_fcda4
};

DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda4 = {
  "MEAS",
  false,
  "MMXU$MX$PhV$phsB$instCVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_Meas_fcda5
};

DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda5 = {
  "MEAS",
  false,
  "MMXU$MX$PhV$phsC$instCVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_Meas_fcda6
};

DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda6 = {
  "MEAS",
  false,
  "MMXU$MX$TotW$instMag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_Meas_fcda7
};

DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda7 = {
  "MEAS",
  false,
  "MMXU$MX$TotVAr$instMag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_Meas_fcda8
};

DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda8 = {
  "MEAS",
  false,
  "MMXU$MX$Hz$instMag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_Meas_fcda9
};

DataSetEntry iedModelds_MEAS_LLN0_Meas_fcda9 = {
  "MEAS",
  false,
  "MMXU$MX$TotPF$instMag$f",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_MEAS_LLN0_Meas = {
  "MEAS",
  "LLN0$Meas",
  10,
  &iedModelds_MEAS_LLN0_Meas_fcda0,
  NULL
};

LogicalDevice iedModel_CTRL = {
    LogicalDeviceModelType,
    "CTRL",
    (ModelNode*) &iedModel,
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_CTRL_LLN0
};

LogicalNode iedModel_CTRL_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_PTRC,
    (ModelNode*) &iedModel_CTRL_LLN0_Mod,
};

DataObject iedModel_CTRL_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_CTRL_LLN0,
    (ModelNode*) &iedModel_CTRL_LLN0_Beh,
    (ModelNode*) &iedModel_CTRL_LLN0_Mod_stVal,
    0
};

DataAttribute iedModel_CTRL_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LLN0_Mod,
    (ModelNode*) &iedModel_CTRL_LLN0_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LLN0_Mod,
    (ModelNode*) &iedModel_CTRL_LLN0_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LLN0_Mod,
    (ModelNode*) &iedModel_CTRL_LLN0_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CTRL_LLN0_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_LLN0,
    (ModelNode*) &iedModel_CTRL_LLN0_Health,
    (ModelNode*) &iedModel_CTRL_LLN0_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LLN0_Beh,
    (ModelNode*) &iedModel_CTRL_LLN0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LLN0_Beh,
    (ModelNode*) &iedModel_CTRL_LLN0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LLN0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_CTRL_LLN0,
    (ModelNode*) &iedModel_CTRL_LLN0_Loc,
    (ModelNode*) &iedModel_CTRL_LLN0_Health_stVal,
    0
};

DataAttribute iedModel_CTRL_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LLN0_Health,
    (ModelNode*) &iedModel_CTRL_LLN0_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LLN0_Health,
    (ModelNode*) &iedModel_CTRL_LLN0_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LLN0_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_LLN0_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_CTRL_LLN0,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs,
    (ModelNode*) &iedModel_CTRL_LLN0_Loc_stVal,
    0
};

DataAttribute iedModel_CTRL_LLN0_Loc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LLN0_Loc,
    (ModelNode*) &iedModel_CTRL_LLN0_Loc_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_Loc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LLN0_Loc,
    (ModelNode*) &iedModel_CTRL_LLN0_Loc_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LLN0_Loc,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_LLN0_LEDRs = {
    DataObjectModelType,
    "LEDRs",
    (ModelNode*) &iedModel_CTRL_LLN0,
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_origin,
    0
};

DataAttribute iedModel_CTRL_LLN0_LEDRs_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_ctlNum,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_origin_orCat,
    0,
    IEC61850_FC_ST,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_origin,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_stVal,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_ctlModel,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper_ctlNum,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper_origin,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper,
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_LEDRs_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CTRL_LLN0_LEDRs,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_CTRL_LLN0,
    NULL,
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt_vendor,
    0
};

DataAttribute iedModel_CTRL_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt_configRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt_ldNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_CTRL_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_CTRL_PTRC = {
    LogicalNodeModelType,
    "PTRC",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_XCBR,
    (ModelNode*) &iedModel_CTRL_PTRC_EEHealth,
};

DataObject iedModel_CTRL_PTRC_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_CTRL_PTRC,
    NULL,
    (ModelNode*) &iedModel_CTRL_PTRC_EEHealth_stVal,
    0
};

DataAttribute iedModel_CTRL_PTRC_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_PTRC_EEHealth,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

LogicalNode iedModel_CTRL_XCBR = {
    LogicalNodeModelType,
    "XCBR",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_XSWI,
    (ModelNode*) &iedModel_CTRL_XCBR_Loc,
};

DataObject iedModel_CTRL_XCBR_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_CTRL_XCBR,
    (ModelNode*) &iedModel_CTRL_XCBR_Pos,
    (ModelNode*) &iedModel_CTRL_XCBR_Loc_stVal,
    0
};

DataAttribute iedModel_CTRL_XCBR_Loc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_XCBR_Loc,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_XCBR_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_CTRL_XCBR,
    NULL,
    (ModelNode*) &iedModel_CTRL_XCBR_Pos_stVal,
    0
};

DataAttribute iedModel_CTRL_XCBR_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_XCBR_Pos,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

LogicalNode iedModel_CTRL_XSWI = {
    LogicalNodeModelType,
    "XSWI",
    (ModelNode*) &iedModel_CTRL,
    NULL,
    (ModelNode*) &iedModel_CTRL_XSWI_Pos,
};

DataObject iedModel_CTRL_XSWI_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_CTRL_XSWI,
    NULL,
    (ModelNode*) &iedModel_CTRL_XSWI_Pos_stVal,
    0
};

DataAttribute iedModel_CTRL_XSWI_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_XSWI_Pos,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};


LogicalDevice iedModel_PROT = {
    LogicalDeviceModelType,
    "PROT",
    (ModelNode*) &iedModel,
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_PROT_LLN0
};

LogicalNode iedModel_PROT_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_PTOC,
    (ModelNode*) &iedModel_PROT_LLN0_Mod,
};

DataObject iedModel_PROT_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_PROT_LLN0,
    (ModelNode*) &iedModel_PROT_LLN0_Beh,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_origin,
    0
};

DataAttribute iedModel_PROT_LLN0_Mod_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_PROT_LLN0_Mod,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_ctlNum,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_origin_orCat,
    0,
    IEC61850_FC_ST,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_PROT_LLN0_Mod_origin,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_PROT_LLN0_Mod_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_PROT_LLN0_Mod,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_stVal,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_LLN0_Mod,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_LLN0_Mod,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_LLN0_Mod,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_PROT_LLN0_Mod,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_ctlModel,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper_ctlNum,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper_origin,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper,
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_PROT_LLN0_Mod_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_LLN0_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_PROT_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_LLN0,
    (ModelNode*) &iedModel_PROT_LLN0_Health,
    (ModelNode*) &iedModel_PROT_LLN0_Beh_stVal,
    0
};

DataAttribute iedModel_PROT_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_LLN0_Beh,
    (ModelNode*) &iedModel_PROT_LLN0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_LLN0_Beh,
    (ModelNode*) &iedModel_PROT_LLN0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_LLN0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_PROT_LLN0,
    (ModelNode*) &iedModel_PROT_LLN0_OpTmh,
    (ModelNode*) &iedModel_PROT_LLN0_Health_stVal,
    0
};

DataAttribute iedModel_PROT_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_LLN0_Health,
    (ModelNode*) &iedModel_PROT_LLN0_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_LLN0_Health,
    (ModelNode*) &iedModel_PROT_LLN0_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_LLN0_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_LLN0_OpTmh = {
    DataObjectModelType,
    "OpTmh",
    (ModelNode*) &iedModel_PROT_LLN0,
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,
    (ModelNode*) &iedModel_PROT_LLN0_OpTmh_stVal,
    0
};

DataAttribute iedModel_PROT_LLN0_OpTmh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_LLN0_OpTmh,
    (ModelNode*) &iedModel_PROT_LLN0_OpTmh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_OpTmh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_LLN0_OpTmh,
    (ModelNode*) &iedModel_PROT_LLN0_OpTmh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_OpTmh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_LLN0_OpTmh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_PROT_LLN0,
    NULL,
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_vendor,
    0
};

DataAttribute iedModel_PROT_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_configRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt_ldNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_PROT_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_PTOC = {
    LogicalNodeModelType,
    "PTOC",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_PIOC,
    (ModelNode*) &iedModel_PROT_PTOC_Op,
};

DataObject iedModel_PROT_PTOC_Op = {
    DataObjectModelType,
    "Op",
    (ModelNode*) &iedModel_PROT_PTOC,
    NULL,
    (ModelNode*) &iedModel_PROT_PTOC_Op_general,
    0
};

DataAttribute iedModel_PROT_PTOC_Op_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTOC_Op,
    (ModelNode*) &iedModel_PROT_PTOC_Op_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC_Op_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTOC_Op,
    (ModelNode*) &iedModel_PROT_PTOC_Op_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC_Op_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTOC_Op,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_PIOC = {
    LogicalNodeModelType,
    "PIOC",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_XCBR,
    (ModelNode*) &iedModel_PROT_PIOC_Op,
};

DataObject iedModel_PROT_PIOC_Op = {
    DataObjectModelType,
    "Op",
    (ModelNode*) &iedModel_PROT_PIOC,
    NULL,
    (ModelNode*) &iedModel_PROT_PIOC_Op_general,
    0
};

DataAttribute iedModel_PROT_PIOC_Op_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PIOC_Op,
    (ModelNode*) &iedModel_PROT_PIOC_Op_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PIOC_Op_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PIOC_Op,
    (ModelNode*) &iedModel_PROT_PIOC_Op_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PIOC_Op_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PIOC_Op,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_XCBR = {
    LogicalNodeModelType,
    "XCBR",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_LPHD,
    (ModelNode*) &iedModel_PROT_XCBR_EEHealth,
};

DataObject iedModel_PROT_XCBR_EEHealth = {
    DataObjectModelType,
    "EEHealth",
    (ModelNode*) &iedModel_PROT_XCBR,
    NULL,
    (ModelNode*) &iedModel_PROT_XCBR_EEHealth_stVal,
    0
};

DataAttribute iedModel_PROT_XCBR_EEHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_XCBR_EEHealth,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_LPHD = {
    LogicalNodeModelType,
    "LPHD",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_PSCH,
    (ModelNode*) &iedModel_PROT_LPHD_PwrSupAlm,
};

DataObject iedModel_PROT_LPHD_PwrSupAlm = {
    DataObjectModelType,
    "PwrSupAlm",
    (ModelNode*) &iedModel_PROT_LPHD,
    NULL,
    (ModelNode*) &iedModel_PROT_LPHD_PwrSupAlm_stVal,
    0
};

DataAttribute iedModel_PROT_LPHD_PwrSupAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_LPHD_PwrSupAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_PSCH = {
    LogicalNodeModelType,
    "PSCH",
    (ModelNode*) &iedModel_PROT,
    NULL,
    (ModelNode*) &iedModel_PROT_PSCH_ProTx,
};

DataObject iedModel_PROT_PSCH_ProTx = {
    DataObjectModelType,
    "ProTx",
    (ModelNode*) &iedModel_PROT_PSCH,
    (ModelNode*) &iedModel_PROT_PSCH_ProRx,
    (ModelNode*) &iedModel_PROT_PSCH_ProTx_stVal,
    0
};

DataAttribute iedModel_PROT_PSCH_ProTx_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PSCH_ProTx,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PSCH_ProRx = {
    DataObjectModelType,
    "ProRx",
    (ModelNode*) &iedModel_PROT_PSCH,
    NULL,
    (ModelNode*) &iedModel_PROT_PSCH_ProRx_stVal,
    0
};

DataAttribute iedModel_PROT_PSCH_ProRx_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PSCH_ProRx,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};


LogicalDevice iedModel_MEAS = {
    LogicalDeviceModelType,
    "MEAS",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_MEAS_LLN0
};

LogicalNode iedModel_MEAS_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
};

DataObject iedModel_MEAS_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_MEAS_LLN0,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod_stVal,
    0
};

DataAttribute iedModel_MEAS_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
    (ModelNode*) &iedModel_MEAS_LLN0_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_MEAS_LLN0_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_LLN0,
    (ModelNode*) &iedModel_MEAS_LLN0_Health,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_MEAS_LLN0,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_Health_stVal,
    0
};

DataAttribute iedModel_MEAS_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LLN0_Health,
    (ModelNode*) &iedModel_MEAS_LLN0_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LLN0_Health,
    (ModelNode*) &iedModel_MEAS_LLN0_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LLN0_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_MEAS_LLN0,
    NULL,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_vendor,
    0
};

DataAttribute iedModel_MEAS_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_configRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt_ldNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_MEAS_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_MMXU = {
    LogicalNodeModelType,
    "MMXU",
    (ModelNode*) &iedModel_MEAS,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_Mod,
};

DataObject iedModel_MEAS_MMXU_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_MMXU_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU_Mod_stVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU_Mod,
    (ModelNode*) &iedModel_MEAS_MMXU_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_Mod,
    (ModelNode*) &iedModel_MEAS_MMXU_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_Mod,
    (ModelNode*) &iedModel_MEAS_MMXU_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_MEAS_MMXU_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_MMXU_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU_TotW_instMag,
    0
};

DataAttribute iedModel_MEAS_MMXU_TotW_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_MEAS_MMXU_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU_TotW_mag,
    (ModelNode*) &iedModel_MEAS_MMXU_TotW_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotW_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_TotW_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU_TotW_q,
    (ModelNode*) &iedModel_MEAS_MMXU_TotW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_TotW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU_TotW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU_TotW_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotW_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU_TotW_db,
    (ModelNode*) &iedModel_MEAS_MMXU_TotW_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotW_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_TotW_units,
    (ModelNode*) &iedModel_MEAS_MMXU_TotW_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotW_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_TotW_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotW_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_TotW,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr_instMag,
    0
};

DataAttribute iedModel_MEAS_MMXU_TotVAr_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr_mag,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVAr_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr_q,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVAr_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVAr_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr_db,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVAr_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr_units,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVAr_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVAr_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA_instMag,
    0
};

DataAttribute iedModel_MEAS_MMXU_TotVA_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA_mag,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVA_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA_q,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVA_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA_db,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA_units,
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotVA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_TotVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_TotPF = {
    DataObjectModelType,
    "TotPF",
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_MMXU_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF_instMag,
    0
};

DataAttribute iedModel_MEAS_MMXU_TotPF_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF,
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF_mag,
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotPF_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotPF_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF,
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF_q,
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotPF_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotPF_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF,
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotPF_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF,
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotPF_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF,
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF_db,
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotPF_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF_units,
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotPF_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_TotPF_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_TotPF,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_Hz = {
    DataObjectModelType,
    "Hz",
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU_Hz_instMag,
    0
};

DataAttribute iedModel_MEAS_MMXU_Hz_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_MEAS_MMXU_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU_Hz_mag,
    (ModelNode*) &iedModel_MEAS_MMXU_Hz_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Hz_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_Hz_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Hz_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU_Hz_q,
    (ModelNode*) &iedModel_MEAS_MMXU_Hz_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Hz_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_Hz_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Hz_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU_Hz_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Hz_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU_Hz_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Hz_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU_Hz_db,
    (ModelNode*) &iedModel_MEAS_MMXU_Hz_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Hz_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_Hz_units,
    (ModelNode*) &iedModel_MEAS_MMXU_Hz_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Hz_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_Hz_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Hz_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_Hz,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_PPV = {
    DataObjectModelType,
    "PPV",
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB,
    0
};

DataObject iedModel_MEAS_MMXU_PPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_PPV_phsAB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsAB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsAB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_q,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsAB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsAB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_db,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsAB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_units,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsAB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsAB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_PPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_PPV_phsBC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsBC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsBC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_q,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsBC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsBC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_db,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsBC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_units,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsBC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsBC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_PPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_PPV_phsCA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsCA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsCA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_q,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsCA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsCA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_db,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsCA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_units,
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsCA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PPV_phsCA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_PPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_MMXU_A,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA,
    0
};

DataObject iedModel_MEAS_MMXU_PhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_instCVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_instCVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_instCVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_instCVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_instCVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_instCVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_db,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_units,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_PhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_instCVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_instCVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_instCVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_instCVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_instCVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_instCVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_db,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_units,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_PhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_instCVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_instCVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_instCVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_instCVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_instCVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_instCVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_db,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_units,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_PhV_res = {
    DataObjectModelType,
    "res",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_angRef,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_PhV_res_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_res_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_instCVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_instCVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_res_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_res_instCVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_instCVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_res_instCVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_instCVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_res_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_q,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_res_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_res_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_res_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_res_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_res_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_res_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_res_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_db,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_res_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_units,
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_res_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_res_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV_res,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PhV_angRef = {
    DataAttributeModelType,
    "angRef",
    (ModelNode*) &iedModel_MEAS_MMXU_PhV,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_MMXU_W,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA,
    0
};

DataObject iedModel_MEAS_MMXU_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU_A,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_A_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_instCVal,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_instCVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsA_instCVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_instCVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsA_instCVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_instCVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsA_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsA_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_db,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_units,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU_A,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_A_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_instCVal,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_instCVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsB_instCVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_instCVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsB_instCVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_instCVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsB_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsB_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_db,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_units,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU_A,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_A_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_instCVal,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_instCVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsC_instCVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_instCVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsC_instCVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_instCVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsC_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsC_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_db,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_units,
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_A_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_A_neut = {
    DataObjectModelType,
    "neut",
    (ModelNode*) &iedModel_MEAS_MMXU_A,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_A_neut_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_neut_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_instCVal,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_instCVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_neut_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_neut_instCVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_instCVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_neut_instCVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_instCVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_neut_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_q,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_neut_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_neut_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_neut_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_neut_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_neut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_neut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_neut_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_db,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_neut_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_units,
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_neut_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_neut_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_A_neut,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_A_res = {
    DataObjectModelType,
    "res",
    (ModelNode*) &iedModel_MEAS_MMXU_A,
    (ModelNode*) &iedModel_MEAS_MMXU_A_angRef,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_A_res_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_res_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_instCVal,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_instCVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_res_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_res_instCVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_instCVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_res_instCVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_instCVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_res_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_q,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_res_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_cVal_ang,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_res_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_res_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_res_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_res_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_res_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_res_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_db,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_res_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_units,
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_res_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_res_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_A_res,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_A_angRef = {
    DataAttributeModelType,
    "angRef",
    (ModelNode*) &iedModel_MEAS_MMXU_A,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_W = {
    DataObjectModelType,
    "W",
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA,
    0
};

DataObject iedModel_MEAS_MMXU_W_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU_W,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_W_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_db,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_units,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_W_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU_W,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_W_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_db,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_units,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_W_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU_W,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_W_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_db,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_units,
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_W_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_W_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_VAr = {
    DataObjectModelType,
    "VAr",
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_MMXU_VA,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA,
    0
};

DataObject iedModel_MEAS_MMXU_VAr_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_VAr_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_db,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_units,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_VAr_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_VAr_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_db,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_units,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_VAr_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_VAr_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_db,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_units,
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VAr_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_VAr_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_VA = {
    DataObjectModelType,
    "VA",
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_MMXU_PF,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA,
    0
};

DataObject iedModel_MEAS_MMXU_VA_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU_VA,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_VA_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_db,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_units,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_VA_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU_VA,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_VA_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_db,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_units,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_VA_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU_VA,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_VA_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_db,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_units,
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_VA_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_VA_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_PF = {
    DataObjectModelType,
    "PF",
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_MMXU_Health,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA,
    0
};

DataObject iedModel_MEAS_MMXU_PF_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU_PF,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_PF_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_db,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_units,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_PF_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU_PF,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_PF_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_db,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_units,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_PF_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU_PF,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_instCVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_PF_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_cVal,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_db,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_units,
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_PF_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_MEAS_MMXU_PF_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_MEAS_MMXU,
    (ModelNode*) &iedModel_MEAS_MMXU_NamPlt,
    (ModelNode*) &iedModel_MEAS_MMXU_Health_stVal,
    0
};

DataAttribute iedModel_MEAS_MMXU_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU_Health,
    (ModelNode*) &iedModel_MEAS_MMXU_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU_Health,
    (ModelNode*) &iedModel_MEAS_MMXU_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_MEAS_MMXU,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU_NamPlt_vendor,
    0
};

DataAttribute iedModel_MEAS_MMXU_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MEAS_MMXU_NamPlt,
    (ModelNode*) &iedModel_MEAS_MMXU_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MEAS_MMXU_NamPlt,
    (ModelNode*) &iedModel_MEAS_MMXU_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_MEAS_MMXU_NamPlt,
    (ModelNode*) &iedModel_MEAS_MMXU_NamPlt_configRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_MEAS_MMXU_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};




extern GSEControlBlock iedModel_CTRL_LLN0_gse0;
extern GSEControlBlock iedModel_PROT_LLN0_gse0;
extern GSEControlBlock iedModel_MEAS_LLN0_gse0;
GSEControlBlock iedModel_CTRL_LLN0_gse0 = {&iedModel_CTRL_LLN0, "Status", "LIED11/CTRL/LLN0/Status", "Status", 10002, false, NULL, -1, -1, &iedModel_PROT_LLN0_gse0};
GSEControlBlock iedModel_PROT_LLN0_gse0 = {&iedModel_PROT_LLN0, "Alarm", "LIED11/PROT/LLN0/Alarm", "Alarm", 10002, false, NULL, -1, -1, &iedModel_MEAS_LLN0_gse0};
GSEControlBlock iedModel_MEAS_LLN0_gse0 = {&iedModel_MEAS_LLN0, "Meas", "LIED11/MEAS/LLN0/Meas", "Meas", 10002, false, NULL, -1, -1, NULL};

extern SettingGroupControlBlock iedModel_PROT_LLN0_sgcb;

SettingGroupControlBlock iedModel_PROT_LLN0_sgcb = {&iedModel_PROT_LLN0, 1, 4, 0, false, 0, 0, NULL};




IedModel iedModel = {
    "LIED11",
    &iedModel_CTRL,
    &iedModelds_CTRL_LLN0_Status,
    NULL,
    &iedModel_CTRL_LLN0_gse0,
    NULL,
    &iedModel_PROT_LLN0_sgcb,
    NULL,
    NULL,
    initializeValues
};

static void
initializeValues()
{
}
