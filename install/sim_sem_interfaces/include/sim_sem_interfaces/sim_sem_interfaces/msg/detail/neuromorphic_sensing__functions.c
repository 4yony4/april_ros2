// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sim_sem_interfaces:msg/NeuromorphicSensing.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/neuromorphic_sensing__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `point1_speed`
// Member `point2_speed`
#include "rosidl_runtime_c/string_functions.h"

bool
sim_sem_interfaces__msg__NeuromorphicSensing__init(sim_sem_interfaces__msg__NeuromorphicSensing * msg)
{
  if (!msg) {
    return false;
  }
  // point1_speed
  if (!rosidl_runtime_c__String__init(&msg->point1_speed)) {
    sim_sem_interfaces__msg__NeuromorphicSensing__fini(msg);
    return false;
  }
  // point2_speed
  if (!rosidl_runtime_c__String__init(&msg->point2_speed)) {
    sim_sem_interfaces__msg__NeuromorphicSensing__fini(msg);
    return false;
  }
  return true;
}

void
sim_sem_interfaces__msg__NeuromorphicSensing__fini(sim_sem_interfaces__msg__NeuromorphicSensing * msg)
{
  if (!msg) {
    return;
  }
  // point1_speed
  rosidl_runtime_c__String__fini(&msg->point1_speed);
  // point2_speed
  rosidl_runtime_c__String__fini(&msg->point2_speed);
}

bool
sim_sem_interfaces__msg__NeuromorphicSensing__are_equal(const sim_sem_interfaces__msg__NeuromorphicSensing * lhs, const sim_sem_interfaces__msg__NeuromorphicSensing * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // point1_speed
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->point1_speed), &(rhs->point1_speed)))
  {
    return false;
  }
  // point2_speed
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->point2_speed), &(rhs->point2_speed)))
  {
    return false;
  }
  return true;
}

bool
sim_sem_interfaces__msg__NeuromorphicSensing__copy(
  const sim_sem_interfaces__msg__NeuromorphicSensing * input,
  sim_sem_interfaces__msg__NeuromorphicSensing * output)
{
  if (!input || !output) {
    return false;
  }
  // point1_speed
  if (!rosidl_runtime_c__String__copy(
      &(input->point1_speed), &(output->point1_speed)))
  {
    return false;
  }
  // point2_speed
  if (!rosidl_runtime_c__String__copy(
      &(input->point2_speed), &(output->point2_speed)))
  {
    return false;
  }
  return true;
}

sim_sem_interfaces__msg__NeuromorphicSensing *
sim_sem_interfaces__msg__NeuromorphicSensing__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__NeuromorphicSensing * msg = (sim_sem_interfaces__msg__NeuromorphicSensing *)allocator.allocate(sizeof(sim_sem_interfaces__msg__NeuromorphicSensing), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sim_sem_interfaces__msg__NeuromorphicSensing));
  bool success = sim_sem_interfaces__msg__NeuromorphicSensing__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sim_sem_interfaces__msg__NeuromorphicSensing__destroy(sim_sem_interfaces__msg__NeuromorphicSensing * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sim_sem_interfaces__msg__NeuromorphicSensing__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sim_sem_interfaces__msg__NeuromorphicSensing__Sequence__init(sim_sem_interfaces__msg__NeuromorphicSensing__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__NeuromorphicSensing * data = NULL;

  if (size) {
    data = (sim_sem_interfaces__msg__NeuromorphicSensing *)allocator.zero_allocate(size, sizeof(sim_sem_interfaces__msg__NeuromorphicSensing), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sim_sem_interfaces__msg__NeuromorphicSensing__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sim_sem_interfaces__msg__NeuromorphicSensing__fini(&data[i - 1]);
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
sim_sem_interfaces__msg__NeuromorphicSensing__Sequence__fini(sim_sem_interfaces__msg__NeuromorphicSensing__Sequence * array)
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
      sim_sem_interfaces__msg__NeuromorphicSensing__fini(&array->data[i]);
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

sim_sem_interfaces__msg__NeuromorphicSensing__Sequence *
sim_sem_interfaces__msg__NeuromorphicSensing__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__NeuromorphicSensing__Sequence * array = (sim_sem_interfaces__msg__NeuromorphicSensing__Sequence *)allocator.allocate(sizeof(sim_sem_interfaces__msg__NeuromorphicSensing__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sim_sem_interfaces__msg__NeuromorphicSensing__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sim_sem_interfaces__msg__NeuromorphicSensing__Sequence__destroy(sim_sem_interfaces__msg__NeuromorphicSensing__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sim_sem_interfaces__msg__NeuromorphicSensing__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sim_sem_interfaces__msg__NeuromorphicSensing__Sequence__are_equal(const sim_sem_interfaces__msg__NeuromorphicSensing__Sequence * lhs, const sim_sem_interfaces__msg__NeuromorphicSensing__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sim_sem_interfaces__msg__NeuromorphicSensing__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sim_sem_interfaces__msg__NeuromorphicSensing__Sequence__copy(
  const sim_sem_interfaces__msg__NeuromorphicSensing__Sequence * input,
  sim_sem_interfaces__msg__NeuromorphicSensing__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sim_sem_interfaces__msg__NeuromorphicSensing);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sim_sem_interfaces__msg__NeuromorphicSensing * data =
      (sim_sem_interfaces__msg__NeuromorphicSensing *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sim_sem_interfaces__msg__NeuromorphicSensing__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sim_sem_interfaces__msg__NeuromorphicSensing__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sim_sem_interfaces__msg__NeuromorphicSensing__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
