
ros2_dir=~/ros2_galactic/

cd ..

#colcon build --packages-select realsense-ros

. src/realsense-ros/install/setup.bash

cd ./scripts/

ros2 launch realsense2_camera rs_launch.py