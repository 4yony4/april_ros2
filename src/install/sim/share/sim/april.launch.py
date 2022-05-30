import launch
import launch.actions
import launch.substitutions
import launch_ros.actions


def generate_launch_description():
    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            'node_prefix',
            #default_value=[launch.substitutions.EnvironmentVariable('USER'), '_'],
            default_value=['APRIL', '_'],
            description='Prefix for node names'),
        launch_ros.actions.Node(
            package='april_ros2', executable='dummy_fa', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'dummy_fa']),
        launch_ros.actions.Node(
            package='april_ros2', executable='dummy_grasp', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'dummy_grasp']),
        launch_ros.actions.Node(
            package='april_ros2', executable='dummy_hb', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'dummy_hb']),
        launch_ros.actions.Node(
            package='april_ros2', executable='dummy_nc', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'dummy_nc']),
        launch_ros.actions.Node(
            package='april_ros2', executable='dummy_nv', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'dummy_nv']),
        launch_ros.actions.Node(
            package='april_ros2', executable='sim', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'sim']),
    ])
