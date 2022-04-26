from matplotlib import rc
import rclpy
import random
from time import sleep
from rclpy.node import Node

from std_msgs.msg import String
from std_msgs.msg import Float32MultiArray


class Dummy_Publisher_All(Node):

    def __init__(self):
        super().__init__('grasp_strategies')

        self.publisher_ = self.create_publisher(String, 'dummy_topic', 10)
        timer_period = 0.5  # seconds
        #self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
        self.publishData()

    def timer_callback(self):
        msg = String()
        ##msg.data = 'GRASP: %d' % self.i
        #print(self.topicMsg())
        msg.data=self.topicMsg()
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1

    def publishData(self):
        while True:
            delay = random.uniform(0, 1)
            #print("Sleep " + str(delay) + "s")
            msg = String()
            ##msg.data = 'GRASP: %d' % self.i
            #print(self.topicMsg())
            msg.data=self.topicMsg()
            self.publisher_.publish(msg)
            self.get_logger().info('Publishing: "%s"' % msg.data)
            self.i += 1
            sleep(delay)
            

    def topicMsg(self):
        r1 = random.randint(0, 4)
        if r1 == 0:
            return ('GRASP: %d' % self.i)
        elif r1 == 1:
            return ('HUMAN BEHAVIOUR: %d' % self.i)
        elif r1 == 2:
            return ('NEUROMORPHIC CAMERA: %d' % self.i)
        elif r1 == 3:
            return ('FATIGUE ANALYSIS: %d' % self.i)
        elif r1 == 4:  
            return ('NONVERBAL COMMUNICATION: %d' % self.i)
        else:
            return ('')

        
        
def main(args=None):
    rclpy.init(args=args)
    dummy=Dummy_Publisher_All()
    rclpy.spin(dummy)
    dummy.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()