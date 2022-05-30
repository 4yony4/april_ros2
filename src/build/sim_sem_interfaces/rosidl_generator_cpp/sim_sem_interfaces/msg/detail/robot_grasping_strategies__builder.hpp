// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/RobotGraspingStrategies.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_GRASPING_STRATEGIES__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_GRASPING_STRATEGIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/robot_grasping_strategies__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotGraspingStrategies_timetolift
{
public:
  explicit Init_RobotGraspingStrategies_timetolift(::sim_sem_interfaces::msg::RobotGraspingStrategies & msg)
  : msg_(msg)
  {}
  ::sim_sem_interfaces::msg::RobotGraspingStrategies timetolift(::sim_sem_interfaces::msg::RobotGraspingStrategies::_timetolift_type arg)
  {
    msg_.timetolift = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotGraspingStrategies msg_;
};

class Init_RobotGraspingStrategies_location
{
public:
  explicit Init_RobotGraspingStrategies_location(::sim_sem_interfaces::msg::RobotGraspingStrategies & msg)
  : msg_(msg)
  {}
  Init_RobotGraspingStrategies_timetolift location(::sim_sem_interfaces::msg::RobotGraspingStrategies::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_RobotGraspingStrategies_timetolift(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotGraspingStrategies msg_;
};

class Init_RobotGraspingStrategies_type
{
public:
  Init_RobotGraspingStrategies_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotGraspingStrategies_location type(::sim_sem_interfaces::msg::RobotGraspingStrategies::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RobotGraspingStrategies_location(msg_);
  }

private:
  ::sim_sem_interfaces::msg::RobotGraspingStrategies msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::RobotGraspingStrategies>()
{
  return sim_sem_interfaces::msg::builder::Init_RobotGraspingStrategies_type();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_GRASPING_STRATEGIES__BUILDER_HPP_
