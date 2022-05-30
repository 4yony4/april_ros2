// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sim_sem_interfaces:msg/HumanMotion.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_MOTION__STRUCT_H_
#define SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'hand_position'
// Member 'hand_velocity'
// Member 'hand_acceleration'
// Member 'body_position'
// Member 'body_velocity'
// Member 'body_acceleration'
// Member 'tools_position'
// Member 'tools_velocity'
// Member 'tools_acceleration'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HumanMotion in the package sim_sem_interfaces.
/**
  * std_msgs/Header Header
 */
typedef struct sim_sem_interfaces__msg__HumanMotion
{
  rosidl_runtime_c__String hand_position;
  rosidl_runtime_c__String hand_velocity;
  rosidl_runtime_c__String hand_acceleration;
  rosidl_runtime_c__String body_position;
  rosidl_runtime_c__String body_velocity;
  rosidl_runtime_c__String body_acceleration;
  rosidl_runtime_c__String tools_position;
  rosidl_runtime_c__String tools_velocity;
  rosidl_runtime_c__String tools_acceleration;
} sim_sem_interfaces__msg__HumanMotion;

// Struct for a sequence of sim_sem_interfaces__msg__HumanMotion.
typedef struct sim_sem_interfaces__msg__HumanMotion__Sequence
{
  sim_sem_interfaces__msg__HumanMotion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sim_sem_interfaces__msg__HumanMotion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_MOTION__STRUCT_H_
