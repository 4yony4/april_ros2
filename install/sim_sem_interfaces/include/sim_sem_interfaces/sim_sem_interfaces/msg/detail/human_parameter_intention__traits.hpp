// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sim_sem_interfaces:msg/HumanParameterIntention.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__TRAITS_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sim_sem_interfaces/msg/detail/human_parameter_intention__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'humanmotion_list'
#include "sim_sem_interfaces/msg/detail/human_motion__traits.hpp"

namespace sim_sem_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HumanParameterIntention & msg,
  std::ostream & out)
{
  out << "{";
  // member: motion_prediction
  {
    out << "motion_prediction: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_prediction, out);
    out << ", ";
  }

  // member: engagement_level
  {
    out << "engagement_level: ";
    rosidl_generator_traits::value_to_yaml(msg.engagement_level, out);
    out << ", ";
  }

  // member: cognitive_level
  {
    out << "cognitive_level: ";
    rosidl_generator_traits::value_to_yaml(msg.cognitive_level, out);
    out << ", ";
  }

  // member: mood_level
  {
    out << "mood_level: ";
    rosidl_generator_traits::value_to_yaml(msg.mood_level, out);
    out << ", ";
  }

  // member: humanmotion_list
  {
    if (msg.humanmotion_list.size() == 0) {
      out << "humanmotion_list: []";
    } else {
      out << "humanmotion_list: [";
      size_t pending_items = msg.humanmotion_list.size();
      for (auto item : msg.humanmotion_list) {
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
  const HumanParameterIntention & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motion_prediction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_prediction: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_prediction, out);
    out << "\n";
  }

  // member: engagement_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "engagement_level: ";
    rosidl_generator_traits::value_to_yaml(msg.engagement_level, out);
    out << "\n";
  }

  // member: cognitive_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cognitive_level: ";
    rosidl_generator_traits::value_to_yaml(msg.cognitive_level, out);
    out << "\n";
  }

  // member: mood_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mood_level: ";
    rosidl_generator_traits::value_to_yaml(msg.mood_level, out);
    out << "\n";
  }

  // member: humanmotion_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.humanmotion_list.size() == 0) {
      out << "humanmotion_list: []\n";
    } else {
      out << "humanmotion_list:\n";
      for (auto item : msg.humanmotion_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HumanParameterIntention & msg, bool use_flow_style = false)
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
  const sim_sem_interfaces::msg::HumanParameterIntention & msg,
  std::ostream & out, size_t indentation = 0)
{
  sim_sem_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sim_sem_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sim_sem_interfaces::msg::HumanParameterIntention & msg)
{
  return sim_sem_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sim_sem_interfaces::msg::HumanParameterIntention>()
{
  return "sim_sem_interfaces::msg::HumanParameterIntention";
}

template<>
inline const char * name<sim_sem_interfaces::msg::HumanParameterIntention>()
{
  return "sim_sem_interfaces/msg/HumanParameterIntention";
}

template<>
struct has_fixed_size<sim_sem_interfaces::msg::HumanParameterIntention>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sim_sem_interfaces::msg::HumanParameterIntention>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sim_sem_interfaces::msg::HumanParameterIntention>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__TRAITS_HPP_
