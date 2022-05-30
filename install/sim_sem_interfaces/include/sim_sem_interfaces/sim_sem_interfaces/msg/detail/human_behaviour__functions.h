// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sim_sem_interfaces:msg/HumanBehaviour.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_BEHAVIOUR__FUNCTIONS_H_
#define SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_BEHAVIOUR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sim_sem_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "sim_sem_interfaces/msg/detail/human_behaviour__struct.h"

/// Initialize msg/HumanBehaviour message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sim_sem_interfaces__msg__HumanBehaviour
 * )) before or use
 * sim_sem_interfaces__msg__HumanBehaviour__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
bool
sim_sem_interfaces__msg__HumanBehaviour__init(sim_sem_interfaces__msg__HumanBehaviour * msg);

/// Finalize msg/HumanBehaviour message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
void
sim_sem_interfaces__msg__HumanBehaviour__fini(sim_sem_interfaces__msg__HumanBehaviour * msg);

/// Create msg/HumanBehaviour message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sim_sem_interfaces__msg__HumanBehaviour__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
sim_sem_interfaces__msg__HumanBehaviour *
sim_sem_interfaces__msg__HumanBehaviour__create();

/// Destroy msg/HumanBehaviour message.
/**
 * It calls
 * sim_sem_interfaces__msg__HumanBehaviour__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
void
sim_sem_interfaces__msg__HumanBehaviour__destroy(sim_sem_interfaces__msg__HumanBehaviour * msg);

/// Check for msg/HumanBehaviour message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
bool
sim_sem_interfaces__msg__HumanBehaviour__are_equal(const sim_sem_interfaces__msg__HumanBehaviour * lhs, const sim_sem_interfaces__msg__HumanBehaviour * rhs);

/// Copy a msg/HumanBehaviour message.
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
sim_sem_interfaces__msg__HumanBehaviour__copy(
  const sim_sem_interfaces__msg__HumanBehaviour * input,
  sim_sem_interfaces__msg__HumanBehaviour * output);

/// Initialize array of msg/HumanBehaviour messages.
/**
 * It allocates the memory for the number of elements and calls
 * sim_sem_interfaces__msg__HumanBehaviour__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
bool
sim_sem_interfaces__msg__HumanBehaviour__Sequence__init(sim_sem_interfaces__msg__HumanBehaviour__Sequence * array, size_t size);

/// Finalize array of msg/HumanBehaviour messages.
/**
 * It calls
 * sim_sem_interfaces__msg__HumanBehaviour__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
void
sim_sem_interfaces__msg__HumanBehaviour__Sequence__fini(sim_sem_interfaces__msg__HumanBehaviour__Sequence * array);

/// Create array of msg/HumanBehaviour messages.
/**
 * It allocates the memory for the array and calls
 * sim_sem_interfaces__msg__HumanBehaviour__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
sim_sem_interfaces__msg__HumanBehaviour__Sequence *
sim_sem_interfaces__msg__HumanBehaviour__Sequence__create(size_t size);

/// Destroy array of msg/HumanBehaviour messages.
/**
 * It calls
 * sim_sem_interfaces__msg__HumanBehaviour__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
void
sim_sem_interfaces__msg__HumanBehaviour__Sequence__destroy(sim_sem_interfaces__msg__HumanBehaviour__Sequence * array);

/// Check for msg/HumanBehaviour message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sim_sem_interfaces
bool
sim_sem_interfaces__msg__HumanBehaviour__Sequence__are_equal(const sim_sem_interfaces__msg__HumanBehaviour__Sequence * lhs, const sim_sem_interfaces__msg__HumanBehaviour__Sequence * rhs);

/// Copy an array of msg/HumanBehaviour messages.
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
sim_sem_interfaces__msg__HumanBehaviour__Sequence__copy(
  const sim_sem_interfaces__msg__HumanBehaviour__Sequence * input,
  sim_sem_interfaces__msg__HumanBehaviour__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_BEHAVIOUR__FUNCTIONS_H_
