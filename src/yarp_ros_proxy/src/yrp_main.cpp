#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "yarp_ros_interfaces/msg/vjxoutput.hpp"                                      // CHANGE

using std::placeholders::_1;

class MinimalSubscriber : public rclcpp::Node
{
public:
  MinimalSubscriber()
  : Node("minimal_subscriber")
  {
    subscription_ = this->create_subscription<yarp_ros_interfaces::msg::Vjxoutput>(    // CHANGE
      "yarpinfo", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
  }

private:
  void topic_callback(const yarp_ros_interfaces::msg::Vjxoutput & msg) const  // CHANGE
  {
    
    RCLCPP_INFO_STREAM(this->get_logger(), "TIME: '" << msg.timestamp);     // CHANGE
    for (size_t i = 0; i < sizeof(msg.pose); i++)
    {
      RCLCPP_INFO_STREAM(this->get_logger(), "POSE: ' "<< i << " = " << msg.pose[i]);
      /* code */
    }
    for (size_t i = 0; i < sizeof(msg.velocity); i++)
    {
      RCLCPP_INFO_STREAM(this->get_logger(), "VELOCITY: ' "<< i << " = " << msg.velocity[i]);
      /* code */
    }
    //RCLCPP_INFO_STREAM(this->get_logger(), "POSE: '" << msg.pose);     // CHANGE
    //RCLCPP_INFO_STREAM(this->get_logger(), "VELOCITY: '" << msg.velocity);     // CHANGE
  }
  rclcpp::Subscription<yarp_ros_interfaces::msg::Vjxoutput>::SharedPtr subscription_;  // CHANGE
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalSubscriber>());
  rclcpp::shutdown();
  return 0;
}