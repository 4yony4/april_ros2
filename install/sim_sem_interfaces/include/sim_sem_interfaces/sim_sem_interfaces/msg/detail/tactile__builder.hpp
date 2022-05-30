// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/Tactile.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__TACTILE__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__TACTILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/tactile__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_Tactile_temperature
{
public:
  explicit Init_Tactile_temperature(::sim_sem_interfaces::msg::Tactile & msg)
  : msg_(msg)
  {}
  ::sim_sem_interfaces::msg::Tactile temperature(::sim_sem_interfaces::msg::Tactile::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::Tactile msg_;
};

class Init_Tactile_label
{
public:
  Init_Tactile_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tactile_temperature label(::sim_sem_interfaces::msg::Tactile::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_Tactile_temperature(msg_);
  }

private:
  ::sim_sem_interfaces::msg::Tactile msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::Tactile>()
{
  return sim_sem_interfaces::msg::builder::Init_Tactile_label();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__TACTILE__BUILDER_HPP_
