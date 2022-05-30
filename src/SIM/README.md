## SIM Package

## Set environmental ROS2

Follow instruction guide of ROS2 HUMBLE at: (Needs Ubuntu 22 to work ())
https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html

After this, you will have a folder with the ROS2 Galactic installed, the rosdep installed, and the dependencies.
Each time you will want to work with ROS2, you will need to initialize the script as seen:


In terminal>
```sh
. ~/ros2_galactic/ros2-linux/setup.bash
```

## Dev environment
In a different place in your PC, creare a /Dev/ros2_ws/src (ROS2 workplace) by running mkdir ~/Dev/ros2_ws/src.
This will create a SRC folder, where you will clone the APRIL_ROS2 package.

In this src folder we will create the packages we will work with.

## Build package

To build the cloned package, we will follow the guide in:
https://docs.ros.org/en/galactic/Tutorials/Workspace/Creating-A-Workspace.html#new-directory

After we cloned our APRIL_ROS2 package inside the SRC folder of our ROS2 workspace (ros2_ws), we will run from the ros2_ws folder the following commands:
```sh
rosdep install -i --from-path src --rosdistro galactic -y
```

Remember, IF a message appears as follows: 

WARNING: given --rosdistro galactic but ROS_DISTRO is "foxy". Ignoring environment.

Then we have to change the ROS_DISTRO variable on the system by running:

export ROS_DISTRO=galactic.

And run the rosdep install again.

Now we will RUN COLCON (which is installed using the following command):
```sh
sudo apt install python3-colcon-common-extensions
```

With Colcon installed, we can finally build our APRIL_ROS2 package:
```sh
colcon build
```

## Run package node

In terminal>

From the /src folder run:

First we run the INSTALL script:
```sh
. install/local_setup.bash
```

```sh
ros2 run my_package my_node
```

In our case it can either be:
```sh
ros2 run april_ros2 sim
``` 

```sh
ros2 run april_ros2 sem
``` 

```sh
ros2 run april_ros2 dummy
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

## Using RQT (Ros Node Graphs)

If you installed the latest version of ROS 2 Foxy, then just running:
```sh
rqt
```
Then select Plugins > Services > Service Caller from the menu bar at the top.

![rqt icon][rqt]



[rqt]: https://docs.ros.org/en/dashing/_images/rqt.png