import launch
import launch.actions
import launch.substitutions
import launch_ros.actions
from launch.actions import DeclareLaunchArgument
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    package_prefix = get_package_share_directory('event_ros_tools')
    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            'node_prefix',
            #default_value=[launch.substitutions.EnvironmentVariable('USER'), '_'],
            default_value=['SIM_PACKAGE', '_'],
            description='Prefix for node names'),
        launch_ros.actions.Node(
            package='fatigue', executable='dummy_fa', output='screen',
            name=['FATIGUE_PACKAGE', 'dummy_fa']),
        launch_ros.actions.Node(
            package='grasp', executable='dummy_grasp', output='screen',
            name=['GRASP_PACKAGE', 'dummy_grasp']),
        launch_ros.actions.Node(
            package='sim', executable='dummy_hb', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'dummy_hb']),
        launch_ros.actions.Node(
            package='mov', executable='dummy_nc', output='screen',
            name=['MOV_PACKAGE', 'dummy_nc']),
        launch_ros.actions.Node(
            package='sim', executable='dummy_nv', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'dummy_nv']),
        launch_ros.actions.Node(
            package='sim', executable='sim', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'sim']),
        launch_ros.actions.Node(
            package='nc_controller', executable='nc_main', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'nc_controller']),
        
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([get_package_share_directory('metavision_ros_driver'), '/launch/driver_node.launch.py']),
            launch_arguments={'node_name': 'bar'}.items(),
        ),

        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([get_package_share_directory('event_ros_tools'), '/launch/slicer_node.launch.py']),
            launch_arguments={'node_name': 'bar'}.items(),
        ),
    ])
