// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sim_sem_interfaces:msg/Environment.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ENVIRONMENT__TRAITS_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ENVIRONMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sim_sem_interfaces/msg/detail/environment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'objects_list'
#include "sim_sem_interfaces/msg/detail/physical_object__traits.hpp"

namespace sim_sem_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Environment & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: semantictag
  {
    out << "semantictag: ";
    rosidl_generator_traits::value_to_yaml(msg.semantictag, out);
    out << ", ";
  }

  // member: objects_list
  {
    if (msg.objects_list.size() == 0) {
      out << "objects_list: []";
    } else {
      out << "objects_list: [";
      size_t pending_items = msg.objects_list.size();
      for (auto item : msg.objects_list) {
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
  const Environment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: semantictag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "semantictag: ";
    rosidl_generator_traits::value_to_yaml(msg.semantictag, out);
    out << "\n";
  }

  // member: objects_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.objects_list.size() == 0) {
      out << "objects_list: []\n";
    } else {
      out << "objects_list:\n";
      for (auto item : msg.objects_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Environment & msg, bool use_flow_style = false)
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
  const sim_sem_interfaces::msg::Environment & msg,
  std::ostream & out, size_t indentation = 0)
{
  sim_sem_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sim_sem_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sim_sem_interfaces::msg::Environment & msg)
{
  return sim_sem_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sim_sem_interfaces::msg::Environment>()
{
  return "sim_sem_interfaces::msg::Environment";
}

template<>
inline const char * name<sim_sem_interfaces::msg::Environment>()
{
  return "sim_sem_interfaces/msg/Environment";
}

template<>
struct has_fixed_size<sim_sem_interfaces::msg::Environment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sim_sem_interfaces::msg::Environment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sim_sem_interfaces::msg::Environment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ENVIRONMENT__TRAITS_HPP_
