// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/FatigueAnalysis.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__FATIGUE_ANALYSIS__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__FATIGUE_ANALYSIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/fatigue_analysis__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_FatigueAnalysis_fatigue_values
{
public:
  Init_FatigueAnalysis_fatigue_values()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sim_sem_interfaces::msg::FatigueAnalysis fatigue_values(::sim_sem_interfaces::msg::FatigueAnalysis::_fatigue_values_type arg)
  {
    msg_.fatigue_values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::FatigueAnalysis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::FatigueAnalysis>()
{
  return sim_sem_interfaces::msg::builder::Init_FatigueAnalysis_fatigue_values();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__FATIGUE_ANALYSIS__BUILDER_HPP_
