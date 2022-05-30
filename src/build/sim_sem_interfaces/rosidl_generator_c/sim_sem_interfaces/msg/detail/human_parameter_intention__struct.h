// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sim_sem_interfaces:msg/HumanParameterIntention.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__STRUCT_H_
#define SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motion_prediction'
#include "rosidl_runtime_c/string.h"
// Member 'humanmotion_list'
#include "sim_sem_interfaces/msg/detail/human_motion__struct.h"

/// Struct defined in msg/HumanParameterIntention in the package sim_sem_interfaces.
/**
  * std_msgs/Header header
 */
typedef struct sim_sem_interfaces__msg__HumanParameterIntention
{
  rosidl_runtime_c__String motion_prediction;
  float engagement_level;
  float cognitive_level;
  float mood_level;
  sim_sem_interfaces__msg__HumanMotion__Sequence humanmotion_list;
} sim_sem_interfaces__msg__HumanParameterIntention;

// Struct for a sequence of sim_sem_interfaces__msg__HumanParameterIntention.
typedef struct sim_sem_interfaces__msg__HumanParameterIntention__Sequence
{
  sim_sem_interfaces__msg__HumanParameterIntention * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sim_sem_interfaces__msg__HumanParameterIntention__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_PARAMETER_INTENTION__STRUCT_H_
