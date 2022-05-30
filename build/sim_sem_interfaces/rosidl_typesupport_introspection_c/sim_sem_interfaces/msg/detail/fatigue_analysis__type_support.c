// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sim_sem_interfaces:msg/FatigueAnalysis.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sim_sem_interfaces/msg/detail/fatigue_analysis__rosidl_typesupport_introspection_c.h"
#include "sim_sem_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sim_sem_interfaces/msg/detail/fatigue_analysis__functions.h"
#include "sim_sem_interfaces/msg/detail/fatigue_analysis__struct.h"


// Include directives for member types
// Member `fatigue_values`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sim_sem_interfaces__msg__FatigueAnalysis__init(message_memory);
}

void sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_fini_function(void * message_memory)
{
  sim_sem_interfaces__msg__FatigueAnalysis__fini(message_memory);
}

size_t sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__size_function__FatigueAnalysis__fatigue_values(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__get_const_function__FatigueAnalysis__fatigue_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String * member =
    (const rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void * sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__get_function__FatigueAnalysis__fatigue_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String * member =
    (rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__fetch_function__FatigueAnalysis__fatigue_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__get_const_function__FatigueAnalysis__fatigue_values(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__assign_function__FatigueAnalysis__fatigue_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__get_function__FatigueAnalysis__fatigue_values(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_member_array[1] = {
  {
    "fatigue_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(sim_sem_interfaces__msg__FatigueAnalysis, fatigue_values),  // bytes offset in struct
    NULL,  // default value
    sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__size_function__FatigueAnalysis__fatigue_values,  // size() function pointer
    sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__get_const_function__FatigueAnalysis__fatigue_values,  // get_const(index) function pointer
    sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__get_function__FatigueAnalysis__fatigue_values,  // get(index) function pointer
    sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__fetch_function__FatigueAnalysis__fatigue_values,  // fetch(index, &value) function pointer
    sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__assign_function__FatigueAnalysis__fatigue_values,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_members = {
  "sim_sem_interfaces__msg",  // message namespace
  "FatigueAnalysis",  // message name
  1,  // number of fields
  sizeof(sim_sem_interfaces__msg__FatigueAnalysis),
  sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_member_array,  // message members
  sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_init_function,  // function to initialize message memory (memory has to be allocated)
  sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_type_support_handle = {
  0,
  &sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sim_sem_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sim_sem_interfaces, msg, FatigueAnalysis)() {
  if (!sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_type_support_handle.typesupport_identifier) {
    sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sim_sem_interfaces__msg__FatigueAnalysis__rosidl_typesupport_introspection_c__FatigueAnalysis_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
