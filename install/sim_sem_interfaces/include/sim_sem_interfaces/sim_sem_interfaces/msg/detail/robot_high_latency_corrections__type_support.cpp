// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sim_sem_interfaces:msg/RobotHighLatencyCorrections.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sim_sem_interfaces/msg/detail/robot_high_latency_corrections__struct.hpp"
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

void RobotHighLatencyCorrections_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sim_sem_interfaces::msg::RobotHighLatencyCorrections(_init);
}

void RobotHighLatencyCorrections_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sim_sem_interfaces::msg::RobotHighLatencyCorrections *>(message_memory);
  typed_message->~RobotHighLatencyCorrections();
}

size_t size_function__RobotHighLatencyCorrections__action(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotHighLatencyCorrections__action(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotHighLatencyCorrections__action(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotHighLatencyCorrections__action(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__RobotHighLatencyCorrections__action(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__RobotHighLatencyCorrections__action(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__RobotHighLatencyCorrections__action(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__RobotHighLatencyCorrections__action(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotHighLatencyCorrections_message_member_array[3] = {
  {
    "action",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_sem_interfaces::msg::RobotHighLatencyCorrections, action),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotHighLatencyCorrections__action,  // size() function pointer
    get_const_function__RobotHighLatencyCorrections__action,  // get_const(index) function pointer
    get_function__RobotHighLatencyCorrections__action,  // get(index) function pointer
    fetch_function__RobotHighLatencyCorrections__action,  // fetch(index, &value) function pointer
    assign_function__RobotHighLatencyCorrections__action,  // assign(index, value) function pointer
    resize_function__RobotHighLatencyCorrections__action  // resize(index) function pointer
  },
  {
    "description",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_sem_interfaces::msg::RobotHighLatencyCorrections, description),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cause",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_sem_interfaces::msg::RobotHighLatencyCorrections, cause),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotHighLatencyCorrections_message_members = {
  "sim_sem_interfaces::msg",  // message namespace
  "RobotHighLatencyCorrections",  // message name
  3,  // number of fields
  sizeof(sim_sem_interfaces::msg::RobotHighLatencyCorrections),
  RobotHighLatencyCorrections_message_member_array,  // message members
  RobotHighLatencyCorrections_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotHighLatencyCorrections_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotHighLatencyCorrections_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotHighLatencyCorrections_message_members,
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
get_message_type_support_handle<sim_sem_interfaces::msg::RobotHighLatencyCorrections>()
{
  return &::sim_sem_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotHighLatencyCorrections_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sim_sem_interfaces, msg, RobotHighLatencyCorrections)() {
  return &::sim_sem_interfaces::msg::rosidl_typesupport_introspection_cpp::RobotHighLatencyCorrections_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
