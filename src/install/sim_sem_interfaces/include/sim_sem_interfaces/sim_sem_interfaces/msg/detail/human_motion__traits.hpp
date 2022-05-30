// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sim_sem_interfaces:msg/HumanMotion.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_MOTION__TRAITS_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_MOTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sim_sem_interfaces/msg/detail/human_motion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sim_sem_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HumanMotion & msg,
  std::ostream & out)
{
  out << "{";
  // member: hand_position
  {
    out << "hand_position: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_position, out);
    out << ", ";
  }

  // member: hand_velocity
  {
    out << "hand_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_velocity, out);
    out << ", ";
  }

  // member: hand_acceleration
  {
    out << "hand_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_acceleration, out);
    out << ", ";
  }

  // member: body_position
  {
    out << "body_position: ";
    rosidl_generator_traits::value_to_yaml(msg.body_position, out);
    out << ", ";
  }

  // member: body_velocity
  {
    out << "body_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.body_velocity, out);
    out << ", ";
  }

  // member: body_acceleration
  {
    out << "body_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.body_acceleration, out);
    out << ", ";
  }

  // member: tools_position
  {
    out << "tools_position: ";
    rosidl_generator_traits::value_to_yaml(msg.tools_position, out);
    out << ", ";
  }

  // member: tools_velocity
  {
    out << "tools_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.tools_velocity, out);
    out << ", ";
  }

  // member: tools_acceleration
  {
    out << "tools_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.tools_acceleration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HumanMotion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hand_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_position: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_position, out);
    out << "\n";
  }

  // member: hand_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_velocity, out);
    out << "\n";
  }

  // member: hand_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_acceleration, out);
    out << "\n";
  }

  // member: body_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_position: ";
    rosidl_generator_traits::value_to_yaml(msg.body_position, out);
    out << "\n";
  }

  // member: body_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.body_velocity, out);
    out << "\n";
  }

  // member: body_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.body_acceleration, out);
    out << "\n";
  }

  // member: tools_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tools_position: ";
    rosidl_generator_traits::value_to_yaml(msg.tools_position, out);
    out << "\n";
  }

  // member: tools_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tools_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.tools_velocity, out);
    out << "\n";
  }

  // member: tools_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tools_acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.tools_acceleration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HumanMotion & msg, bool use_flow_style = false)
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
  const sim_sem_interfaces::msg::HumanMotion & msg,
  std::ostream & out, size_t indentation = 0)
{
  sim_sem_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sim_sem_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sim_sem_interfaces::msg::HumanMotion & msg)
{
  return sim_sem_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sim_sem_interfaces::msg::HumanMotion>()
{
  return "sim_sem_interfaces::msg::HumanMotion";
}

template<>
inline const char * name<sim_sem_interfaces::msg::HumanMotion>()
{
  return "sim_sem_interfaces/msg/HumanMotion";
}

template<>
struct has_fixed_size<sim_sem_interfaces::msg::HumanMotion>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sim_sem_interfaces::msg::HumanMotion>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sim_sem_interfaces::msg::HumanMotion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_MOTION__TRAITS_HPP_
