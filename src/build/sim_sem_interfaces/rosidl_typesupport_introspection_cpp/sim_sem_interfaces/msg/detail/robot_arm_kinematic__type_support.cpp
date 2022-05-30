// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sim_sem_interfaces:msg/RobotArmKinematic.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sim_sem_interfaces/msg/detail/robot_arm_kinematic__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sim_sem_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RobotArmKinematic_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sim_sem_interfaces::msg::RobotArmKinematic(_init);
}

void RobotArmKinematic_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sim_sem_interfaces::msg::RobotArmKinematic *>(message_memory);
  typed_message->~RobotArmKinematic();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotArmKinematic_message_member_array[4] = {
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_sem_interfaces::msg::RobotArmKinematic, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_sem_interfaces::msg::RobotArmKinematic, velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_sem_interfaces::msg::RobotArmKinematic, acceleration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "forces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_sem_interfaces::msg::RobotArmKinematic, forces),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotArmKinematic_message_members = {
  "sim_sem_interfaces::msg",  // message namespace
  "RobotArmKinematic",  // message name
  4,  // number of fields
  sizeof(sim_sem_interfaces::msg::RobotArmKinematic),
  RobotArmKinematic_message_member_array,  // message members
  RobotArmKinematic_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotArmKinematic_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotArmKinematic_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotArmKinematic_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sim_sem_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sim_sem_interfaces::msg::RobotArmKinematic>()
{
  return &::sim_sem_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotArmKinematic_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sim_sem_interfaces, msg, RobotArmKinematic)() {
  return &::sim_sem_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotArmKinematic_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
