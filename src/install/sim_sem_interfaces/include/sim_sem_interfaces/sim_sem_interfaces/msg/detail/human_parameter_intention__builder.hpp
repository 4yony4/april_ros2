// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/HumanParameterIntention.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/human_parameter_intention__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_HumanParameterIntention_humanmotion_list
{
public:
  explicit Init_HumanParameterIntention_humanmotion_list(::sim_sem_interfaces::msg::HumanParameterIntention & msg)
  : msg_(msg)
  {}
  ::sim_sem_interfaces::msg::HumanParameterIntention humanmotion_list(::sim_sem_interfaces::msg::HumanParameterIntention::_humanmotion_list_type arg)
  {
    msg_.humanmotion_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanParameterIntention msg_;
};

class Init_HumanParameterIntention_mood_level
{
public:
  explicit Init_HumanParameterIntention_mood_level(::sim_sem_interfaces::msg::HumanParameterIntention & msg)
  : msg_(msg)
  {}
  Init_HumanParameterIntention_humanmotion_list mood_level(::sim_sem_interfaces::msg::HumanParameterIntention::_mood_level_type arg)
  {
    msg_.mood_level = std::move(arg);
    return Init_HumanParameterIntention_humanmotion_list(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanParameterIntention msg_;
};

class Init_HumanParameterIntention_cognitive_level
{
public:
  explicit Init_HumanParameterIntention_cognitive_level(::sim_sem_interfaces::msg::HumanParameterIntention & msg)
  : msg_(msg)
  {}
  Init_HumanParameterIntention_mood_level cognitive_level(::sim_sem_interfaces::msg::HumanParameterIntention::_cognitive_level_type arg)
  {
    msg_.cognitive_level = std::move(arg);
    return Init_HumanParameterIntention_mood_level(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanParameterIntention msg_;
};

class Init_HumanParameterIntention_engagement_level
{
public:
  explicit Init_HumanParameterIntention_engagement_level(::sim_sem_interfaces::msg::HumanParameterIntention & msg)
  : msg_(msg)
  {}
  Init_HumanParameterIntention_cognitive_level engagement_level(::sim_sem_interfaces::msg::HumanParameterIntention::_engagement_level_type arg)
  {
    msg_.engagement_level = std::move(arg);
    return Init_HumanParameterIntention_cognitive_level(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanParameterIntention msg_;
};

class Init_HumanParameterIntention_motion_prediction
{
public:
  Init_HumanParameterIntention_motion_prediction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanParameterIntention_engagement_level motion_prediction(::sim_sem_interfaces::msg::HumanParameterIntention::_motion_prediction_type arg)
  {
    msg_.motion_prediction = std::move(arg);
    return Init_HumanParameterIntention_engagement_level(msg_);
  }

private:
  ::sim_sem_interfaces::msg::HumanParameterIntention msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::HumanParameterIntention>()
{
  return sim_sem_interfaces::msg::builder::Init_HumanParameterIntention_motion_prediction();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__BUILDER_HPP_
