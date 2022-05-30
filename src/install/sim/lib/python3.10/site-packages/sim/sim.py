#!/usr/bin/env python3

import rclpy

from rclpy.node import Node

from std_msgs.msg import String
from std_msgs.msg import Int32MultiArray
from std_msgs.msg import Float32MultiArray

from sim_sem_interfaces.msg import NeuromorphicSensing

class SIM(Node):

    def __init__(self):
        super().__init__('sim')
        self.subscription_grasp = self.create_subscription(
            String,
            'grasp_topic',
            self.listener_callback,
            10)
        self.subscription_fa = self.create_subscription(
            String,
            'fa_topic',
            self.listener_callback,
            10)
        self.subscription_hb = self.create_subscription(
            String,
            'hb_topic',
            self.listener_callback,
            10)
        self.subscription_nc = self.create_subscription(
            NeuromorphicSensing,
            'nc_topic',
            self.listener_callback_NC,
            10)
        self.subscription_nv = self.create_subscription(
            String,
            'nv_topic',
            self.listener_callback,
            10)
        self.subscription_grasp 
        self.subscription_fa
        self.subscription_hb
        self.subscription_nc
        self.subscription_nv

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)

    def listener_callback_NC(self, msg):
        self.get_logger().info('NC I heard: "%s"' % msg.point1_speed)
        self.get_logger().info('NC I heard: "%s"' % msg.point2_speed)

def main(args=None):
    rclpy.init(args=args)

    sim = SIM()

    rclpy.spin(sim)
    

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    sim.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()