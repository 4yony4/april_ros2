// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/PhysicalObject.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__PHYSICAL_OBJECT__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__PHYSICAL_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/physical_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_PhysicalObject_orientation
{
public:
  explicit Init_PhysicalObject_orientation(::sim_sem_interfaces::msg::PhysicalObject & msg)
  : msg_(msg)
  {}
  ::sim_sem_interfaces::msg::PhysicalObject orientation(::sim_sem_interfaces::msg::PhysicalObject::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::PhysicalObject msg_;
};

class Init_PhysicalObject_position
{
public:
  explicit Init_PhysicalObject_position(::sim_sem_interfaces::msg::PhysicalObject & msg)
  : msg_(msg)
  {}
  Init_PhysicalObject_orientation position(::sim_sem_interfaces::msg::PhysicalObject::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_PhysicalObject_orientation(msg_);
  }

private:
  ::sim_sem_interfaces::msg::PhysicalObject msg_;
};

class Init_PhysicalObject_size
{
public:
  explicit Init_PhysicalObject_size(::sim_sem_interfaces::msg::PhysicalObject & msg)
  : msg_(msg)
  {}
  Init_PhysicalObject_position size(::sim_sem_interfaces::msg::PhysicalObject::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_PhysicalObject_position(msg_);
  }

private:
  ::sim_sem_interfaces::msg::PhysicalObject msg_;
};

class Init_PhysicalObject_shape
{
public:
  Init_PhysicalObject_shape()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PhysicalObject_size shape(::sim_sem_interfaces::msg::PhysicalObject::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return Init_PhysicalObject_size(msg_);
  }

private:
  ::sim_sem_interfaces::msg::PhysicalObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::PhysicalObject>()
{
  return sim_sem_interfaces::msg::builder::Init_PhysicalObject_shape();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__PHYSICAL_OBJECT__BUILDER_HPP_
