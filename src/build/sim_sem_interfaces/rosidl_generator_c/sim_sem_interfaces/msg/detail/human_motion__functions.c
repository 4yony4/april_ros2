// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sim_sem_interfaces:msg/HumanMotion.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/human_motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `hand_position`
// Member `hand_velocity`
// Member `hand_acceleration`
// Member `body_position`
// Member `body_velocity`
// Member `body_acceleration`
// Member `tools_position`
// Member `tools_velocity`
// Member `tools_acceleration`
#include "rosidl_runtime_c/string_functions.h"

bool
sim_sem_interfaces__msg__HumanMotion__init(sim_sem_interfaces__msg__HumanMotion * msg)
{
  if (!msg) {
    return false;
  }
  // hand_position
  if (!rosidl_runtime_c__String__init(&msg->hand_position)) {
    sim_sem_interfaces__msg__HumanMotion__fini(msg);
    return false;
  }
  // hand_velocity
  if (!rosidl_runtime_c__String__init(&msg->hand_velocity)) {
    sim_sem_interfaces__msg__HumanMotion__fini(msg);
    return false;
  }
  // hand_acceleration
  if (!rosidl_runtime_c__String__init(&msg->hand_acceleration)) {
    sim_sem_interfaces__msg__HumanMotion__fini(msg);
    return false;
  }
  // body_position
  if (!rosidl_runtime_c__String__init(&msg->body_position)) {
    sim_sem_interfaces__msg__HumanMotion__fini(msg);
    return false;
  }
  // body_velocity
  if (!rosidl_runtime_c__String__init(&msg->body_velocity)) {
    sim_sem_interfaces__msg__HumanMotion__fini(msg);
    return false;
  }
  // body_acceleration
  if (!rosidl_runtime_c__String__init(&msg->body_acceleration)) {
    sim_sem_interfaces__msg__HumanMotion__fini(msg);
    return false;
  }
  // tools_position
  if (!rosidl_runtime_c__String__init(&msg->tools_position)) {
    sim_sem_interfaces__msg__HumanMotion__fini(msg);
    return false;
  }
  // tools_velocity
  if (!rosidl_runtime_c__String__init(&msg->tools_velocity)) {
    sim_sem_interfaces__msg__HumanMotion__fini(msg);
    return false;
  }
  // tools_acceleration
  if (!rosidl_runtime_c__String__init(&msg->tools_acceleration)) {
    sim_sem_interfaces__msg__HumanMotion__fini(msg);
    return false;
  }
  return true;
}

void
sim_sem_interfaces__msg__HumanMotion__fini(sim_sem_interfaces__msg__HumanMotion * msg)
{
  if (!msg) {
    return;
  }
  // hand_position
  rosidl_runtime_c__String__fini(&msg->hand_position);
  // hand_velocity
  rosidl_runtime_c__String__fini(&msg->hand_velocity);
  // hand_acceleration
  rosidl_runtime_c__String__fini(&msg->hand_acceleration);
  // body_position
  rosidl_runtime_c__String__fini(&msg->body_position);
  // body_velocity
  rosidl_runtime_c__String__fini(&msg->body_velocity);
  // body_acceleration
  rosidl_runtime_c__String__fini(&msg->body_acceleration);
  // tools_position
  rosidl_runtime_c__String__fini(&msg->tools_position);
  // tools_velocity
  rosidl_runtime_c__String__fini(&msg->tools_velocity);
  // tools_acceleration
  rosidl_runtime_c__String__fini(&msg->tools_acceleration);
}

bool
sim_sem_interfaces__msg__HumanMotion__are_equal(const sim_sem_interfaces__msg__HumanMotion * lhs, const sim_sem_interfaces__msg__HumanMotion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hand_position
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hand_position), &(rhs->hand_position)))
  {
    return false;
  }
  // hand_velocity
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hand_velocity), &(rhs->hand_velocity)))
  {
    return false;
  }
  // hand_acceleration
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hand_acceleration), &(rhs->hand_acceleration)))
  {
    return false;
  }
  // body_position
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->body_position), &(rhs->body_position)))
  {
    return false;
  }
  // body_velocity
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->body_velocity), &(rhs->body_velocity)))
  {
    return false;
  }
  // body_acceleration
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->body_acceleration), &(rhs->body_acceleration)))
  {
    return false;
  }
  // tools_position
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tools_position), &(rhs->tools_position)))
  {
    return false;
  }
  // tools_velocity
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tools_velocity), &(rhs->tools_velocity)))
  {
    return false;
  }
  // tools_acceleration
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tools_acceleration), &(rhs->tools_acceleration)))
  {
    return false;
  }
  return true;
}

bool
sim_sem_interfaces__msg__HumanMotion__copy(
  const sim_sem_interfaces__msg__HumanMotion * input,
  sim_sem_interfaces__msg__HumanMotion * output)
{
  if (!input || !output) {
    return false;
  }
  // hand_position
  if (!rosidl_runtime_c__String__copy(
      &(input->hand_position), &(output->hand_position)))
  {
    return false;
  }
  // hand_velocity
  if (!rosidl_runtime_c__String__copy(
      &(input->hand_velocity), &(output->hand_velocity)))
  {
    return false;
  }
  // hand_acceleration
  if (!rosidl_runtime_c__String__copy(
      &(input->hand_acceleration), &(output->hand_acceleration)))
  {
    return false;
  }
  // body_position
  if (!rosidl_runtime_c__String__copy(
      &(input->body_position), &(output->body_position)))
  {
    return false;
  }
  // body_velocity
  if (!rosidl_runtime_c__String__copy(
      &(input->body_velocity), &(output->body_velocity)))
  {
    return false;
  }
  // body_acceleration
  if (!rosidl_runtime_c__String__copy(
      &(input->body_acceleration), &(output->body_acceleration)))
  {
    return false;
  }
  // tools_position
  if (!rosidl_runtime_c__String__copy(
      &(input->tools_position), &(output->tools_position)))
  {
    return false;
  }
  // tools_velocity
  if (!rosidl_runtime_c__String__copy(
      &(input->tools_velocity), &(output->tools_velocity)))
  {
    return false;
  }
  // tools_acceleration
  if (!rosidl_runtime_c__String__copy(
      &(input->tools_acceleration), &(output->tools_acceleration)))
  {
    return false;
  }
  return true;
}

sim_sem_interfaces__msg__HumanMotion *
sim_sem_interfaces__msg__HumanMotion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__HumanMotion * msg = (sim_sem_interfaces__msg__HumanMotion *)allocator.allocate(sizeof(sim_sem_interfaces__msg__HumanMotion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sim_sem_interfaces__msg__HumanMotion));
  bool success = sim_sem_interfaces__msg__HumanMotion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sim_sem_interfaces__msg__HumanMotion__destroy(sim_sem_interfaces__msg__HumanMotion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sim_sem_interfaces__msg__HumanMotion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sim_sem_interfaces__msg__HumanMotion__Sequence__init(sim_sem_interfaces__msg__HumanMotion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__HumanMotion * data = NULL;

  if (size) {
    data = (sim_sem_interfaces__msg__HumanMotion *)allocator.zero_allocate(size, sizeof(sim_sem_interfaces__msg__HumanMotion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sim_sem_interfaces__msg__HumanMotion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sim_sem_interfaces__msg__HumanMotion__fini(&data[i - 1]);
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
sim_sem_interfaces__msg__HumanMotion__Sequence__fini(sim_sem_interfaces__msg__HumanMotion__Sequence * array)
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
      sim_sem_interfaces__msg__HumanMotion__fini(&array->data[i]);
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

sim_sem_interfaces__msg__HumanMotion__Sequence *
sim_sem_interfaces__msg__HumanMotion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sim_sem_interfaces__msg__HumanMotion__Sequence * array = (sim_sem_interfaces__msg__HumanMotion__Sequence *)allocator.allocate(sizeof(sim_sem_interfaces__msg__HumanMotion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sim_sem_interfaces__msg__HumanMotion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sim_sem_interfaces__msg__HumanMotion__Sequence__destroy(sim_sem_interfaces__msg__HumanMotion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sim_sem_interfaces__msg__HumanMotion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sim_sem_interfaces__msg__HumanMotion__Sequence__are_equal(const sim_sem_interfaces__msg__HumanMotion__Sequence * lhs, const sim_sem_interfaces__msg__HumanMotion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sim_sem_interfaces__msg__HumanMotion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sim_sem_interfaces__msg__HumanMotion__Sequence__copy(
  const sim_sem_interfaces__msg__HumanMotion__Sequence * input,
  sim_sem_interfaces__msg__HumanMotion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sim_sem_interfaces__msg__HumanMotion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sim_sem_interfaces__msg__HumanMotion * data =
      (sim_sem_interfaces__msg__HumanMotion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sim_sem_interfaces__msg__HumanMotion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sim_sem_interfaces__msg__HumanMotion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sim_sem_interfaces__msg__HumanMotion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
