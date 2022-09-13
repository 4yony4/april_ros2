#START ROSCORE (ROS1 SERVER)
#gnome-terminal --title="BUILD APRIL MSGS ROS1 and ROS2" --tab -- bash -c "source april_msgs_build.sh; exec bash -i"

#START ROSCORE (ROS1 SERVER)
#gnome-terminal --title="BUILD BRIDGE" --tab -- bash -c "sleep 15; source bridge_build.sh; exec bash -i"

source april_msgs_build.sh
cd ~/Dev/ROS2/april_ros2/scripts/
source bridge_build.sh