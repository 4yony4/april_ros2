// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sim_sem_interfaces:msg/RobotHand.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HAND__STRUCT_H_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HAND__STRUCT_H_

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
// Member 'robothandkinematic_list'
#include "sim_sem_interfaces/msg/detail/robot_hand_kinematic__struct.h"

/// Struct defined in msg/RobotHand in the package sim_sem_interfaces.
/**
  * std_msgs/Header header
 */
typedef struct sim_sem_interfaces__msg__RobotHand
{
  rosidl_runtime_c__String state;
  sim_sem_interfaces__msg__RobotHandKinematic__Sequence robothandkinematic_list;
} sim_sem_interfaces__msg__RobotHand;

// Struct for a sequence of sim_sem_interfaces__msg__RobotHand.
typedef struct sim_sem_interfaces__msg__RobotHand__Sequence
{
  sim_sem_interfaces__msg__RobotHand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sim_sem_interfaces__msg__RobotHand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HAND__STRUCT_H_
