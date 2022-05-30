// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/Emergency.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__EMERGENCY__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__EMERGENCY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/emergency__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_Emergency_emergency_label
{
public:
  Init_Emergency_emergency_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sim_sem_interfaces::msg::Emergency emergency_label(::sim_sem_interfaces::msg::Emergency::_emergency_label_type arg)
  {
    msg_.emergency_label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::Emergency msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::Emergency>()
{
  return sim_sem_interfaces::msg::builder::Init_Emergency_emergency_label();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__EMERGENCY__BUILDER_HPP_
