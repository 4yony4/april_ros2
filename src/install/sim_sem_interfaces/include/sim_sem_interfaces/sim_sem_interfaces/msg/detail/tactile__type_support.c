// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sim_sem_interfaces:msg/Tactile.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sim_sem_interfaces/msg/detail/tactile__rosidl_typesupport_introspection_c.h"
#include "sim_sem_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sim_sem_interfaces/msg/detail/tactile__functions.h"
#include "sim_sem_interfaces/msg/detail/tactile__struct.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sim_sem_interfaces__msg__Tactile__rosidl_typesupport_introspection_c__Tactile_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sim_sem_interfaces__msg__Tactile__init(message_memory);
}

void sim_sem_interfaces__msg__Tactile__rosidl_typesupport_introspection_c__Tactile_fini_function(void * message_memory)
{
  sim_sem_interfaces__msg__Tactile__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sim_sem_interfaces__msg__Tactile__rosidl_typesupport_introspection_c__Tactile_message_member_array[2] = {
  {
    "label",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_sem_interfaces__msg__Tactile, label),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_sem_interfaces__msg__Tactile, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sim_sem_interfaces__msg__Tactile__rosidl_typesupport_introspection_c__Tactile_message_members = {
  "sim_sem_interfaces__msg",  // message namespace
  "Tactile",  // message name
  2,  // number of fields
  sizeof(sim_sem_interfaces__msg__Tactile),
  sim_sem_interfaces__msg__Tactile__rosidl_typesupport_introspection_c__Tactile_message_member_array,  // message members
  sim_sem_interfaces__msg__Tactile__rosidl_typesupport_introspection_c__Tactile_init_function,  // function to initialize message memory (memory has to be allocated)
  sim_sem_interfaces__msg__Tactile__rosidl_typesupport_introspection_c__Tactile_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sim_sem_interfaces__msg__Tactile__rosidl_typesupport_introspection_c__Tactile_message_type_support_handle = {
  0,
  &sim_sem_interfaces__msg__Tactile__rosidl_typesupport_introspection_c__Tactile_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sim_sem_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sim_sem_interfaces, msg, Tactile)() {
  if (!sim_sem_interfaces__msg__Tactile__rosidl_typesupport_introspection_c__Tactile_message_type_support_handle.typesupport_identifier) {
    sim_sem_interfaces__msg__Tactile__rosidl_typesupport_introspection_c__Tactile_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sim_sem_interfaces__msg__Tactile__rosidl_typesupport_introspection_c__Tactile_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
