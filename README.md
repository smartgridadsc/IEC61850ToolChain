# IEC61850 Toolchain

This toolchain aims to enable users (e.g., power grid operators) to easily create customized datasets for the validation of cybersecurity solutions for IEC 61850 communication-based substations. 
This toolchain processes different inputs (e.g., substation configurations, attack configurations, and simulation settings) and carries out the necessary processing steps needed for generating the customized datasets. 
This toolchain is basing on an open source project [libIEC61850](https://libiec61850.com/libiec61850/) 

## 3 types of attack allowed to create

  - Injection attck
  - Data tampering attack
  - DoS attack

## 3 ways to trigger attacks

  - by time
  - by certain packet parameters
  - by certain payload values
