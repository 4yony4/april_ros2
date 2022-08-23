#include <string>
#include <cstdio>

#include "rclcpp/rclcpp.hpp"
#include "april_msgs/msg/environment.hpp"

static const std::string TOPIC_ENVIRONMENT = "/pem/environment";


class pem : public rclcpp::Node
{

  public:
    pem()
    : Node("pem")
    {
      publisher_environment = this->create_publisher<april_msgs::msg::Environment>(TOPIC_ENVIRONMENT, 10);
    }

  private:

  rclcpp::Publisher<april_msgs::msg::Environment>::SharedPtr publisher_environment;

  void publish_environment() const{
    april_msgs::msg::Environment environment = april_msgs::msg::Environment();
    uint32_t time = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    
    environment.set__timestamp(time);
    environment.set__semantictag("tag1");
    
    if(publisher_environment->get_subscription_count() !=0){
      publisher_environment->publish(environment);
    }
  }

};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<pem>());
  rclcpp::shutdown();
  return 0;
}
