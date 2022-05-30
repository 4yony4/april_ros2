// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/RobotArm.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_ARM__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_ARM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/robot_arm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotArm_robotarmkinematic_list
{
public:
  explicit Init_RobotArm_robotarmkinematic_list(::sim_sem_interfaces::msg::RobotArm & msg)
  : msg_(msg)
  {}
  ::sim_sem_interfaces::msg::RobotArm robotarmkinematic_list(::sim_sem_interfaces::msg::RobotArm::_robotarmkinematic_list_type arg)
  {
    msg_.robotarmkinematic_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotArm msg_;
};

class Init_RobotArm_state
{
public:
  Init_RobotArm_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotArm_robotarmkinematic_list state(::sim_sem_interfaces::msg::RobotArm::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_RobotArm_robotarmkinematic_list(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotArm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::RobotArm>()
{
  return sim_sem_interfaces::msg::builder::Init_RobotArm_state();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_ARM__BUILDER_HPP_
