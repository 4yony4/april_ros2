// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sim_sem_interfaces:msg/HumanGraspingStrategies.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/human_grasping_strategies__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
// Member `location`
#include "rosidl_runtime_c/string_functions.h"

bool
sim_sem_interfaces__msg__HumanGraspingStrategies__init(sim_sem_interfaces__msg__HumanGraspingStrategies * msg)
{
  if (!msg) {
    return false;
  }
  // type
  {
    bool success = rosidl_runtime_c__String__Sequence__init(&msg->type, 3);
    if (!success) {
      goto abort_init_0;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->type.data[0], "power");
    if (!success) {
      goto abort_init_1;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->type.data[1], "pinch");
    if (!success) {
      goto abort_init_2;
    }
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->type.data[2], "three_fingers");
    if (!success) {
      goto abort_init_3;
    }
  }
  // location
  if (!rosidl_runtime_c__String__init(&msg->location)) {
    sim_sem_interfaces__msg__HumanGraspingStrategies__fini(msg);
    return false;
  }
  return true;
abort_init_3:
  rosidl_runtime_c__String__fini(&msg->type.data[1]);
abort_init_2:
  rosidl_runtime_c__String__fini(&msg->type.data[0]);
abort_init_1:
  rosidl_runtime_c__String__Sequence__fini(&msg->type);
abort_init_0:
  return false;
}

void
sim_sem_interfaces__msg__HumanGraspingStrategies__fini(sim_sem_interfaces__msg__HumanGraspingStrategies * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__Sequence__fini(&msg->type);
  // location
  rosidl_runtime_c__String__fini(&msg->location);
}

bool
sim_sem_interfaces__msg__HumanGraspingStrategies__are_equal(const sim_sem_interfaces__msg__HumanGraspingStrategies * lhs, const sim_sem_interfaces__msg__HumanGraspingStrategies * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  return true;
}

bool
sim_sem_interfaces__msg__HumanGraspingStrategies__copy(
  const sim_sem_interfaces__msg__HumanGraspingStrategies * input,
  sim_sem_interfaces__msg__HumanGraspingStrategies * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // location
  if (!rosidl_runtime_c__String__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  return true;
}

sim_sem_interfaces__msg__HumanGraspingStrategies *
sim_sem_interfaces__msg__HumanGraspingStrategies__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__HumanGraspingStrategies * msg = (sim_sem_interfaces__msg__HumanGraspingStrategies *)allocator.allocate(sizeof(sim_sem_interfaces__msg__HumanGraspingStrategies), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sim_sem_interfaces__msg__HumanGraspingStrategies));
  bool success = sim_sem_interfaces__msg__HumanGraspingStrategies__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sim_sem_interfaces__msg__HumanGraspingStrategies__destroy(sim_sem_interfaces__msg__HumanGraspingStrategies * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sim_sem_interfaces__msg__HumanGraspingStrategies__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence__init(sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__HumanGraspingStrategies * data = NULL;

  if (size) {
    data = (sim_sem_interfaces__msg__HumanGraspingStrategies *)allocator.zero_allocate(size, sizeof(sim_sem_interfaces__msg__HumanGraspingStrategies), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sim_sem_interfaces__msg__HumanGraspingStrategies__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sim_sem_interfaces__msg__HumanGraspingStrategies__fini(&data[i - 1]);
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
sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence__fini(sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence * array)
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
      sim_sem_interfaces__msg__HumanGraspingStrategies__fini(&array->data[i]);
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

sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence *
sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence * array = (sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence *)allocator.allocate(sizeof(sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence__destroy(sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence__are_equal(const sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence * lhs, const sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sim_sem_interfaces__msg__HumanGraspingStrategies__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence__copy(
  const sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence * input,
  sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sim_sem_interfaces__msg__HumanGraspingStrategies);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sim_sem_interfaces__msg__HumanGraspingStrategies * data =
      (sim_sem_interfaces__msg__HumanGraspingStrategies *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sim_sem_interfaces__msg__HumanGraspingStrategies__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sim_sem_interfaces__msg__HumanGraspingStrategies__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sim_sem_interfaces__msg__HumanGraspingStrategies__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
