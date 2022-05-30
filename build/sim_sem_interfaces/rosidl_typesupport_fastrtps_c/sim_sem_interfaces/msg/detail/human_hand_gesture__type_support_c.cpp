// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sim_sem_interfaces:msg/HumanHandGesture.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/human_hand_gesture__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sim_sem_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sim_sem_interfaces/msg/detail/human_hand_gesture__struct.h"
#include "sim_sem_interfaces/msg/detail/human_hand_gesture__functions.h"
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

#include "rosidl_runtime_c/string.h"  // recognized_gesture
#include "rosidl_runtime_c/string_functions.h"  // recognized_gesture

// forward declare type support functions


using _HumanHandGesture__ros_msg_type = sim_sem_interfaces__msg__HumanHandGesture;

static bool _HumanHandGesture__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HumanHandGesture__ros_msg_type * ros_message = static_cast<const _HumanHandGesture__ros_msg_type *>(untyped_ros_message);
  // Field name: recognized_gesture
  {
    const rosidl_runtime_c__String * str = &ros_message->recognized_gesture;
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

static bool _HumanHandGesture__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HumanHandGesture__ros_msg_type * ros_message = static_cast<_HumanHandGesture__ros_msg_type *>(untyped_ros_message);
  // Field name: recognized_gesture
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->recognized_gesture.data) {
      rosidl_runtime_c__String__init(&ros_message->recognized_gesture);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->recognized_gesture,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'recognized_gesture'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sim_sem_interfaces
size_t get_serialized_size_sim_sem_interfaces__msg__HumanHandGesture(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HumanHandGesture__ros_msg_type * ros_message = static_cast<const _HumanHandGesture__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name recognized_gesture
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->recognized_gesture.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _HumanHandGesture__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sim_sem_interfaces__msg__HumanHandGesture(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sim_sem_interfaces
size_t max_serialized_size_sim_sem_interfaces__msg__HumanHandGesture(
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

  // member: recognized_gesture
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

static size_t _HumanHandGesture__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sim_sem_interfaces__msg__HumanHandGesture(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HumanHandGesture = {
  "sim_sem_interfaces::msg",
  "HumanHandGesture",
  _HumanHandGesture__cdr_serialize,
  _HumanHandGesture__cdr_deserialize,
  _HumanHandGesture__get_serialized_size,
  _HumanHandGesture__max_serialized_size
};

static rosidl_message_type_support_t _HumanHandGesture__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HumanHandGesture,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sim_sem_interfaces, msg, HumanHandGesture)() {
  return &_HumanHandGesture__type_support;
}

#if defined(__cplusplus)
}
#endif
