export ROS1_INSTALL_PATH=/opt/ros/noetic
export ROS2_INSTALL_PATH=/opt/ros/galactic

echo "------------------------------Create APRIL_MSGS ROS1---------------------------------------"
echo "------------------------------Create APRIL_MSGS ROS1---------------------------------------"
#ROS1 Environment initialization
source ${ROS1_INSTALL_PATH}/setup.bash
#Build april_msgs for ROS1 and ROS2
cd ~/Dev/ROS/april_ros/
#catkin_make
catkin_make_isolated --install

#cd ~/Dev/ROS/yarpros_com/
#catkin_make_isolated --install

#ROS2 Environment init
echo "------------------------------Create APRIL_MSGS ROS2---------------------------------------"
echo "------------------------------Create APRIL_MSGS ROS2---------------------------------------"
source ${ROS2_INSTALL_PATH}/setup.bash
cd ~/Dev/ROS2/april_ros2/
colcon build --packages-select april_msgs 
#--allow-overriding