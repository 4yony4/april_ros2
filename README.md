## April ROS2 Package

## Set environmental ROS2

In terminal>
```sh
. ~/ros2_foxy/ros2-linux/setup.bash
```
## Run package node

In terminal>

From the /src folder run:
```sh
ros2 run my_package my_node
```
## Create a new Node

Python:
```sh
ros2 pkg create --build-type ament_python --node-name my_node my_package
```
CPP:
```sh
ros2 pkg create --build-type ament_cmake --node-name my_node my_package
```
## Build package

In Terminal navigate to you SRC folder and RUN:
```sh
colcon build (All packages in SRC)
colcon build --packages-select my_package (Specific package)
```

If you don't have COLCON, install it.


## Using RQT (Ros Node Graphs)

If you installed the latest version of ROS 2 Foxy, then just running:
```sh
rqt
```
Then select Plugins > Services > Service Caller from the menu bar at the top.

![rqt icon][rqt]



[rqt]: https://docs.ros.org/en/dashing/_images/rqt.png