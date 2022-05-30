// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sim_sem_interfaces:msg/HumanBehaviour.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_BEHAVIOUR__TRAITS_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_BEHAVIOUR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sim_sem_interfaces/msg/detail/human_behaviour__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'humamgrasping_list'
#include "sim_sem_interfaces/msg/detail/human_grasping_strategies__traits.hpp"

namespace sim_sem_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HumanBehaviour & msg,
  std::ostream & out)
{
  out << "{";
  // member: body_posture
  {
    out << "body_posture: ";
    rosidl_generator_traits::value_to_yaml(msg.body_posture, out);
    out << ", ";
  }

  // member: humamgrasping_list
  {
    if (msg.humamgrasping_list.size() == 0) {
      out << "humamgrasping_list: []";
    } else {
      out << "humamgrasping_list: [";
      size_t pending_items = msg.humamgrasping_list.size();
      for (auto item : msg.humamgrasping_list) {
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
  const HumanBehaviour & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: body_posture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_posture: ";
    rosidl_generator_traits::value_to_yaml(msg.body_posture, out);
    out << "\n";
  }

  // member: humamgrasping_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.humamgrasping_list.size() == 0) {
      out << "humamgrasping_list: []\n";
    } else {
      out << "humamgrasping_list:\n";
      for (auto item : msg.humamgrasping_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HumanBehaviour & msg, bool use_flow_style = false)
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
  const sim_sem_interfaces::msg::HumanBehaviour & msg,
  std::ostream & out, size_t indentation = 0)
{
  sim_sem_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sim_sem_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sim_sem_interfaces::msg::HumanBehaviour & msg)
{
  return sim_sem_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sim_sem_interfaces::msg::HumanBehaviour>()
{
  return "sim_sem_interfaces::msg::HumanBehaviour";
}

template<>
inline const char * name<sim_sem_interfaces::msg::HumanBehaviour>()
{
  return "sim_sem_interfaces/msg/HumanBehaviour";
}

template<>
struct has_fixed_size<sim_sem_interfaces::msg::HumanBehaviour>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sim_sem_interfaces::msg::HumanBehaviour>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sim_sem_interfaces::msg::HumanBehaviour>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_BEHAVIOUR__TRAITS_HPP_
