// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/HumanBehaviour.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_BEHAVIOUR__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_BEHAVIOUR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/human_behaviour__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_HumanBehaviour_humamgrasping_list
{
public:
  explicit Init_HumanBehaviour_humamgrasping_list(::sim_sem_interfaces::msg::HumanBehaviour & msg)
  : msg_(msg)
  {}
  ::sim_sem_interfaces::msg::HumanBehaviour humamgrasping_list(::sim_sem_interfaces::msg::HumanBehaviour::_humamgrasping_list_type arg)
  {
    msg_.humamgrasping_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanBehaviour msg_;
};

class Init_HumanBehaviour_body_posture
{
public:
  Init_HumanBehaviour_body_posture()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanBehaviour_humamgrasping_list body_posture(::sim_sem_interfaces::msg::HumanBehaviour::_body_posture_type arg)
  {
    msg_.body_posture = std::move(arg);
    return Init_HumanBehaviour_humamgrasping_list(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanBehaviour msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::HumanBehaviour>()
{
  return sim_sem_interfaces::msg::builder::Init_HumanBehaviour_body_posture();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_BEHAVIOUR__BUILDER_HPP_
