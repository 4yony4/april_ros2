#START YARP SERVER
gnome-terminal --tab -- bash -c "yarpserver --ros; exec bash -i"

#START ROSCORE (ROS1 SERVER)
gnome-terminal --tab -- bash -c "source /opt/ros/noetic/setup.bash; roscore; exec bash -i"

#START ROS1 <---> ROS2 BRIDGE
gnome-terminal --tab -- bash -c "source run_bridge.sh; exec bash -i"
