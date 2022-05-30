// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/RobotHandKinematic.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HAND_KINEMATIC__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HAND_KINEMATIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/robot_hand_kinematic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotHandKinematic_forces
{
public:
  explicit Init_RobotHandKinematic_forces(::sim_sem_interfaces::msg::RobotHandKinematic & msg)
  : msg_(msg)
  {}
  ::sim_sem_interfaces::msg::RobotHandKinematic forces(::sim_sem_interfaces::msg::RobotHandKinematic::_forces_type arg)
  {
    msg_.forces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotHandKinematic msg_;
};

class Init_RobotHandKinematic_acceleration
{
public:
  explicit Init_RobotHandKinematic_acceleration(::sim_sem_interfaces::msg::RobotHandKinematic & msg)
  : msg_(msg)
  {}
  Init_RobotHandKinematic_forces acceleration(::sim_sem_interfaces::msg::RobotHandKinematic::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_RobotHandKinematic_forces(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotHandKinematic msg_;
};

class Init_RobotHandKinematic_velocity
{
public:
  explicit Init_RobotHandKinematic_velocity(::sim_sem_interfaces::msg::RobotHandKinematic & msg)
  : msg_(msg)
  {}
  Init_RobotHandKinematic_acceleration velocity(::sim_sem_interfaces::msg::RobotHandKinematic::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RobotHandKinematic_acceleration(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotHandKinematic msg_;
};

class Init_RobotHandKinematic_position
{
public:
  Init_RobotHandKinematic_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHandKinematic_velocity position(::sim_sem_interfaces::msg::RobotHandKinematic::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RobotHandKinematic_velocity(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotHandKinematic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::RobotHandKinematic>()
{
  return sim_sem_interfaces::msg::builder::Init_RobotHandKinematic_position();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HAND_KINEMATIC__BUILDER_HPP_
