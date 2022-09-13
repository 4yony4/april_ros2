#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "yarp_ros_interfaces/msg/yarpinfo.hpp"                                       // CHANGE

using std::placeholders::_1;

class MinimalSubscriber : public rclcpp::Node
{
public:
  MinimalSubscriber()
  : Node("minimal_subscriber")
  {
    subscription_ = this->create_subscription<yarp_ros_interfaces::msg::Yarpinfo>(    // CHANGE
      "yarpinfo", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
  }

private:
  void topic_callback(const yarp_ros_interfaces::msg::Yarpinfo & msg) const  // CHANGE
  {
    RCLCPP_INFO_STREAM(this->get_logger(), "I heard: '" << msg.msg << "'");     // CHANGE
  }
  rclcpp::Subscription<yarp_ros_interfaces::msg::Yarpinfo>::SharedPtr subscription_;  // CHANGE
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalSubscriber>());
  rclcpp::shutdown();
  return 0;
}