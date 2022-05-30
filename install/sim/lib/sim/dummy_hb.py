#!/usr/bin/env python3

from matplotlib import rc
import rclpy
import random
from time import sleep
from rclpy.node import Node

from std_msgs.msg import String
from std_msgs.msg import Float32MultiArray


class Dummy_Publisher_HB(Node):

    def __init__(self):
        super().__init__('hb_strategies')

        self.publisher_ = self.create_publisher(String, 'hb_topic', 10)
        self.i = 0
        self.timeMin=20
        self.timeMax=60
        self.publishData()


    def publishData(self):
        while True:
            delay = random.uniform(self.timeMin, self.timeMax)
            #print("Sleep " + str(delay) + "s")
            msg = String()
            ##msg.data = 'GRASP: %d' % self.i
            #print(self.topicMsg())
            msg.data=('HUMAN BEHAVIOUR: %d' % self.i)
            self.publisher_.publish(msg)
            #self.get_logger().info('Publishing: "%s"' % msg.data)
            self.i += 1
            sleep(delay)
            
        
        
def main(args=None):
    rclpy.init(args=args)
    dummy=Dummy_Publisher_HB()
    rclpy.spin(dummy)
    dummy.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()