// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sim_sem_interfaces:msg/RobotHighLatencyCorrections.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/robot_high_latency_corrections__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `action`
// Member `description`
// Member `cause`
#include "rosidl_runtime_c/string_functions.h"

bool
sim_sem_interfaces__msg__RobotHighLatencyCorrections__init(sim_sem_interfaces__msg__RobotHighLatencyCorrections * msg)
{
  if (!msg) {
    return false;
  }
  // action
  {
    bool success = rosidl_runtime_c__String__Sequence__init(&msg->action, 3);
    if (!success) {
      goto abort_init_0;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->action.data[0], "movement");
    if (!success) {
      goto abort_init_1;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->action.data[1], "grasp");
    if (!success) {
      goto abort_init_2;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->action.data[2], "stopping");
    if (!success) {
      goto abort_init_3;
    }
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    sim_sem_interfaces__msg__RobotHighLatencyCorrections__fini(msg);
    return false;
  }
  // cause
  if (!rosidl_runtime_c__String__init(&msg->cause)) {
    sim_sem_interfaces__msg__RobotHighLatencyCorrections__fini(msg);
    return false;
  }
  return true;
abort_init_3:
  rosidl_runtime_c__String__fini(&msg->action.data[1]);
abort_init_2:
  rosidl_runtime_c__String__fini(&msg->action.data[0]);
abort_init_1:
  rosidl_runtime_c__String__Sequence__fini(&msg->action);
abort_init_0:
  return false;
}

void
sim_sem_interfaces__msg__RobotHighLatencyCorrections__fini(sim_sem_interfaces__msg__RobotHighLatencyCorrections * msg)
{
  if (!msg) {
    return;
  }
  // action
  rosidl_runtime_c__String__Sequence__fini(&msg->action);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // cause
  rosidl_runtime_c__String__fini(&msg->cause);
}

bool
sim_sem_interfaces__msg__RobotHighLatencyCorrections__are_equal(const sim_sem_interfaces__msg__RobotHighLatencyCorrections * lhs, const sim_sem_interfaces__msg__RobotHighLatencyCorrections * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // cause
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cause), &(rhs->cause)))
  {
    return false;
  }
  return true;
}

bool
sim_sem_interfaces__msg__RobotHighLatencyCorrections__copy(
  const sim_sem_interfaces__msg__RobotHighLatencyCorrections * input,
  sim_sem_interfaces__msg__RobotHighLatencyCorrections * output)
{
  if (!input || !output) {
    return false;
  }
  // action
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // cause
  if (!rosidl_runtime_c__String__copy(
      &(input->cause), &(output->cause)))
  {
    return false;
  }
  return true;
}

sim_sem_interfaces__msg__RobotHighLatencyCorrections *
sim_sem_interfaces__msg__RobotHighLatencyCorrections__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__RobotHighLatencyCorrections * msg = (sim_sem_interfaces__msg__RobotHighLatencyCorrections *)allocator.allocate(sizeof(sim_sem_interfaces__msg__RobotHighLatencyCorrections), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sim_sem_interfaces__msg__RobotHighLatencyCorrections));
  bool success = sim_sem_interfaces__msg__RobotHighLatencyCorrections__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sim_sem_interfaces__msg__RobotHighLatencyCorrections__destroy(sim_sem_interfaces__msg__RobotHighLatencyCorrections * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sim_sem_interfaces__msg__RobotHighLatencyCorrections__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence__init(sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__RobotHighLatencyCorrections * data = NULL;

  if (size) {
    data = (sim_sem_interfaces__msg__RobotHighLatencyCorrections *)allocator.zero_allocate(size, sizeof(sim_sem_interfaces__msg__RobotHighLatencyCorrections), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sim_sem_interfaces__msg__RobotHighLatencyCorrections__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sim_sem_interfaces__msg__RobotHighLatencyCorrections__fini(&data[i - 1]);
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
sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence__fini(sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence * array)
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
      sim_sem_interfaces__msg__RobotHighLatencyCorrections__fini(&array->data[i]);
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

sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence *
sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence * array = (sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence *)allocator.allocate(sizeof(sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence__destroy(sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence__are_equal(const sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence * lhs, const sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sim_sem_interfaces__msg__RobotHighLatencyCorrections__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence__copy(
  const sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence * input,
  sim_sem_interfaces__msg__RobotHighLatencyCorrections__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sim_sem_interfaces__msg__RobotHighLatencyCorrections);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sim_sem_interfaces__msg__RobotHighLatencyCorrections * data =
      (sim_sem_interfaces__msg__RobotHighLatencyCorrections *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sim_sem_interfaces__msg__RobotHighLatencyCorrections__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sim_sem_interfaces__msg__RobotHighLatencyCorrections__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sim_sem_interfaces__msg__RobotHighLatencyCorrections__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
