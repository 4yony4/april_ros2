current_dir=./
ros2_dir=~/ros2_galactic/

cd ../src


#build all packages
colcon build

#source ROs2
source $ros2_dir/install/setup.bash


#source workspace install
source ./install/setup.bash

#run script
ros2 launch sim sim.launch.py

cd $current_dir