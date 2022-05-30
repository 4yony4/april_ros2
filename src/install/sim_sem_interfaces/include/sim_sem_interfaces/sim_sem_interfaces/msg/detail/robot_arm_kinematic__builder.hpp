// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/RobotArmKinematic.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_ARM_KINEMATIC__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_ARM_KINEMATIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/robot_arm_kinematic__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotArmKinematic_forces
{
public:
  explicit Init_RobotArmKinematic_forces(::sim_sem_interfaces::msg::RobotArmKinematic & msg)
  : msg_(msg)
  {}
  ::sim_sem_interfaces::msg::RobotArmKinematic forces(::sim_sem_interfaces::msg::RobotArmKinematic::_forces_type arg)
  {
    msg_.forces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotArmKinematic msg_;
};

class Init_RobotArmKinematic_acceleration
{
public:
  explicit Init_RobotArmKinematic_acceleration(::sim_sem_interfaces::msg::RobotArmKinematic & msg)
  : msg_(msg)
  {}
  Init_RobotArmKinematic_forces acceleration(::sim_sem_interfaces::msg::RobotArmKinematic::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_RobotArmKinematic_forces(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotArmKinematic msg_;
};

class Init_RobotArmKinematic_velocity
{
public:
  explicit Init_RobotArmKinematic_velocity(::sim_sem_interfaces::msg::RobotArmKinematic & msg)
  : msg_(msg)
  {}
  Init_RobotArmKinematic_acceleration velocity(::sim_sem_interfaces::msg::RobotArmKinematic::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RobotArmKinematic_acceleration(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotArmKinematic msg_;
};

class Init_RobotArmKinematic_position
{
public:
  Init_RobotArmKinematic_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotArmKinematic_velocity position(::sim_sem_interfaces::msg::RobotArmKinematic::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RobotArmKinematic_velocity(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotArmKinematic msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::RobotArmKinematic>()
{
  return sim_sem_interfaces::msg::builder::Init_RobotArmKinematic_position();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_ARM_KINEMATIC__BUILDER_HPP_
