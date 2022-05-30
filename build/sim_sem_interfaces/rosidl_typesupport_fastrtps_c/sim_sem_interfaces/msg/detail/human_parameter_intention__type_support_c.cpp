// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sim_sem_interfaces:msg/HumanParameterIntention.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/human_parameter_intention__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sim_sem_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sim_sem_interfaces/msg/detail/human_parameter_intention__struct.h"
#include "sim_sem_interfaces/msg/detail/human_parameter_intention__functions.h"
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

#include "rosidl_runtime_c/string.h"  // motion_prediction
#include "rosidl_runtime_c/string_functions.h"  // motion_prediction
#include "sim_sem_interfaces/msg/detail/human_motion__functions.h"  // humanmotion_list

// forward declare type support functions
size_t get_serialized_size_sim_sem_interfaces__msg__HumanMotion(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_sim_sem_interfaces__msg__HumanMotion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sim_sem_interfaces, msg, HumanMotion)();


using _HumanParameterIntention__ros_msg_type = sim_sem_interfaces__msg__HumanParameterIntention;

static bool _HumanParameterIntention__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HumanParameterIntention__ros_msg_type * ros_message = static_cast<const _HumanParameterIntention__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_prediction
  {
    const rosidl_runtime_c__String * str = &ros_message->motion_prediction;
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

  // Field name: engagement_level
  {
    cdr << ros_message->engagement_level;
  }

  // Field name: cognitive_level
  {
    cdr << ros_message->cognitive_level;
  }

  // Field name: mood_level
  {
    cdr << ros_message->mood_level;
  }

  // Field name: humanmotion_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sim_sem_interfaces, msg, HumanMotion
      )()->data);
    size_t size = ros_message->humanmotion_list.size;
    auto array_ptr = ros_message->humanmotion_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _HumanParameterIntention__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HumanParameterIntention__ros_msg_type * ros_message = static_cast<_HumanParameterIntention__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_prediction
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->motion_prediction.data) {
      rosidl_runtime_c__String__init(&ros_message->motion_prediction);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->motion_prediction,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'motion_prediction'\n");
      return false;
    }
  }

  // Field name: engagement_level
  {
    cdr >> ros_message->engagement_level;
  }

  // Field name: cognitive_level
  {
    cdr >> ros_message->cognitive_level;
  }

  // Field name: mood_level
  {
    cdr >> ros_message->mood_level;
  }

  // Field name: humanmotion_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sim_sem_interfaces, msg, HumanMotion
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->humanmotion_list.data) {
      sim_sem_interfaces__msg__HumanMotion__Sequence__fini(&ros_message->humanmotion_list);
    }
    if (!sim_sem_interfaces__msg__HumanMotion__Sequence__init(&ros_message->humanmotion_list, size)) {
      fprintf(stderr, "failed to create array for field 'humanmotion_list'");
      return false;
    }
    auto array_ptr = ros_message->humanmotion_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sim_sem_interfaces
size_t get_serialized_size_sim_sem_interfaces__msg__HumanParameterIntention(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HumanParameterIntention__ros_msg_type * ros_message = static_cast<const _HumanParameterIntention__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motion_prediction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motion_prediction.size + 1);
  // field.name engagement_level
  {
    size_t item_size = sizeof(ros_message->engagement_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cognitive_level
  {
    size_t item_size = sizeof(ros_message->cognitive_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mood_level
  {
    size_t item_size = sizeof(ros_message->mood_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name humanmotion_list
  {
    size_t array_size = ros_message->humanmotion_list.size;
    auto array_ptr = ros_message->humanmotion_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_sim_sem_interfaces__msg__HumanMotion(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HumanParameterIntention__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sim_sem_interfaces__msg__HumanParameterIntention(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sim_sem_interfaces
size_t max_serialized_size_sim_sem_interfaces__msg__HumanParameterIntention(
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

  // member: motion_prediction
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
  // member: engagement_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cognitive_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mood_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: humanmotion_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_sim_sem_interfaces__msg__HumanMotion(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _HumanParameterIntention__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sim_sem_interfaces__msg__HumanParameterIntention(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HumanParameterIntention = {
  "sim_sem_interfaces::msg",
  "HumanParameterIntention",
  _HumanParameterIntention__cdr_serialize,
  _HumanParameterIntention__cdr_deserialize,
  _HumanParameterIntention__get_serialized_size,
  _HumanParameterIntention__max_serialized_size
};

static rosidl_message_type_support_t _HumanParameterIntention__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HumanParameterIntention,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sim_sem_interfaces, msg, HumanParameterIntention)() {
  return &_HumanParameterIntention__type_support;
}

#if defined(__cplusplus)
}
#endif
