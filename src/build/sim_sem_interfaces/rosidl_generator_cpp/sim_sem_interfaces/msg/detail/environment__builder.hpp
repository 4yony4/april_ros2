// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/Environment.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ENVIRONMENT__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ENVIRONMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/environment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_Environment_objects_list
{
public:
  explicit Init_Environment_objects_list(::sim_sem_interfaces::msg::Environment & msg)
  : msg_(msg)
  {}
  ::sim_sem_interfaces::msg::Environment objects_list(::sim_sem_interfaces::msg::Environment::_objects_list_type arg)
  {
    msg_.objects_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::Environment msg_;
};

class Init_Environment_semantictag
{
public:
  explicit Init_Environment_semantictag(::sim_sem_interfaces::msg::Environment & msg)
  : msg_(msg)
  {}
  Init_Environment_objects_list semantictag(::sim_sem_interfaces::msg::Environment::_semantictag_type arg)
  {
    msg_.semantictag = std::move(arg);
    return Init_Environment_objects_list(msg_);
  }

private:
  ::sim_sem_interfaces::msg::Environment msg_;
};

class Init_Environment_timestamp
{
public:
  Init_Environment_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Environment_semantictag timestamp(::sim_sem_interfaces::msg::Environment::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Environment_semantictag(msg_);
  }

private:
  ::sim_sem_interfaces::msg::Environment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::Environment>()
{
  return sim_sem_interfaces::msg::builder::Init_Environment_timestamp();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ENVIRONMENT__BUILDER_HPP_
