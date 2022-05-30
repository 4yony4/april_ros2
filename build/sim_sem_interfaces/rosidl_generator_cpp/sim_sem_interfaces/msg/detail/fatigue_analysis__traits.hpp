// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sim_sem_interfaces:msg/FatigueAnalysis.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__FATIGUE_ANALYSIS__TRAITS_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__FATIGUE_ANALYSIS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sim_sem_interfaces/msg/detail/fatigue_analysis__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sim_sem_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const FatigueAnalysis & msg,
  std::ostream & out)
{
  out << "{";
  // member: fatigue_values
  {
    if (msg.fatigue_values.size() == 0) {
      out << "fatigue_values: []";
    } else {
      out << "fatigue_values: [";
      size_t pending_items = msg.fatigue_values.size();
      for (auto item : msg.fatigue_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const FatigueAnalysis & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fatigue_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fatigue_values.size() == 0) {
      out << "fatigue_values: []\n";
    } else {
      out << "fatigue_values:\n";
      for (auto item : msg.fatigue_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FatigueAnalysis & msg, bool use_flow_style = false)
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
  const sim_sem_interfaces::msg::FatigueAnalysis & msg,
  std::ostream & out, size_t indentation = 0)
{
  sim_sem_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sim_sem_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sim_sem_interfaces::msg::FatigueAnalysis & msg)
{
  return sim_sem_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sim_sem_interfaces::msg::FatigueAnalysis>()
{
  return "sim_sem_interfaces::msg::FatigueAnalysis";
}

template<>
inline const char * name<sim_sem_interfaces::msg::FatigueAnalysis>()
{
  return "sim_sem_interfaces/msg/FatigueAnalysis";
}

template<>
struct has_fixed_size<sim_sem_interfaces::msg::FatigueAnalysis>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sim_sem_interfaces::msg::FatigueAnalysis>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sim_sem_interfaces::msg::FatigueAnalysis>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__FATIGUE_ANALYSIS__TRAITS_HPP_
