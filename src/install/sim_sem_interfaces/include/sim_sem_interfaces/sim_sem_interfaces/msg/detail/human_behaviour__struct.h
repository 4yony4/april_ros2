// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sim_sem_interfaces:msg/HumanBehaviour.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_BEHAVIOUR__STRUCT_H_
#define SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_BEHAVIOUR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'body_posture'
#include "rosidl_runtime_c/string.h"
// Member 'humamgrasping_list'
#include "sim_sem_interfaces/msg/detail/human_grasping_strategies__struct.h"

/// Struct defined in msg/HumanBehaviour in the package sim_sem_interfaces.
/**
  * std_msgs/Header header
 */
typedef struct sim_sem_interfaces__msg__HumanBehaviour
{
  rosidl_runtime_c__String body_posture;
  sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence humamgrasping_list;
} sim_sem_interfaces__msg__HumanBehaviour;

// Struct for a sequence of sim_sem_interfaces__msg__HumanBehaviour.
typedef struct sim_sem_interfaces__msg__HumanBehaviour__Sequence
{
  sim_sem_interfaces__msg__HumanBehaviour * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sim_sem_interfaces__msg__HumanBehaviour__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_BEHAVIOUR__STRUCT_H_
