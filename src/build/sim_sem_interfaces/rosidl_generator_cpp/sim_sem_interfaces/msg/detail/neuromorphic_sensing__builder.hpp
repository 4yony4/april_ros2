// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/NeuromorphicSensing.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__NEUROMORPHIC_SENSING__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__NEUROMORPHIC_SENSING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/neuromorphic_sensing__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_NeuromorphicSensing_point2_speed
{
public:
  explicit Init_NeuromorphicSensing_point2_speed(::sim_sem_interfaces::msg::NeuromorphicSensing & msg)
  : msg_(msg)
  {}
  ::sim_sem_interfaces::msg::NeuromorphicSensing point2_speed(::sim_sem_interfaces::msg::NeuromorphicSensing::_point2_speed_type arg)
  {
    msg_.point2_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::NeuromorphicSensing msg_;
};

class Init_NeuromorphicSensing_point1_speed
{
public:
  Init_NeuromorphicSensing_point1_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NeuromorphicSensing_point2_speed point1_speed(::sim_sem_interfaces::msg::NeuromorphicSensing::_point1_speed_type arg)
  {
    msg_.point1_speed = std::move(arg);
    return Init_NeuromorphicSensing_point2_speed(msg_);
  }

private:
  ::sim_sem_interfaces::msg::NeuromorphicSensing msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::NeuromorphicSensing>()
{
  return sim_sem_interfaces::msg::builder::Init_NeuromorphicSensing_point1_speed();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__NEUROMORPHIC_SENSING__BUILDER_HPP_
