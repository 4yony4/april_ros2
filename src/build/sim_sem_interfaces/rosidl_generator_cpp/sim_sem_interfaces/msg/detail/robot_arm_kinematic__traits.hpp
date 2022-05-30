// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sim_sem_interfaces:msg/RobotArmKinematic.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_ARM_KINEMATIC__TRAITS_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_ARM_KINEMATIC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sim_sem_interfaces/msg/detail/robot_arm_kinematic__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sim_sem_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotArmKinematic & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: forces
  {
    out << "forces: ";
    rosidl_generator_traits::value_to_yaml(msg.forces, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotArmKinematic & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << "\n";
  }

  // member: forces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "forces: ";
    rosidl_generator_traits::value_to_yaml(msg.forces, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotArmKinematic & msg, bool use_flow_style = false)
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
  const sim_sem_interfaces::msg::RobotArmKinematic & msg,
  std::ostream & out, size_t indentation = 0)
{
  sim_sem_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sim_sem_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sim_sem_interfaces::msg::RobotArmKinematic & msg)
{
  return sim_sem_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sim_sem_interfaces::msg::RobotArmKinematic>()
{
  return "sim_sem_interfaces::msg::RobotArmKinematic";
}

template<>
inline const char * name<sim_sem_interfaces::msg::RobotArmKinematic>()
{
  return "sim_sem_interfaces/msg/RobotArmKinematic";
}

template<>
struct has_fixed_size<sim_sem_interfaces::msg::RobotArmKinematic>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sim_sem_interfaces::msg::RobotArmKinematic>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sim_sem_interfaces::msg::RobotArmKinematic>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_ARM_KINEMATIC__TRAITS_HPP_
