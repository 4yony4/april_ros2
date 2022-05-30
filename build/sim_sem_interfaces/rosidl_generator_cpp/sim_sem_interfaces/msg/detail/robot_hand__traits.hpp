// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sim_sem_interfaces:msg/RobotHand.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HAND__TRAITS_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sim_sem_interfaces/msg/detail/robot_hand__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'robothandkinematic_list'
#include "sim_sem_interfaces/msg/detail/robot_hand_kinematic__traits.hpp"

namespace sim_sem_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotHand & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: robothandkinematic_list
  {
    if (msg.robothandkinematic_list.size() == 0) {
      out << "robothandkinematic_list: []";
    } else {
      out << "robothandkinematic_list: [";
      size_t pending_items = msg.robothandkinematic_list.size();
      for (auto item : msg.robothandkinematic_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotHand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: robothandkinematic_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.robothandkinematic_list.size() == 0) {
      out << "robothandkinematic_list: []\n";
    } else {
      out << "robothandkinematic_list:\n";
      for (auto item : msg.robothandkinematic_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotHand & msg, bool use_flow_style = false)
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
  const sim_sem_interfaces::msg::RobotHand & msg,
  std::ostream & out, size_t indentation = 0)
{
  sim_sem_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sim_sem_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sim_sem_interfaces::msg::RobotHand & msg)
{
  return sim_sem_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sim_sem_interfaces::msg::RobotHand>()
{
  return "sim_sem_interfaces::msg::RobotHand";
}

template<>
inline const char * name<sim_sem_interfaces::msg::RobotHand>()
{
  return "sim_sem_interfaces/msg/RobotHand";
}

template<>
struct has_fixed_size<sim_sem_interfaces::msg::RobotHand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sim_sem_interfaces::msg::RobotHand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sim_sem_interfaces::msg::RobotHand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HAND__TRAITS_HPP_
