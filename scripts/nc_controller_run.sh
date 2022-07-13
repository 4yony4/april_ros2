
ros2_dir=~/ros2_galactic/

source $ros2_dir/install/setup.bash

cd ..

colcon build --packages-select nc_controller

source install/setup.bash

cd ./scripts/

ros2 run nc_controller nc_main