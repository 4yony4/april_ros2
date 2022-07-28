# IIT - APRIL SAFETY AND ERGONOMICS MANAGER PACKAGE ROS2

## Description

As the name describes, SEM will take care of everything related to safety and ergonomics in the HRI process. For that, and considering the Safety is of high priority, it will have direct connection to LOCEM as well as HICEM.

## Input topics

* from PEM: SIMSEMEnvironment.msg (including SIMSEMPhysicalObject)

* from ISIM: SEMEmergency.msg

* from LOCEM: SEMEmergencyRequestStatus.msg

* from other software: SIMSEMHumanMotion.msg, SIMSEMHumanBehaviour.msg (including SIMSEMHumanGraspingStrategies.msg), SEMNeuromorphicSensing.msg


## Output topics

* to HICEM: SIMSEMRobotHighLatencyCorrections.msg

* to LOCEM: SEMRobotLowLatencyCorrections.msg