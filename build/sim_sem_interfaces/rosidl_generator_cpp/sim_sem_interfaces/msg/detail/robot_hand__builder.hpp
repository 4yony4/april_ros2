// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/RobotHand.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HAND__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/robot_hand__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotHand_robothandkinematic_list
{
public:
  explicit Init_RobotHand_robothandkinematic_list(::sim_sem_interfaces::msg::RobotHand & msg)
  : msg_(msg)
  {}
  ::sim_sem_interfaces::msg::RobotHand robothandkinematic_list(::sim_sem_interfaces::msg::RobotHand::_robothandkinematic_list_type arg)
  {
    msg_.robothandkinematic_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotHand msg_;
};

class Init_RobotHand_state
{
public:
  Init_RobotHand_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHand_robothandkinematic_list state(::sim_sem_interfaces::msg::RobotHand::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_RobotHand_robothandkinematic_list(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotHand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::RobotHand>()
{
  return sim_sem_interfaces::msg::builder::Init_RobotHand_state();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HAND__BUILDER_HPP_
