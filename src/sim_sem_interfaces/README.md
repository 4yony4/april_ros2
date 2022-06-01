

## ------------------------------- input to SIM ------------------------------


from PEM: Environment.msg (including PhysicalObject)

from ISIM: Sight.msg

from PIM: RobotArm.msg (including RobotArmKinematic), RobotHand (including RobotHandKinematic.msg) (both refering to the robot)

from other software: FatigueAnalysis.msg, HumanBehaviour (including HumanGraspingStrategies.msg), RobotGraspingStrategies

## ------------------------------- output from SIM ------------------------------

to HICEM: RobotHighLatencyCorrections.msg, HumanParameterIntention (including HumanMotion), HumanHandGesture.msg




## ------------------------------- input to SEM ------------------------------


from PEM: Environment.msg (including PhysicalObject)

from ISIM: Emergency.msg

from LOCEM: EmergencyRequestStatus.msg

from other software: HumanMotion.msg / HumanBehaviour.msg (including HumanGraspingStrategies.msg), NeuromorphicSensing.msg

## ------------------------------- output from SEM ------------------------------

to HICEM: RobotHighLatencyCorrections.msg

to LOCEM: RobotLowLatencyCorrections.msg
