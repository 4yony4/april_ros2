source ${ROS1_INSTALL_PATH}/setup.bash

source ${ROS2_INSTALL_PATH}/setup.bash

export ROS_MASTER_URI=http://localhost:11311
cd ~/Dev/ROS2/april_bridge
source install/local_setup.sh
ros2 run ros1_bridge dynamic_bridge

