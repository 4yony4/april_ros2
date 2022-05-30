// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sim_sem_interfaces:msg/HumanBehaviour.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sim_sem_interfaces/msg/detail/human_behaviour__struct.hpp"
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

void HumanBehaviour_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sim_sem_interfaces::msg::HumanBehaviour(_init);
}

void HumanBehaviour_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sim_sem_interfaces::msg::HumanBehaviour *>(message_memory);
  typed_message->~HumanBehaviour();
}

size_t size_function__HumanBehaviour__humamgrasping_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<sim_sem_interfaces::msg::HumanGraspingStrategies> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HumanBehaviour__humamgrasping_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<sim_sem_interfaces::msg::HumanGraspingStrategies> *>(untyped_member);
  return &member[index];
}

void * get_function__HumanBehaviour__humamgrasping_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<sim_sem_interfaces::msg::HumanGraspingStrategies> *>(untyped_member);
  return &member[index];
}

void fetch_function__HumanBehaviour__humamgrasping_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const sim_sem_interfaces::msg::HumanGraspingStrategies *>(
    get_const_function__HumanBehaviour__humamgrasping_list(untyped_member, index));
  auto & value = *reinterpret_cast<sim_sem_interfaces::msg::HumanGraspingStrategies *>(untyped_value);
  value = item;
}

void assign_function__HumanBehaviour__humamgrasping_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<sim_sem_interfaces::msg::HumanGraspingStrategies *>(
    get_function__HumanBehaviour__humamgrasping_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const sim_sem_interfaces::msg::HumanGraspingStrategies *>(untyped_value);
  item = value;
}

void resize_function__HumanBehaviour__humamgrasping_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<sim_sem_interfaces::msg::HumanGraspingStrategies> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HumanBehaviour_message_member_array[2] = {
  {
    "body_posture",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_sem_interfaces::msg::HumanBehaviour, body_posture),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "humamgrasping_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sim_sem_interfaces::msg::HumanGraspingStrategies>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_sem_interfaces::msg::HumanBehaviour, humamgrasping_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__HumanBehaviour__humamgrasping_list,  // size() function pointer
    get_const_function__HumanBehaviour__humamgrasping_list,  // get_const(index) function pointer
    get_function__HumanBehaviour__humamgrasping_list,  // get(index) function pointer
    fetch_function__HumanBehaviour__humamgrasping_list,  // fetch(index, &value) function pointer
    assign_function__HumanBehaviour__humamgrasping_list,  // assign(index, value) function pointer
    resize_function__HumanBehaviour__humamgrasping_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HumanBehaviour_message_members = {
  "sim_sem_interfaces::msg",  // message namespace
  "HumanBehaviour",  // message name
  2,  // number of fields
  sizeof(sim_sem_interfaces::msg::HumanBehaviour),
  HumanBehaviour_message_member_array,  // message members
  HumanBehaviour_init_function,  // function to initialize message memory (memory has to be allocated)
  HumanBehaviour_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HumanBehaviour_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HumanBehaviour_message_members,
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
get_message_type_support_handle<sim_sem_interfaces::msg::HumanBehaviour>()
{
  return &::sim_sem_interfaces::msg::rosidl_typesupport_introspection_cpp::HumanBehaviour_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sim_sem_interfaces, msg, HumanBehaviour)() {
  return &::sim_sem_interfaces::msg::rosidl_typesupport_introspection_cpp::HumanBehaviour_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
