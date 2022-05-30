// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sim_sem_interfaces:msg/RobotArm.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_ARM__STRUCT_H_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_ARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "rosidl_runtime_c/string.h"
// Member 'robotarmkinematic_list'
#include "sim_sem_interfaces/msg/detail/robot_arm_kinematic__struct.h"

/// Struct defined in msg/RobotArm in the package sim_sem_interfaces.
/**
  * std_msgs/Header header
 */
typedef struct sim_sem_interfaces__msg__RobotArm
{
  rosidl_runtime_c__String state;
  sim_sem_interfaces__msg__RobotArmKinematic__Sequence robotarmkinematic_list;
} sim_sem_interfaces__msg__RobotArm;

// Struct for a sequence of sim_sem_interfaces__msg__RobotArm.
typedef struct sim_sem_interfaces__msg__RobotArm__Sequence
{
  sim_sem_interfaces__msg__RobotArm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sim_sem_interfaces__msg__RobotArm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_ARM__STRUCT_H_
