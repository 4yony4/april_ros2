// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sim_sem_interfaces:msg/Environment.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ENVIRONMENT__STRUCT_H_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ENVIRONMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'semantictag'
#include "rosidl_runtime_c/string.h"
// Member 'objects_list'
#include "sim_sem_interfaces/msg/detail/physical_object__struct.h"

/// Struct defined in msg/Environment in the package sim_sem_interfaces.
/**
  * std_msgs/Header header
 */
typedef struct sim_sem_interfaces__msg__Environment
{
  uint32_t timestamp;
  rosidl_runtime_c__String semantictag;
  sim_sem_interfaces__msg__PhysicalObject__Sequence objects_list;
} sim_sem_interfaces__msg__Environment;

// Struct for a sequence of sim_sem_interfaces__msg__Environment.
typedef struct sim_sem_interfaces__msg__Environment__Sequence
{
  sim_sem_interfaces__msg__Environment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sim_sem_interfaces__msg__Environment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ENVIRONMENT__STRUCT_H_
