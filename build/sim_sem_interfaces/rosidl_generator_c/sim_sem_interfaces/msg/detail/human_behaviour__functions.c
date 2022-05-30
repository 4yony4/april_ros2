// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sim_sem_interfaces:msg/HumanBehaviour.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/human_behaviour__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `body_posture`
#include "rosidl_runtime_c/string_functions.h"
// Member `humamgrasping_list`
#include "sim_sem_interfaces/msg/detail/human_grasping_strategies__functions.h"

bool
sim_sem_interfaces__msg__HumanBehaviour__init(sim_sem_interfaces__msg__HumanBehaviour * msg)
{
  if (!msg) {
    return false;
  }
  // body_posture
  if (!rosidl_runtime_c__String__init(&msg->body_posture)) {
    sim_sem_interfaces__msg__HumanBehaviour__fini(msg);
    return false;
  }
  // humamgrasping_list
  if (!sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence__init(&msg->humamgrasping_list, 0)) {
    sim_sem_interfaces__msg__HumanBehaviour__fini(msg);
    return false;
  }
  return true;
}

void
sim_sem_interfaces__msg__HumanBehaviour__fini(sim_sem_interfaces__msg__HumanBehaviour * msg)
{
  if (!msg) {
    return;
  }
  // body_posture
  rosidl_runtime_c__String__fini(&msg->body_posture);
  // humamgrasping_list
  sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence__fini(&msg->humamgrasping_list);
}

bool
sim_sem_interfaces__msg__HumanBehaviour__are_equal(const sim_sem_interfaces__msg__HumanBehaviour * lhs, const sim_sem_interfaces__msg__HumanBehaviour * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // body_posture
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->body_posture), &(rhs->body_posture)))
  {
    return false;
  }
  // humamgrasping_list
  if (!sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence__are_equal(
      &(lhs->humamgrasping_list), &(rhs->humamgrasping_list)))
  {
    return false;
  }
  return true;
}

bool
sim_sem_interfaces__msg__HumanBehaviour__copy(
  const sim_sem_interfaces__msg__HumanBehaviour * input,
  sim_sem_interfaces__msg__HumanBehaviour * output)
{
  if (!input || !output) {
    return false;
  }
  // body_posture
  if (!rosidl_runtime_c__String__copy(
      &(input->body_posture), &(output->body_posture)))
  {
    return false;
  }
  // humamgrasping_list
  if (!sim_sem_interfaces__msg__HumanGraspingStrategies__Sequence__copy(
      &(input->humamgrasping_list), &(output->humamgrasping_list)))
  {
    return false;
  }
  return true;
}

sim_sem_interfaces__msg__HumanBehaviour *
sim_sem_interfaces__msg__HumanBehaviour__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__HumanBehaviour * msg = (sim_sem_interfaces__msg__HumanBehaviour *)allocator.allocate(sizeof(sim_sem_interfaces__msg__HumanBehaviour), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sim_sem_interfaces__msg__HumanBehaviour));
  bool success = sim_sem_interfaces__msg__HumanBehaviour__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sim_sem_interfaces__msg__HumanBehaviour__destroy(sim_sem_interfaces__msg__HumanBehaviour * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sim_sem_interfaces__msg__HumanBehaviour__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sim_sem_interfaces__msg__HumanBehaviour__Sequence__init(sim_sem_interfaces__msg__HumanBehaviour__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__HumanBehaviour * data = NULL;

  if (size) {
    data = (sim_sem_interfaces__msg__HumanBehaviour *)allocator.zero_allocate(size, sizeof(sim_sem_interfaces__msg__HumanBehaviour), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sim_sem_interfaces__msg__HumanBehaviour__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sim_sem_interfaces__msg__HumanBehaviour__fini(&data[i - 1]);
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
sim_sem_interfaces__msg__HumanBehaviour__Sequence__fini(sim_sem_interfaces__msg__HumanBehaviour__Sequence * array)
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
      sim_sem_interfaces__msg__HumanBehaviour__fini(&array->data[i]);
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

sim_sem_interfaces__msg__HumanBehaviour__Sequence *
sim_sem_interfaces__msg__HumanBehaviour__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__HumanBehaviour__Sequence * array = (sim_sem_interfaces__msg__HumanBehaviour__Sequence *)allocator.allocate(sizeof(sim_sem_interfaces__msg__HumanBehaviour__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sim_sem_interfaces__msg__HumanBehaviour__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sim_sem_interfaces__msg__HumanBehaviour__Sequence__destroy(sim_sem_interfaces__msg__HumanBehaviour__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sim_sem_interfaces__msg__HumanBehaviour__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sim_sem_interfaces__msg__HumanBehaviour__Sequence__are_equal(const sim_sem_interfaces__msg__HumanBehaviour__Sequence * lhs, const sim_sem_interfaces__msg__HumanBehaviour__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sim_sem_interfaces__msg__HumanBehaviour__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sim_sem_interfaces__msg__HumanBehaviour__Sequence__copy(
  const sim_sem_interfaces__msg__HumanBehaviour__Sequence * input,
  sim_sem_interfaces__msg__HumanBehaviour__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sim_sem_interfaces__msg__HumanBehaviour);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sim_sem_interfaces__msg__HumanBehaviour * data =
      (sim_sem_interfaces__msg__HumanBehaviour *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sim_sem_interfaces__msg__HumanBehaviour__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sim_sem_interfaces__msg__HumanBehaviour__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sim_sem_interfaces__msg__HumanBehaviour__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
