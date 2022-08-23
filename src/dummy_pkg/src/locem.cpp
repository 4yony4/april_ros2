#include <string>
#include <cstdio>

#include "rclcpp/rclcpp.hpp"
#include "april_msgs/msg/emergency_request_status.hpp"

static const std::string TOPIC_EMERGENCY_REQUEST_STATUS = "/locem/emergency_request_status";


class locem : public rclcpp::Node
{

  public:
    locem()
    : Node("locem")
    {
      publisher_emergency_status = this->create_publisher<april_msgs::msg::EmergencyRequestStatus>(TOPIC_EMERGENCY_REQUEST_STATUS, 10);
    }

  private:

  rclcpp::Publisher<april_msgs::msg::EmergencyRequestStatus>::SharedPtr publisher_emergency_status;

  void publish_emergency_status() const{
    april_msgs::msg::EmergencyRequestStatus emergency_status = april_msgs::msg::EmergencyRequestStatus();
    emergency_status.set__request_progress("15%");
    emergency_status.set__request_result("result1");
    
    if(publisher_emergency_status->get_subscription_count() !=0){
      publisher_emergency_status->publish(emergency_status);
    }
  }

};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<locem>());
  rclcpp::shutdown();
  return 0;
}
