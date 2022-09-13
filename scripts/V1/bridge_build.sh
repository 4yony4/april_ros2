current_dir=./
#ros2_dir=~/ros2_galactic/



#Overlay workspaces
echo "Overlay workspaces"
source ~/Dev/ROS/april_ros/install_isolated/setup.bash
#source ~/Dev/ROS/yarpros_com/install_isolated/setup.bash
source ~/Dev/ROS2/april_ros2/install/local_setup.bash
#source ~/Dev/ROS2/common_interfaces/install/local_setup.bash
#source ~/Dev/ROS2/april_msgs/install/local_setup.bash

echo "------------------------------IMPORTED PACKAGES FOR BUILD---------------------------------------"
echo "------------------------------IMPORTED PACKAGES FOR BUILD---------------------------------------"
echo $CMAKE_PREFIX_PATH | tr ':' '\n'

echo "------------------------------BUILDING BRIDGE---------------------------------------"
echo "------------------------------BUILDING BRIDGE---------------------------------------"
#RUN BUILD
cd ~/Dev/ROS2/april_bridge
colcon build --symlink-install --packages-select ros1_bridge --cmake-force-configure
source install/setup.bash
ros2 run ros1_bridge dynamic_bridge --print-pairs
cd ~/Dev/ROS2/april_ros2/scripts/

#cd ~/Dev/ROS2/april_bridge/
#colcon build --packages-select ros1_bridge --cmake-force-configure
#cd ~/Dev/ROS2/april_ros2/scripts/