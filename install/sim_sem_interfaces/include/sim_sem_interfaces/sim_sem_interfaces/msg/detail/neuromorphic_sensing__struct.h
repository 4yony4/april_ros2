// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sim_sem_interfaces:msg/NeuromorphicSensing.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__NEUROMORPHIC_SENSING__STRUCT_H_
#define SIM_SEM_INTERFACES__MSG__DETAIL__NEUROMORPHIC_SENSING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point1_speed'
// Member 'point2_speed'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NeuromorphicSensing in the package sim_sem_interfaces.
/**
  * std_msgs/Header Header
 */
typedef struct sim_sem_interfaces__msg__NeuromorphicSensing
{
  rosidl_runtime_c__String point1_speed;
  rosidl_runtime_c__String point2_speed;
} sim_sem_interfaces__msg__NeuromorphicSensing;

// Struct for a sequence of sim_sem_interfaces__msg__NeuromorphicSensing.
typedef struct sim_sem_interfaces__msg__NeuromorphicSensing__Sequence
{
  sim_sem_interfaces__msg__NeuromorphicSensing * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sim_sem_interfaces__msg__NeuromorphicSensing__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__NEUROMORPHIC_SENSING__STRUCT_H_
