// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/HumanGraspingStrategies.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_GRASPING_STRATEGIES__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_GRASPING_STRATEGIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/human_grasping_strategies__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_HumanGraspingStrategies_location
{
public:
  explicit Init_HumanGraspingStrategies_location(::sim_sem_interfaces::msg::HumanGraspingStrategies & msg)
  : msg_(msg)
  {}
  ::sim_sem_interfaces::msg::HumanGraspingStrategies location(::sim_sem_interfaces::msg::HumanGraspingStrategies::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanGraspingStrategies msg_;
};

class Init_HumanGraspingStrategies_type
{
public:
  Init_HumanGraspingStrategies_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanGraspingStrategies_location type(::sim_sem_interfaces::msg::HumanGraspingStrategies::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_HumanGraspingStrategies_location(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanGraspingStrategies msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::HumanGraspingStrategies>()
{
  return sim_sem_interfaces::msg::builder::Init_HumanGraspingStrategies_type();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_GRASPING_STRATEGIES__BUILDER_HPP_
