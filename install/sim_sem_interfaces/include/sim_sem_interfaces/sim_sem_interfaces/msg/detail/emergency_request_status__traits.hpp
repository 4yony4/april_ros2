// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sim_sem_interfaces:msg/EmergencyRequestStatus.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__TRAITS_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sim_sem_interfaces/msg/detail/emergency_request_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sim_sem_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EmergencyRequestStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: request_progress
  {
    out << "request_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.request_progress, out);
    out << ", ";
  }

  // member: request_result
  {
    out << "request_result: ";
    rosidl_generator_traits::value_to_yaml(msg.request_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmergencyRequestStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.request_progress, out);
    out << "\n";
  }

  // member: request_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_result: ";
    rosidl_generator_traits::value_to_yaml(msg.request_result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmergencyRequestStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sim_sem_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sim_sem_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sim_sem_interfaces::msg::EmergencyRequestStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  sim_sem_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sim_sem_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sim_sem_interfaces::msg::EmergencyRequestStatus & msg)
{
  return sim_sem_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sim_sem_interfaces::msg::EmergencyRequestStatus>()
{
  return "sim_sem_interfaces::msg::EmergencyRequestStatus";
}

template<>
inline const char * name<sim_sem_interfaces::msg::EmergencyRequestStatus>()
{
  return "sim_sem_interfaces/msg/EmergencyRequestStatus";
}

template<>
struct has_fixed_size<sim_sem_interfaces::msg::EmergencyRequestStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sim_sem_interfaces::msg::EmergencyRequestStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sim_sem_interfaces::msg::EmergencyRequestStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__TRAITS_HPP_
