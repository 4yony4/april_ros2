current_dir=./
ros2_dir=~/ros2_galactic/

export ROS1_INSTALL_PATH=/opt/ros/noetic
export ROS2_INSTALL_PATH=$ros2_dir/install

#ROS1 Environment initialization
source ${ROS1_INSTALL_PATH}/setup.bash


#ROS2 Environment init
source ${ROS2_INSTALL_PATH}/setup.bash


#Overlay workspaces
source ~/Dev/ROS/april_ros/devel/setup.bash
source ~/Dev/ROS2/april_ros2/src/install/setup.bash


#RUN BUILD
cd $ros2_dir
colcon build --symlink-install --packages-select ros1_bridge --cmake-force-configure
cd $current_dir