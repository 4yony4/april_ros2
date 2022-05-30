// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/RobotLowLatencyCorrections.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_LOW_LATENCY_CORRECTIONS__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_LOW_LATENCY_CORRECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/robot_low_latency_corrections__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotLowLatencyCorrections_action
{
public:
  Init_RobotLowLatencyCorrections_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sim_sem_interfaces::msg::RobotLowLatencyCorrections action(::sim_sem_interfaces::msg::RobotLowLatencyCorrections::_action_type arg)
  {
    msg_.action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotLowLatencyCorrections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::RobotLowLatencyCorrections>()
{
  return sim_sem_interfaces::msg::builder::Init_RobotLowLatencyCorrections_action();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_LOW_LATENCY_CORRECTIONS__BUILDER_HPP_
