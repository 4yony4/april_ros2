// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sim_sem_interfaces:msg/HumanMotion.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/human_motion__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sim_sem_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sim_sem_interfaces/msg/detail/human_motion__struct.h"
#include "sim_sem_interfaces/msg/detail/human_motion__functions.h"
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

#include "rosidl_runtime_c/string.h"  // body_acceleration, body_position, body_velocity, hand_acceleration, hand_position, hand_velocity, tools_acceleration, tools_position, tools_velocity
#include "rosidl_runtime_c/string_functions.h"  // body_acceleration, body_position, body_velocity, hand_acceleration, hand_position, hand_velocity, tools_acceleration, tools_position, tools_velocity

// forward declare type support functions


using _HumanMotion__ros_msg_type = sim_sem_interfaces__msg__HumanMotion;

static bool _HumanMotion__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HumanMotion__ros_msg_type * ros_message = static_cast<const _HumanMotion__ros_msg_type *>(untyped_ros_message);
  // Field name: hand_position
  {
    const rosidl_runtime_c__String * str = &ros_message->hand_position;
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

  // Field name: hand_velocity
  {
    const rosidl_runtime_c__String * str = &ros_message->hand_velocity;
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

  // Field name: hand_acceleration
  {
    const rosidl_runtime_c__String * str = &ros_message->hand_acceleration;
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

  // Field name: body_position
  {
    const rosidl_runtime_c__String * str = &ros_message->body_position;
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

  // Field name: body_velocity
  {
    const rosidl_runtime_c__String * str = &ros_message->body_velocity;
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

  // Field name: body_acceleration
  {
    const rosidl_runtime_c__String * str = &ros_message->body_acceleration;
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

  // Field name: tools_position
  {
    const rosidl_runtime_c__String * str = &ros_message->tools_position;
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

  // Field name: tools_velocity
  {
    const rosidl_runtime_c__String * str = &ros_message->tools_velocity;
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

  // Field name: tools_acceleration
  {
    const rosidl_runtime_c__String * str = &ros_message->tools_acceleration;
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

static bool _HumanMotion__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HumanMotion__ros_msg_type * ros_message = static_cast<_HumanMotion__ros_msg_type *>(untyped_ros_message);
  // Field name: hand_position
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->hand_position.data) {
      rosidl_runtime_c__String__init(&ros_message->hand_position);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->hand_position,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'hand_position'\n");
      return false;
    }
  }

  // Field name: hand_velocity
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->hand_velocity.data) {
      rosidl_runtime_c__String__init(&ros_message->hand_velocity);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->hand_velocity,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'hand_velocity'\n");
      return false;
    }
  }

  // Field name: hand_acceleration
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->hand_acceleration.data) {
      rosidl_runtime_c__String__init(&ros_message->hand_acceleration);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->hand_acceleration,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'hand_acceleration'\n");
      return false;
    }
  }

  // Field name: body_position
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->body_position.data) {
      rosidl_runtime_c__String__init(&ros_message->body_position);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->body_position,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'body_position'\n");
      return false;
    }
  }

  // Field name: body_velocity
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->body_velocity.data) {
      rosidl_runtime_c__String__init(&ros_message->body_velocity);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->body_velocity,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'body_velocity'\n");
      return false;
    }
  }

  // Field name: body_acceleration
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->body_acceleration.data) {
      rosidl_runtime_c__String__init(&ros_message->body_acceleration);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->body_acceleration,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'body_acceleration'\n");
      return false;
    }
  }

  // Field name: tools_position
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tools_position.data) {
      rosidl_runtime_c__String__init(&ros_message->tools_position);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->tools_position,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tools_position'\n");
      return false;
    }
  }

  // Field name: tools_velocity
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tools_velocity.data) {
      rosidl_runtime_c__String__init(&ros_message->tools_velocity);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->tools_velocity,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tools_velocity'\n");
      return false;
    }
  }

  // Field name: tools_acceleration
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tools_acceleration.data) {
      rosidl_runtime_c__String__init(&ros_message->tools_acceleration);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->tools_acceleration,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tools_acceleration'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sim_sem_interfaces
size_t get_serialized_size_sim_sem_interfaces__msg__HumanMotion(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HumanMotion__ros_msg_type * ros_message = static_cast<const _HumanMotion__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name hand_position
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hand_position.size + 1);
  // field.name hand_velocity
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hand_velocity.size + 1);
  // field.name hand_acceleration
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hand_acceleration.size + 1);
  // field.name body_position
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->body_position.size + 1);
  // field.name body_velocity
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->body_velocity.size + 1);
  // field.name body_acceleration
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->body_acceleration.size + 1);
  // field.name tools_position
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tools_position.size + 1);
  // field.name tools_velocity
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tools_velocity.size + 1);
  // field.name tools_acceleration
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tools_acceleration.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _HumanMotion__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sim_sem_interfaces__msg__HumanMotion(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sim_sem_interfaces
size_t max_serialized_size_sim_sem_interfaces__msg__HumanMotion(
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

  // member: hand_position
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
  // member: hand_velocity
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
  // member: hand_acceleration
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
  // member: body_position
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
  // member: body_velocity
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
  // member: body_acceleration
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
  // member: tools_position
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
  // member: tools_velocity
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
  // member: tools_acceleration
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

static size_t _HumanMotion__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sim_sem_interfaces__msg__HumanMotion(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HumanMotion = {
  "sim_sem_interfaces::msg",
  "HumanMotion",
  _HumanMotion__cdr_serialize,
  _HumanMotion__cdr_deserialize,
  _HumanMotion__get_serialized_size,
  _HumanMotion__max_serialized_size
};

static rosidl_message_type_support_t _HumanMotion__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HumanMotion,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sim_sem_interfaces, msg, HumanMotion)() {
  return &_HumanMotion__type_support;
}

#if defined(__cplusplus)
}
#endif
