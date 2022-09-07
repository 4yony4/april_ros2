#START ROSCORE (ROS1 SERVER)
gnome-terminal --title="ROSCORE ROS1 Server" --tab -- bash -c "source /opt/ros/noetic/setup.bash; roscore; exec bash -i"

#START YARP SERVER
gnome-terminal --title="YARP SERVER" --tab -- bash -c "export ROS_MASTER_URI=http://localhost:11311; yarpserver --ros; exec bash -i"

#START ROS1 <---> ROS2 BRIDGE
gnome-terminal --title="ROS1 <--> ROS2 Bridge" --tab -- bash -c "source run_bridge.sh; exec bash -i"

#START YARP TALKER
gnome-terminal --title="YARP TALKER" --tab -- bash -c "sleep 2; cd ~/Dev/yarp/talker/;./talker; exec bash -i"

#START YARP TALKER
gnome-terminal --title="APRIL ROS2 RECEIVER" --tab -- bash -c "sleep 2; cd ~/Dev/ROS2/april_ros2;ros2 run yarp_com_pkg yarp_com; exec bash -i"


