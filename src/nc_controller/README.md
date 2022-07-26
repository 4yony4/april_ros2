# IIT - APRIL NEUROMORPHIC CAMERA CONTROLLER PACKAGE ROS2

## Description

This package contains all the algorithms, both in C++ and Python, to communicate with the Prophesee SilkyEvCam. It will run as part of the sim.launch.py file, after the metavision_ros_driver and the event_ros_tools are loaded.

## Topics

## Input topics

For now as input topics being used in this controller we have the:
* /image -> which receives an image representation frame by frame of what the camera is viewing.
* /event_camera/events -> Which receives a list of events, codified in the drivers encofing, and which can be used to obtain more information.


## Output topics

* /nc_controller/detected_human_motion -> Which for now only sends the human detected motion (see april_msgs/msg/human_motion.h) for more information on the message structure.
