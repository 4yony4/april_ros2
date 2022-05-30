// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sim_sem_interfaces:msg/Tactile.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__TACTILE__STRUCT_H_
#define SIM_SEM_INTERFACES__MSG__DETAIL__TACTILE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Tactile in the package sim_sem_interfaces.
typedef struct sim_sem_interfaces__msg__Tactile
{
  rosidl_runtime_c__String label;
  float temperature;
} sim_sem_interfaces__msg__Tactile;

// Struct for a sequence of sim_sem_interfaces__msg__Tactile.
typedef struct sim_sem_interfaces__msg__Tactile__Sequence
{
  sim_sem_interfaces__msg__Tactile * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sim_sem_interfaces__msg__Tactile__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__TACTILE__STRUCT_H_
