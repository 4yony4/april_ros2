#include <string>
#include <cstdio>

#include "rclcpp/rclcpp.hpp"
#include "april_msgs/msg/robot_arm.hpp"
#include "april_msgs/msg/robot_hand.hpp"
#include "april_msgs/msg/tactile.hpp"

static const std::string TOPIC_ROBOT_ARM = "/pim/robot_arm";
static const std::string TOPIC_ROBOT_HAND = "/pim/robot_hand";
static const std::string TOPIC_TACTILE = "/pim/tactile";

class pim : public rclcpp::Node
{

  public:
    pim()
    : Node("pim")
    {
      publisher_robot_arm = this->create_publisher<april_msgs::msg::RobotArm>(TOPIC_ROBOT_ARM, 10);
      publisher_robot_hand = this->create_publisher<april_msgs::msg::RobotHand>(TOPIC_ROBOT_HAND, 10);
      publisher_tactile = this->create_publisher<april_msgs::msg::Tactile>(TOPIC_TACTILE, 10);
    }

  private:

  rclcpp::Publisher<april_msgs::msg::RobotArm>::SharedPtr publisher_robot_arm;
  rclcpp::Publisher<april_msgs::msg::RobotHand>::SharedPtr publisher_robot_hand;
  rclcpp::Publisher<april_msgs::msg::Tactile>::SharedPtr publisher_tactile;

  void publish_robot_arm() const{
    april_msgs::msg::RobotArm robot_arm = april_msgs::msg::RobotArm();
    
    robot_arm.set__state("ON");
    
    if(publisher_robot_arm->get_subscription_count() !=0){
      publisher_robot_arm->publish(robot_arm);
    }
  }

  void publish_robot_hand() const{
    april_msgs::msg::RobotHand robot_hand = april_msgs::msg::RobotHand();
    
    robot_hand.set__state("ON");
    
    if(publisher_robot_hand->get_subscription_count() !=0){
      publisher_robot_hand->publish(robot_hand);
    }
  }

  void publish_tactile() const{
    april_msgs::msg::Tactile tactile = april_msgs::msg::Tactile();
    
    tactile.set__label("label1");
    tactile.set__temperature(45.3);
    
    if(publisher_tactile->get_subscription_count() !=0){
      publisher_tactile->publish(tactile);
    }
  }

};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<pim>());
  rclcpp::shutdown();
  return 0;
}
