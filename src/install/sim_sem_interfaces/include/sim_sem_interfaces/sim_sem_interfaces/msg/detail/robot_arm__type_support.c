// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sim_sem_interfaces:msg/RobotArm.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sim_sem_interfaces/msg/detail/robot_arm__rosidl_typesupport_introspection_c.h"
#include "sim_sem_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sim_sem_interfaces/msg/detail/robot_arm__functions.h"
#include "sim_sem_interfaces/msg/detail/robot_arm__struct.h"


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/string_functions.h"
// Member `robotarmkinematic_list`
#include "sim_sem_interfaces/msg/robot_arm_kinematic.h"
// Member `robotarmkinematic_list`
#include "sim_sem_interfaces/msg/detail/robot_arm_kinematic__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__RobotArm_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sim_sem_interfaces__msg__RobotArm__init(message_memory);
}

void sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__RobotArm_fini_function(void * message_memory)
{
  sim_sem_interfaces__msg__RobotArm__fini(message_memory);
}

size_t sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__size_function__RobotArm__robotarmkinematic_list(
  const void * untyped_member)
{
  const sim_sem_interfaces__msg__RobotArmKinematic__Sequence * member =
    (const sim_sem_interfaces__msg__RobotArmKinematic__Sequence *)(untyped_member);
  return member->size;
}

const void * sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__get_const_function__RobotArm__robotarmkinematic_list(
  const void * untyped_member, size_t index)
{
  const sim_sem_interfaces__msg__RobotArmKinematic__Sequence * member =
    (const sim_sem_interfaces__msg__RobotArmKinematic__Sequence *)(untyped_member);
  return &member->data[index];
}

void * sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__get_function__RobotArm__robotarmkinematic_list(
  void * untyped_member, size_t index)
{
  sim_sem_interfaces__msg__RobotArmKinematic__Sequence * member =
    (sim_sem_interfaces__msg__RobotArmKinematic__Sequence *)(untyped_member);
  return &member->data[index];
}

void sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__fetch_function__RobotArm__robotarmkinematic_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const sim_sem_interfaces__msg__RobotArmKinematic * item =
    ((const sim_sem_interfaces__msg__RobotArmKinematic *)
    sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__get_const_function__RobotArm__robotarmkinematic_list(untyped_member, index));
  sim_sem_interfaces__msg__RobotArmKinematic * value =
    (sim_sem_interfaces__msg__RobotArmKinematic *)(untyped_value);
  *value = *item;
}

void sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__assign_function__RobotArm__robotarmkinematic_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  sim_sem_interfaces__msg__RobotArmKinematic * item =
    ((sim_sem_interfaces__msg__RobotArmKinematic *)
    sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__get_function__RobotArm__robotarmkinematic_list(untyped_member, index));
  const sim_sem_interfaces__msg__RobotArmKinematic * value =
    (const sim_sem_interfaces__msg__RobotArmKinematic *)(untyped_value);
  *item = *value;
}

bool sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__resize_function__RobotArm__robotarmkinematic_list(
  void * untyped_member, size_t size)
{
  sim_sem_interfaces__msg__RobotArmKinematic__Sequence * member =
    (sim_sem_interfaces__msg__RobotArmKinematic__Sequence *)(untyped_member);
  sim_sem_interfaces__msg__RobotArmKinematic__Sequence__fini(member);
  return sim_sem_interfaces__msg__RobotArmKinematic__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__RobotArm_message_member_array[2] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_sem_interfaces__msg__RobotArm, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robotarmkinematic_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sim_sem_interfaces__msg__RobotArm, robotarmkinematic_list),  // bytes offset in struct
    NULL,  // default value
    sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__size_function__RobotArm__robotarmkinematic_list,  // size() function pointer
    sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__get_const_function__RobotArm__robotarmkinematic_list,  // get_const(index) function pointer
    sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__get_function__RobotArm__robotarmkinematic_list,  // get(index) function pointer
    sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__fetch_function__RobotArm__robotarmkinematic_list,  // fetch(index, &value) function pointer
    sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__assign_function__RobotArm__robotarmkinematic_list,  // assign(index, value) function pointer
    sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__resize_function__RobotArm__robotarmkinematic_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__RobotArm_message_members = {
  "sim_sem_interfaces__msg",  // message namespace
  "RobotArm",  // message name
  2,  // number of fields
  sizeof(sim_sem_interfaces__msg__RobotArm),
  sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__RobotArm_message_member_array,  // message members
  sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__RobotArm_init_function,  // function to initialize message memory (memory has to be allocated)
  sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__RobotArm_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__RobotArm_message_type_support_handle = {
  0,
  &sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__RobotArm_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sim_sem_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sim_sem_interfaces, msg, RobotArm)() {
  sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__RobotArm_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sim_sem_interfaces, msg, RobotArmKinematic)();
  if (!sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__RobotArm_message_type_support_handle.typesupport_identifier) {
    sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__RobotArm_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sim_sem_interfaces__msg__RobotArm__rosidl_typesupport_introspection_c__RobotArm_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
