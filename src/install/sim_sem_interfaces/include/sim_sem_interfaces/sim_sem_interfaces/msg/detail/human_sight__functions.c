// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sim_sem_interfaces:msg/HumanSight.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/human_sight__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sight_direction`
#include "rosidl_runtime_c/string_functions.h"

bool
sim_sem_interfaces__msg__HumanSight__init(sim_sem_interfaces__msg__HumanSight * msg)
{
  if (!msg) {
    return false;
  }
  // sight_direction
  if (!rosidl_runtime_c__String__init(&msg->sight_direction)) {
    sim_sem_interfaces__msg__HumanSight__fini(msg);
    return false;
  }
  return true;
}

void
sim_sem_interfaces__msg__HumanSight__fini(sim_sem_interfaces__msg__HumanSight * msg)
{
  if (!msg) {
    return;
  }
  // sight_direction
  rosidl_runtime_c__String__fini(&msg->sight_direction);
}

bool
sim_sem_interfaces__msg__HumanSight__are_equal(const sim_sem_interfaces__msg__HumanSight * lhs, const sim_sem_interfaces__msg__HumanSight * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sight_direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sight_direction), &(rhs->sight_direction)))
  {
    return false;
  }
  return true;
}

bool
sim_sem_interfaces__msg__HumanSight__copy(
  const sim_sem_interfaces__msg__HumanSight * input,
  sim_sem_interfaces__msg__HumanSight * output)
{
  if (!input || !output) {
    return false;
  }
  // sight_direction
  if (!rosidl_runtime_c__String__copy(
      &(input->sight_direction), &(output->sight_direction)))
  {
    return false;
  }
  return true;
}

sim_sem_interfaces__msg__HumanSight *
sim_sem_interfaces__msg__HumanSight__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__HumanSight * msg = (sim_sem_interfaces__msg__HumanSight *)allocator.allocate(sizeof(sim_sem_interfaces__msg__HumanSight), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sim_sem_interfaces__msg__HumanSight));
  bool success = sim_sem_interfaces__msg__HumanSight__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sim_sem_interfaces__msg__HumanSight__destroy(sim_sem_interfaces__msg__HumanSight * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sim_sem_interfaces__msg__HumanSight__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sim_sem_interfaces__msg__HumanSight__Sequence__init(sim_sem_interfaces__msg__HumanSight__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__HumanSight * data = NULL;

  if (size) {
    data = (sim_sem_interfaces__msg__HumanSight *)allocator.zero_allocate(size, sizeof(sim_sem_interfaces__msg__HumanSight), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sim_sem_interfaces__msg__HumanSight__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sim_sem_interfaces__msg__HumanSight__fini(&data[i - 1]);
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
sim_sem_interfaces__msg__HumanSight__Sequence__fini(sim_sem_interfaces__msg__HumanSight__Sequence * array)
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
      sim_sem_interfaces__msg__HumanSight__fini(&array->data[i]);
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

sim_sem_interfaces__msg__HumanSight__Sequence *
sim_sem_interfaces__msg__HumanSight__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__HumanSight__Sequence * array = (sim_sem_interfaces__msg__HumanSight__Sequence *)allocator.allocate(sizeof(sim_sem_interfaces__msg__HumanSight__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sim_sem_interfaces__msg__HumanSight__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sim_sem_interfaces__msg__HumanSight__Sequence__destroy(sim_sem_interfaces__msg__HumanSight__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sim_sem_interfaces__msg__HumanSight__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sim_sem_interfaces__msg__HumanSight__Sequence__are_equal(const sim_sem_interfaces__msg__HumanSight__Sequence * lhs, const sim_sem_interfaces__msg__HumanSight__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sim_sem_interfaces__msg__HumanSight__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sim_sem_interfaces__msg__HumanSight__Sequence__copy(
  const sim_sem_interfaces__msg__HumanSight__Sequence * input,
  sim_sem_interfaces__msg__HumanSight__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sim_sem_interfaces__msg__HumanSight);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sim_sem_interfaces__msg__HumanSight * data =
      (sim_sem_interfaces__msg__HumanSight *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sim_sem_interfaces__msg__HumanSight__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sim_sem_interfaces__msg__HumanSight__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sim_sem_interfaces__msg__HumanSight__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
