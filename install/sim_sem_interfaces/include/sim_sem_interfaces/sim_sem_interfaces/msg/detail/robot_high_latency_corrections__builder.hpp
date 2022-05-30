// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/RobotHighLatencyCorrections.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/robot_high_latency_corrections__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotHighLatencyCorrections_cause
{
public:
  explicit Init_RobotHighLatencyCorrections_cause(::sim_sem_interfaces::msg::RobotHighLatencyCorrections & msg)
  : msg_(msg)
  {}
  ::sim_sem_interfaces::msg::RobotHighLatencyCorrections cause(::sim_sem_interfaces::msg::RobotHighLatencyCorrections::_cause_type arg)
  {
    msg_.cause = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotHighLatencyCorrections msg_;
};

class Init_RobotHighLatencyCorrections_description
{
public:
  explicit Init_RobotHighLatencyCorrections_description(::sim_sem_interfaces::msg::RobotHighLatencyCorrections & msg)
  : msg_(msg)
  {}
  Init_RobotHighLatencyCorrections_cause description(::sim_sem_interfaces::msg::RobotHighLatencyCorrections::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_RobotHighLatencyCorrections_cause(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotHighLatencyCorrections msg_;
};

class Init_RobotHighLatencyCorrections_action
{
public:
  Init_RobotHighLatencyCorrections_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHighLatencyCorrections_description action(::sim_sem_interfaces::msg::RobotHighLatencyCorrections::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_RobotHighLatencyCorrections_description(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotHighLatencyCorrections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::RobotHighLatencyCorrections>()
{
  return sim_sem_interfaces::msg::builder::Init_RobotHighLatencyCorrections_action();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__BUILDER_HPP_
