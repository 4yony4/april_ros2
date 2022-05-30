// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sim_sem_interfaces:msg/HumanGraspingStrategies.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_GRASPING_STRATEGIES__STRUCT_H_
#define SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_GRASPING_STRATEGIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'location'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HumanGraspingStrategies in the package sim_sem_interfaces.
/**
  * std_msgs/Header Header
 */
typedef struct sim_sem_interfaces__msg__HumanGraspingStrategies
{
  rosidl_runtime_c__String__Sequence type;
  rosidl_runtime_c__String location;
} sim_sem_interfaces__msg__HumanGraspingStrategies;

// Struct for a sequence of sim_sem_interfaces__msg__HumanGraspingStrategies.
typedef struct sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence
{
  sim_sem_interfaces__msg__HumanGraspingStrategies * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_GRASPING_STRATEGIES__STRUCT_H_
