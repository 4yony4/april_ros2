// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sim_sem_interfaces:msg/HumanSight.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/human_sight__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sim_sem_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sim_sem_interfaces/msg/detail/human_sight__struct.h"
#include "sim_sem_interfaces/msg/detail/human_sight__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // sight_direction
#include "rosidl_runtime_c/string_functions.h"  // sight_direction

// forward declare type support functions


using _HumanSight__ros_msg_type = sim_sem_interfaces__msg__HumanSight;

static bool _HumanSight__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HumanSight__ros_msg_type * ros_message = static_cast<const _HumanSight__ros_msg_type *>(untyped_ros_message);
  // Field name: sight_direction
  {
    const rosidl_runtime_c__String * str = &ros_message->sight_direction;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _HumanSight__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HumanSight__ros_msg_type * ros_message = static_cast<_HumanSight__ros_msg_type *>(untyped_ros_message);
  // Field name: sight_direction
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sight_direction.data) {
      rosidl_runtime_c__String__init(&ros_message->sight_direction);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sight_direction,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sight_direction'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sim_sem_interfaces
size_t get_serialized_size_sim_sem_interfaces__msg__HumanSight(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HumanSight__ros_msg_type * ros_message = static_cast<const _HumanSight__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sight_direction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sight_direction.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _HumanSight__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sim_sem_interfaces__msg__HumanSight(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sim_sem_interfaces
size_t max_serialized_size_sim_sem_interfaces__msg__HumanSight(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: sight_direction
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _HumanSight__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sim_sem_interfaces__msg__HumanSight(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HumanSight = {
  "sim_sem_interfaces::msg",
  "HumanSight",
  _HumanSight__cdr_serialize,
  _HumanSight__cdr_deserialize,
  _HumanSight__get_serialized_size,
  _HumanSight__max_serialized_size
};

static rosidl_message_type_support_t _HumanSight__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HumanSight,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sim_sem_interfaces, msg, HumanSight)() {
  return &_HumanSight__type_support;
}

#if defined(__cplusplus)
}
#endif
