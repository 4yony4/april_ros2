import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from std_msgs.msg import Float32MultiArray


class Dummy_Publisher_Grasp(Node):

    def __init__(self):
        super().__init__('grasp_strategies')

        self.publisher_ = self.create_publisher(String, 'topic1', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = String()
        msg.data = 'GRASP: %d' % self.i
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1
        

class Dummy_Publisher_HBA(Node):

    def __init__(self):
        super().__init__('human_behaviour_analysis')

        self.publisher_ = self.create_publisher(String, 'topic2', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = String()
        msg.data = 'HUMAN BEHAVIOUR: %d' % self.i
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1

class Dummy_Publisher_NS(Node):

    def __init__(self):
        super().__init__('neuromorphic_sensing')

        self.publisher_ = self.create_publisher(String, 'topic3', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = String()
        msg.data = 'NEUROMORPHIC CAMERA: %d' % self.i
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1

class Dummy_Publisher_FA(Node):

    def __init__(self):
        super().__init__('fatigue_analysis')

        self.publisher_ = self.create_publisher(String, 'topic4', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = String()
        msg.data = 'FATIGUE ANALYSIS: %d' % self.i
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1


class Dummy_Publisher_NVC(Node):

    def __init__(self):
        super().__init__('nonverbal_communication')

        self.publisher_ = self.create_publisher(String, 'topic5', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = String()
        msg.data = 'NONVERBAL COMMUNICATION: %d' % self.i
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1

        
def main(args=None):
    rclpy.init(args=args)

    dummy_grasp = Dummy_Publisher_Grasp()
    dummy_hba = Dummy_Publisher_HBA()
    dummy_ns = Dummy_Publisher_NS()
    dummy_fa = Dummy_Publisher_FA()
    dummy_nvc = Dummy_Publisher_NVC()

    #rclpy.spin(dummy_grasp)
    rclpy.spin(dummy_hba)
    #rclpy.spin(dummy_ns)
    #rclpy.spin(dummy_fa)
    #rclpy.spin(dummy_nvc)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    dummy_grasp.destroy_node()
    dummy_hba.destroy_node()
    dummy_ns.destroy_node()
    dummy_fa.destroy_node()
    dummy_nvc.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()