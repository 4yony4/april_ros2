// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sim_sem_interfaces:msg/RobotGraspingStrategies.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_GRASPING_STRATEGIES__STRUCT_H_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_GRASPING_STRATEGIES__STRUCT_H_

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

/// Struct defined in msg/RobotGraspingStrategies in the package sim_sem_interfaces.
/**
  * std_msgs/Header Header
 */
typedef struct sim_sem_interfaces__msg__RobotGraspingStrategies
{
  rosidl_runtime_c__String__Sequence type;
  rosidl_runtime_c__String location;
  float timetolift;
} sim_sem_interfaces__msg__RobotGraspingStrategies;

// Struct for a sequence of sim_sem_interfaces__msg__RobotGraspingStrategies.
typedef struct sim_sem_interfaces__msg__RobotGraspingStrategies__Sequence
{
  sim_sem_interfaces__msg__RobotGraspingStrategies * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sim_sem_interfaces__msg__RobotGraspingStrategies__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_GRASPING_STRATEGIES__STRUCT_H_
