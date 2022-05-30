// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sim_sem_interfaces:msg/EmergencyRequestStatus.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__BUILDER_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sim_sem_interfaces/msg/detail/emergency_request_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sim_sem_interfaces
{

namespace msg
{

namespace builder
{

class Init_EmergencyRequestStatus_request_result
{
public:
  explicit Init_EmergencyRequestStatus_request_result(::sim_sem_interfaces::msg::EmergencyRequestStatus & msg)
  : msg_(msg)
  {}
  ::sim_sem_interfaces::msg::EmergencyRequestStatus request_result(::sim_sem_interfaces::msg::EmergencyRequestStatus::_request_result_type arg)
  {
    msg_.request_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sim_sem_interfaces::msg::EmergencyRequestStatus msg_;
};

class Init_EmergencyRequestStatus_request_progress
{
public:
  Init_EmergencyRequestStatus_request_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyRequestStatus_request_result request_progress(::sim_sem_interfaces::msg::EmergencyRequestStatus::_request_progress_type arg)
  {
    msg_.request_progress = std::move(arg);
    return Init_EmergencyRequestStatus_request_result(msg_);
  }

private:
  ::sim_sem_interfaces::msg::EmergencyRequestStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sim_sem_interfaces::msg::EmergencyRequestStatus>()
{
  return sim_sem_interfaces::msg::builder::Init_EmergencyRequestStatus_request_progress();
}

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__BUILDER_HPP_
