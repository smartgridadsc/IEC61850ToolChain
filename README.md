# IEC61850 Toolchain

This toolchain aims to enable users (e.g., power grid operators) to easily create customized datasets for the validation of cybersecurity solutions for IEC 61850 communication-based substations. 
This toolchain processes different inputs (e.g., substation configurations, attack configurations, and simulation settings) and carries out the necessary processing steps needed for generating the customized datasets. 
This toolchain is basing on an open source project [libIEC61850](https://libiec61850.com/libiec61850/) 
## Features
### 3 types of attack allowed to create

  - Injection attck
  - Data tampering attack
  - DoS attack

### 3 ways to trigger attacks

  - by time
  - by certain packet parameters
  - by certain payload values

## Installation
Clone this project to your local system and extract it.

## User Manual
You can create IEDs as many as you want. In this user manul we give an example to create one IED and run it to get security traffic traces.

### Create IED model by using SCL file:
- Open java program "EC61850ToolChain/model_generator_java/" in your IDE。
- Indicate your own SCL file to launch Java file "IEC61850ToolChain/model_generator_java/src/com/libiec61850/tools/StaticModelGenerator.java" 
- Get new created model files at "IEC61850ToolChain/model_generator_java/src/static_model.c and static_model.h"

### Customize IED
```sh
 cd IEC61850ToolChain/toolchain/
```
You will see lots of "IEDXX" folders in this directory. Each folder represents one IED already running in this toolchain. Suppose you want to customize "IED1" with your new created IED model.

Copy and paste new created model files "static_model.c" and "static_model.h" to "/IED1/models" for replacing old ones.
At IEC61850ToolChain/toolchain/IED1 comiple updated source code by:
```sh
make
```
### Configure IED non-attack packets payload
Open "IEC61850ToolChain/toolchain/IED1/value.csv", each row in this file is the payload every time IED1 broadcast. Modify those value to set the payload you want IED1 to send out.

### Configure IED attack behavior
open "IEC61850ToolChain/toolchain/IED1/AttackScenarioConfiguration.xml", in this file gives a template how to define 3 attacks: Injection, Data tampering and DoS. Tweak the value in this file to customize your attacking.

### Run the toolchain
Go back to directory "IEC61850ToolChain/toolchain/", open "simulationConfiguration.xml", this file defines the network interfaces used by each IED. If you only run IED1, delete other related items and only keep following content:
<?xml version="1.0"?>
<Simulations>
	<IED name="IED1" folder="AIED1" interface="ens33.1" port="102" duration="50"/>
</Simulations>

Rembmer give a valid interface name and port to IED1.
Then launch the software:
```sh
sudo python run.py
```
Open wireshark or other traffic capture tools to collect your IEC6180 trace!


License
---
to be continued
