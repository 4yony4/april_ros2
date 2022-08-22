#include <string>
#include <cstdio>

#include "rclcpp/rclcpp.hpp"
#include "april_msgs/msg/human_sight.hpp"
#include "april_msgs/msg/emergency.hpp"

static const std::string TOPIC_DETECTED_HUMAN_SIGHT = "/isim/detected_human_sight";
static const std::string TOPIC_DETECTED_EMERGENCY = "/isim/emergency";

class isim : public rclcpp::Node
{

  public:
    isim()
    : Node("isim")
    {
        
      publisher_human_sight = this->create_publisher<april_msgs::msg::HumanSight>(TOPIC_DETECTED_HUMAN_SIGHT, 10);
      publisher_emergency = this->create_publisher<april_msgs::msg::Emergency>(TOPIC_DETECTED_EMERGENCY, 10);

    }

  private:

  rclcpp::Publisher<april_msgs::msg::HumanSight>::SharedPtr publisher_human_sight;
  rclcpp::Publisher<april_msgs::msg::Emergency>::SharedPtr publisher_emergency;

  void publish_human_sight() const{
    april_msgs::msg::HumanSight sight = april_msgs::msg::HumanSight();
    sight.set__sight_direction("right");
    
    if(publisher_human_sight->get_subscription_count() !=0){
      publisher_human_sight->publish(sight);
    }
  }

  void publish_emergency() const{
    april_msgs::msg::Emergency emergency = april_msgs::msg::Emergency();
    emergency.set__emergency_label("Human too close");
    
    if(publisher_emergency->get_subscription_count() !=0){
      publisher_emergency->publish(emergency);
    }
  }

};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<isim>());
  rclcpp::shutdown();
  return 0;
}