// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/HumanSight.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_SIGHT__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_SIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/human_sight__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_HumanSight_sight_direction
{
public:
  Init_HumanSight_sight_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sim_sem_interfaces::msg::HumanSight sight_direction(::sim_sem_interfaces::msg::HumanSight::_sight_direction_type arg)
  {
    msg_.sight_direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanSight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::HumanSight>()
{
  return sim_sem_interfaces::msg::builder::Init_HumanSight_sight_direction();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_SIGHT__BUILDER_HPP_
