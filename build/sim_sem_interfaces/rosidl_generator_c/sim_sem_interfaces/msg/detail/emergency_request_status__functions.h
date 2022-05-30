// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sim_sem_interfaces:msg/EmergencyRequestStatus.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__FUNCTIONS_H_
#define SIM_SEM_INTERFACES__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sim_sem_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "sim_sem_interfaces/msg/detail/emergency_request_status__struct.h"

/// Initialize msg/EmergencyRequestStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sim_sem_interfaces__msg__EmergencyRequestStatus
 * )) before or use
 * sim_sem_interfaces__msg__EmergencyRequestStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
bool
sim_sem_interfaces__msg__EmergencyRequestStatus__init(sim_sem_interfaces__msg__EmergencyRequestStatus * msg);

/// Finalize msg/EmergencyRequestStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
void
sim_sem_interfaces__msg__EmergencyRequestStatus__fini(sim_sem_interfaces__msg__EmergencyRequestStatus * msg);

/// Create msg/EmergencyRequestStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sim_sem_interfaces__msg__EmergencyRequestStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
sim_sem_interfaces__msg__EmergencyRequestStatus *
sim_sem_interfaces__msg__EmergencyRequestStatus__create();

/// Destroy msg/EmergencyRequestStatus message.
/**
 * It calls
 * sim_sem_interfaces__msg__EmergencyRequestStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
void
sim_sem_interfaces__msg__EmergencyRequestStatus__destroy(sim_sem_interfaces__msg__EmergencyRequestStatus * msg);

/// Check for msg/EmergencyRequestStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
bool
sim_sem_interfaces__msg__EmergencyRequestStatus__are_equal(const sim_sem_interfaces__msg__EmergencyRequestStatus * lhs, const sim_sem_interfaces__msg__EmergencyRequestStatus * rhs);

/// Copy a msg/EmergencyRequestStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
bool
sim_sem_interfaces__msg__EmergencyRequestStatus__copy(
  const sim_sem_interfaces__msg__EmergencyRequestStatus * input,
  sim_sem_interfaces__msg__EmergencyRequestStatus * output);

/// Initialize array of msg/EmergencyRequestStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * sim_sem_interfaces__msg__EmergencyRequestStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
bool
sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence__init(sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence * array, size_t size);

/// Finalize array of msg/EmergencyRequestStatus messages.
/**
 * It calls
 * sim_sem_interfaces__msg__EmergencyRequestStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
void
sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence__fini(sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence * array);

/// Create array of msg/EmergencyRequestStatus messages.
/**
 * It allocates the memory for the array and calls
 * sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence *
sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence__create(size_t size);

/// Destroy array of msg/EmergencyRequestStatus messages.
/**
 * It calls
 * sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
void
sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence__destroy(sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence * array);

/// Check for msg/EmergencyRequestStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
bool
sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence__are_equal(const sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence * lhs, const sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence * rhs);

/// Copy an array of msg/EmergencyRequestStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
bool
sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence__copy(
  const sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence * input,
  sim_sem_interfaces__msg__EmergencyRequestStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__EMERGENCY_REQUEST_STATUS__FUNCTIONS_H_
