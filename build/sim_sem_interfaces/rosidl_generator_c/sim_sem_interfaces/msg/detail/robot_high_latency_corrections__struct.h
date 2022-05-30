// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sim_sem_interfaces:msg/RobotHighLatencyCorrections.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__STRUCT_H_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action'
// Member 'description'
// Member 'cause'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RobotHighLatencyCorrections in the package sim_sem_interfaces.
/**
  * std_msgs/Header Header
 */
typedef struct sim_sem_interfaces__msg__RobotHighLatencyCorrections
{
  rosidl_runtime_c__String__Sequence action;
  rosidl_runtime_c__String description;
  rosidl_runtime_c__String cause;
} sim_sem_interfaces__msg__RobotHighLatencyCorrections;

// Struct for a sequence of sim_sem_interfaces__msg__RobotHighLatencyCorrections.
typedef struct sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence
{
  sim_sem_interfaces__msg__RobotHighLatencyCorrections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__STRUCT_H_
