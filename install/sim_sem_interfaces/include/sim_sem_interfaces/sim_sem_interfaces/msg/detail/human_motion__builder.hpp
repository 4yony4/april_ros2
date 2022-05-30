// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/HumanMotion.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_MOTION__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/human_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_HumanMotion_tools_acceleration
{
public:
  explicit Init_HumanMotion_tools_acceleration(::sim_sem_interfaces::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  ::sim_sem_interfaces::msg::HumanMotion tools_acceleration(::sim_sem_interfaces::msg::HumanMotion::_tools_acceleration_type arg)
  {
    msg_.tools_acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanMotion msg_;
};

class Init_HumanMotion_tools_velocity
{
public:
  explicit Init_HumanMotion_tools_velocity(::sim_sem_interfaces::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  Init_HumanMotion_tools_acceleration tools_velocity(::sim_sem_interfaces::msg::HumanMotion::_tools_velocity_type arg)
  {
    msg_.tools_velocity = std::move(arg);
    return Init_HumanMotion_tools_acceleration(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanMotion msg_;
};

class Init_HumanMotion_tools_position
{
public:
  explicit Init_HumanMotion_tools_position(::sim_sem_interfaces::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  Init_HumanMotion_tools_velocity tools_position(::sim_sem_interfaces::msg::HumanMotion::_tools_position_type arg)
  {
    msg_.tools_position = std::move(arg);
    return Init_HumanMotion_tools_velocity(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanMotion msg_;
};

class Init_HumanMotion_body_acceleration
{
public:
  explicit Init_HumanMotion_body_acceleration(::sim_sem_interfaces::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  Init_HumanMotion_tools_position body_acceleration(::sim_sem_interfaces::msg::HumanMotion::_body_acceleration_type arg)
  {
    msg_.body_acceleration = std::move(arg);
    return Init_HumanMotion_tools_position(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanMotion msg_;
};

class Init_HumanMotion_body_velocity
{
public:
  explicit Init_HumanMotion_body_velocity(::sim_sem_interfaces::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  Init_HumanMotion_body_acceleration body_velocity(::sim_sem_interfaces::msg::HumanMotion::_body_velocity_type arg)
  {
    msg_.body_velocity = std::move(arg);
    return Init_HumanMotion_body_acceleration(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanMotion msg_;
};

class Init_HumanMotion_body_position
{
public:
  explicit Init_HumanMotion_body_position(::sim_sem_interfaces::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  Init_HumanMotion_body_velocity body_position(::sim_sem_interfaces::msg::HumanMotion::_body_position_type arg)
  {
    msg_.body_position = std::move(arg);
    return Init_HumanMotion_body_velocity(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanMotion msg_;
};

class Init_HumanMotion_hand_acceleration
{
public:
  explicit Init_HumanMotion_hand_acceleration(::sim_sem_interfaces::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  Init_HumanMotion_body_position hand_acceleration(::sim_sem_interfaces::msg::HumanMotion::_hand_acceleration_type arg)
  {
    msg_.hand_acceleration = std::move(arg);
    return Init_HumanMotion_body_position(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanMotion msg_;
};

class Init_HumanMotion_hand_velocity
{
public:
  explicit Init_HumanMotion_hand_velocity(::sim_sem_interfaces::msg::HumanMotion & msg)
  : msg_(msg)
  {}
  Init_HumanMotion_hand_acceleration hand_velocity(::sim_sem_interfaces::msg::HumanMotion::_hand_velocity_type arg)
  {
    msg_.hand_velocity = std::move(arg);
    return Init_HumanMotion_hand_acceleration(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanMotion msg_;
};

class Init_HumanMotion_hand_position
{
public:
  Init_HumanMotion_hand_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanMotion_hand_velocity hand_position(::sim_sem_interfaces::msg::HumanMotion::_hand_position_type arg)
  {
    msg_.hand_position = std::move(arg);
    return Init_HumanMotion_hand_velocity(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanMotion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::HumanMotion>()
{
  return sim_sem_interfaces::msg::builder::Init_HumanMotion_hand_position();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_MOTION__BUILDER_HPP_
