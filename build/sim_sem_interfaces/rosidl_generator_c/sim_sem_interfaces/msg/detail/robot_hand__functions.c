// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sim_sem_interfaces:msg/RobotHand.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/robot_hand__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/string_functions.h"
// Member `robothandkinematic_list`
#include "sim_sem_interfaces/msg/detail/robot_hand_kinematic__functions.h"

bool
sim_sem_interfaces__msg__RobotHand__init(sim_sem_interfaces__msg__RobotHand * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    sim_sem_interfaces__msg__RobotHand__fini(msg);
    return false;
  }
  // robothandkinematic_list
  if (!sim_sem_interfaces__msg__RobotHandKinematic__Sequence__init(&msg->robothandkinematic_list, 0)) {
    sim_sem_interfaces__msg__RobotHand__fini(msg);
    return false;
  }
  return true;
}

void
sim_sem_interfaces__msg__RobotHand__fini(sim_sem_interfaces__msg__RobotHand * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // robothandkinematic_list
  sim_sem_interfaces__msg__RobotHandKinematic__Sequence__fini(&msg->robothandkinematic_list);
}

bool
sim_sem_interfaces__msg__RobotHand__are_equal(const sim_sem_interfaces__msg__RobotHand * lhs, const sim_sem_interfaces__msg__RobotHand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // robothandkinematic_list
  if (!sim_sem_interfaces__msg__RobotHandKinematic__Sequence__are_equal(
      &(lhs->robothandkinematic_list), &(rhs->robothandkinematic_list)))
  {
    return false;
  }
  return true;
}

bool
sim_sem_interfaces__msg__RobotHand__copy(
  const sim_sem_interfaces__msg__RobotHand * input,
  sim_sem_interfaces__msg__RobotHand * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // robothandkinematic_list
  if (!sim_sem_interfaces__msg__RobotHandKinematic__Sequence__copy(
      &(input->robothandkinematic_list), &(output->robothandkinematic_list)))
  {
    return false;
  }
  return true;
}

sim_sem_interfaces__msg__RobotHand *
sim_sem_interfaces__msg__RobotHand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__RobotHand * msg = (sim_sem_interfaces__msg__RobotHand *)allocator.allocate(sizeof(sim_sem_interfaces__msg__RobotHand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sim_sem_interfaces__msg__RobotHand));
  bool success = sim_sem_interfaces__msg__RobotHand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sim_sem_interfaces__msg__RobotHand__destroy(sim_sem_interfaces__msg__RobotHand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sim_sem_interfaces__msg__RobotHand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sim_sem_interfaces__msg__RobotHand__Sequence__init(sim_sem_interfaces__msg__RobotHand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__RobotHand * data = NULL;

  if (size) {
    data = (sim_sem_interfaces__msg__RobotHand *)allocator.zero_allocate(size, sizeof(sim_sem_interfaces__msg__RobotHand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sim_sem_interfaces__msg__RobotHand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sim_sem_interfaces__msg__RobotHand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
sim_sem_interfaces__msg__RobotHand__Sequence__fini(sim_sem_interfaces__msg__RobotHand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      sim_sem_interfaces__msg__RobotHand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

sim_sem_interfaces__msg__RobotHand__Sequence *
sim_sem_interfaces__msg__RobotHand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__RobotHand__Sequence * array = (sim_sem_interfaces__msg__RobotHand__Sequence *)allocator.allocate(sizeof(sim_sem_interfaces__msg__RobotHand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sim_sem_interfaces__msg__RobotHand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sim_sem_interfaces__msg__RobotHand__Sequence__destroy(sim_sem_interfaces__msg__RobotHand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sim_sem_interfaces__msg__RobotHand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sim_sem_interfaces__msg__RobotHand__Sequence__are_equal(const sim_sem_interfaces__msg__RobotHand__Sequence * lhs, const sim_sem_interfaces__msg__RobotHand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sim_sem_interfaces__msg__RobotHand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sim_sem_interfaces__msg__RobotHand__Sequence__copy(
  const sim_sem_interfaces__msg__RobotHand__Sequence * input,
  sim_sem_interfaces__msg__RobotHand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sim_sem_interfaces__msg__RobotHand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sim_sem_interfaces__msg__RobotHand * data =
      (sim_sem_interfaces__msg__RobotHand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sim_sem_interfaces__msg__RobotHand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sim_sem_interfaces__msg__RobotHand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sim_sem_interfaces__msg__RobotHand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
