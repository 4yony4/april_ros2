import os
import sys
sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..'))  # noqa
sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..', '..', 'launch'))  # noqa

import launch
import launch.actions
import launch.substitutions
import launch_ros.actions

import lifecycle_msgs.msg 
import launch.events  # noqa: E402
import launch_ros.events  # noqa: E402
import launch_ros.events.lifecycle  # noqa: E402

#def main(argv=sys.argv[1:]):
def generate_launch_description():
    """Run lifecycle nodes via launch."""
    ld = launch.LaunchDescription()

    # Prepare the talker node.
    dummy_node = launch_ros.actions.LifecycleNode(
        name='dummy', namespace='',
        package='lifecycle', executable='lifecycle_dummy', output='screen')

    # When the talker reaches the 'inactive' state, make it take the 'activate' transition.
    register_event_handler_for_dummy_reaches_inactive_state = launch.actions.RegisterEventHandler(
        launch_ros.event_handlers.OnStateTransition(
            target_lifecycle_node=dummy_node, goal_state='inactive',
            entities=[
                launch.actions.LogInfo(
                    msg="node 'dummy' reached the 'inactive' state, 'activating'."),
                launch.actions.EmitEvent(event=launch_ros.events.lifecycle.ChangeState(
                    lifecycle_node_matcher=launch.events.matches_action(dummy_node),
                    transition_id=lifecycle_msgs.msg.Transition.TRANSITION_ACTIVATE,
                )),
            ],
        )
    )

    # When the talker node reaches the 'active' state, log a message and start the SIM node.
    register_event_handler_for_dummy_reaches_active_state = launch.actions.RegisterEventHandler(
        launch_ros.event_handlers.OnStateTransition(
            target_lifecycle_node=dummy_node, goal_state='active',
            entities=[
                launch.actions.LogInfo(
                    msg="node 'dummy' reached the 'active' state, launching 'SIM'."),
                launch_ros.actions.LifecycleNode(
                    name='sim', namespace='',
                    package='lifecycle', executable='lifecycle_sim', output='screen'),
            ],
        )
    )

    # Make the talker node take the 'configure' transition.
    emit_event_to_request_that_dummy_does_configure_transition = launch.actions.EmitEvent(
        event=launch_ros.events.lifecycle.ChangeState(
            lifecycle_node_matcher=launch.events.matches_action(dummy_node),
            transition_id=lifecycle_msgs.msg.Transition.TRANSITION_CONFIGURE,
        )
    )

    # Add the actions to the launch description.
    # The order they are added reflects the order in which they will be executed.
    ld.add_action(register_event_handler_for_dummy_reaches_inactive_state)
    ld.add_action(register_event_handler_for_dummy_reaches_active_state)
    ld.add_action(dummy_node)
    ld.add_action(emit_event_to_request_that_dummy_does_configure_transition)

    print('Starting introspection of launch description...')
    print('')

    print(launch.LaunchIntrospector().format_launch_description(ld))

    print('')
    print('Starting launch of launch description...')
    print('')

    # ls = launch.LaunchService(argv=argv, debug=True)
    #ls = launch.LaunchService(argv=argv)
    #ls.include_launch_description(ld)
    #return ls.run()
    return ld

#if __name__ == '__main__':
#    main()
#def generate_launch_description():
#    return launch.LaunchDescription([
#        launch.actions.DeclareLaunchArgument(
#            'node_prefix',
#            default_value=[launch.substitutions.EnvironmentVariable('USER'), '_'],
#            description='Prefix for node names'),
#        launch_ros.actions.Node(
#            package='demo_nodes_cpp', executable='talker', output='screen',
#            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'talker']),
#    ])