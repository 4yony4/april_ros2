import rclpy

from rclpy.node import Node

from std_msgs.msg import String
from std_msgs.msg import Int32MultiArray
from std_msgs.msg import Float32MultiArray


class SIM(Node):

    def __init__(self):
        super().__init__('sim')
        self.subscription = self.create_subscription(
            String,
            'dummy_topic',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warninge

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)


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