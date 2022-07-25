
ros2_dir=~/ros2_galactic/

#source $ros2_dir/install/setup.bash

cd ..

#colcon build --packages-select event_ros_tools
colcon build --packages-select nc_controller

source install/local_setup.bash


ros2 run nc_controller nc_main

cd ./scripts/