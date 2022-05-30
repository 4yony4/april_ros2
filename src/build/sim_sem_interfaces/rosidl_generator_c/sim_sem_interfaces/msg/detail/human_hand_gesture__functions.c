// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sim_sem_interfaces:msg/HumanHandGesture.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/human_hand_gesture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `recognized_gesture`
#include "rosidl_runtime_c/string_functions.h"

bool
sim_sem_interfaces__msg__HumanHandGesture__init(sim_sem_interfaces__msg__HumanHandGesture * msg)
{
  if (!msg) {
    return false;
  }
  // recognized_gesture
  if (!rosidl_runtime_c__String__init(&msg->recognized_gesture)) {
    sim_sem_interfaces__msg__HumanHandGesture__fini(msg);
    return false;
  }
  return true;
}

void
sim_sem_interfaces__msg__HumanHandGesture__fini(sim_sem_interfaces__msg__HumanHandGesture * msg)
{
  if (!msg) {
    return;
  }
  // recognized_gesture
  rosidl_runtime_c__String__fini(&msg->recognized_gesture);
}

bool
sim_sem_interfaces__msg__HumanHandGesture__are_equal(const sim_sem_interfaces__msg__HumanHandGesture * lhs, const sim_sem_interfaces__msg__HumanHandGesture * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // recognized_gesture
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->recognized_gesture), &(rhs->recognized_gesture)))
  {
    return false;
  }
  return true;
}

bool
sim_sem_interfaces__msg__HumanHandGesture__copy(
  const sim_sem_interfaces__msg__HumanHandGesture * input,
  sim_sem_interfaces__msg__HumanHandGesture * output)
{
  if (!input || !output) {
    return false;
  }
  // recognized_gesture
  if (!rosidl_runtime_c__String__copy(
      &(input->recognized_gesture), &(output->recognized_gesture)))
  {
    return false;
  }
  return true;
}

sim_sem_interfaces__msg__HumanHandGesture *
sim_sem_interfaces__msg__HumanHandGesture__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__HumanHandGesture * msg = (sim_sem_interfaces__msg__HumanHandGesture *)allocator.allocate(sizeof(sim_sem_interfaces__msg__HumanHandGesture), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sim_sem_interfaces__msg__HumanHandGesture));
  bool success = sim_sem_interfaces__msg__HumanHandGesture__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sim_sem_interfaces__msg__HumanHandGesture__destroy(sim_sem_interfaces__msg__HumanHandGesture * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sim_sem_interfaces__msg__HumanHandGesture__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sim_sem_interfaces__msg__HumanHandGesture__Sequence__init(sim_sem_interfaces__msg__HumanHandGesture__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__HumanHandGesture * data = NULL;

  if (size) {
    data = (sim_sem_interfaces__msg__HumanHandGesture *)allocator.zero_allocate(size, sizeof(sim_sem_interfaces__msg__HumanHandGesture), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sim_sem_interfaces__msg__HumanHandGesture__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sim_sem_interfaces__msg__HumanHandGesture__fini(&data[i - 1]);
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
sim_sem_interfaces__msg__HumanHandGesture__Sequence__fini(sim_sem_interfaces__msg__HumanHandGesture__Sequence * array)
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
      sim_sem_interfaces__msg__HumanHandGesture__fini(&array->data[i]);
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

sim_sem_interfaces__msg__HumanHandGesture__Sequence *
sim_sem_interfaces__msg__HumanHandGesture__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__HumanHandGesture__Sequence * array = (sim_sem_interfaces__msg__HumanHandGesture__Sequence *)allocator.allocate(sizeof(sim_sem_interfaces__msg__HumanHandGesture__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sim_sem_interfaces__msg__HumanHandGesture__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sim_sem_interfaces__msg__HumanHandGesture__Sequence__destroy(sim_sem_interfaces__msg__HumanHandGesture__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sim_sem_interfaces__msg__HumanHandGesture__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sim_sem_interfaces__msg__HumanHandGesture__Sequence__are_equal(const sim_sem_interfaces__msg__HumanHandGesture__Sequence * lhs, const sim_sem_interfaces__msg__HumanHandGesture__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sim_sem_interfaces__msg__HumanHandGesture__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sim_sem_interfaces__msg__HumanHandGesture__Sequence__copy(
  const sim_sem_interfaces__msg__HumanHandGesture__Sequence * input,
  sim_sem_interfaces__msg__HumanHandGesture__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sim_sem_interfaces__msg__HumanHandGesture);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sim_sem_interfaces__msg__HumanHandGesture * data =
      (sim_sem_interfaces__msg__HumanHandGesture *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sim_sem_interfaces__msg__HumanHandGesture__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sim_sem_interfaces__msg__HumanHandGesture__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sim_sem_interfaces__msg__HumanHandGesture__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
