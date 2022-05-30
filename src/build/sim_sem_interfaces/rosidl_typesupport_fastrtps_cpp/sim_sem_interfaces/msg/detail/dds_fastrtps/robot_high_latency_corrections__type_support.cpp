// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sim_sem_interfaces:msg/RobotHighLatencyCorrections.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/robot_high_latency_corrections__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sim_sem_interfaces/msg/detail/robot_high_latency_corrections__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace sim_sem_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
cdr_serialize(
  const sim_sem_interfaces::msg::RobotHighLatencyCorrections & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: action
  {
    cdr << ros_message.action;
  }
  // Member: description
  cdr << ros_message.description;
  // Member: cause
  cdr << ros_message.cause;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sim_sem_interfaces::msg::RobotHighLatencyCorrections & ros_message)
{
  // Member: action
  {
    cdr >> ros_message.action;
  }

  // Member: description
  cdr >> ros_message.description;

  // Member: cause
  cdr >> ros_message.cause;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
get_serialized_size(
  const sim_sem_interfaces::msg::RobotHighLatencyCorrections & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: action
  {
    size_t array_size = ros_message.action.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.action[index].size() + 1);
    }
  }
  // Member: description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.description.size() + 1);
  // Member: cause
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.cause.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
max_serialized_size_RobotHighLatencyCorrections(
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


  // Member: action
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: description
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

  // Member: cause
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

static bool _RobotHighLatencyCorrections__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sim_sem_interfaces::msg::RobotHighLatencyCorrections *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotHighLatencyCorrections__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sim_sem_interfaces::msg::RobotHighLatencyCorrections *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotHighLatencyCorrections__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sim_sem_interfaces::msg::RobotHighLatencyCorrections *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotHighLatencyCorrections__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobotHighLatencyCorrections(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobotHighLatencyCorrections__callbacks = {
  "sim_sem_interfaces::msg",
  "RobotHighLatencyCorrections",
  _RobotHighLatencyCorrections__cdr_serialize,
  _RobotHighLatencyCorrections__cdr_deserialize,
  _RobotHighLatencyCorrections__get_serialized_size,
  _RobotHighLatencyCorrections__max_serialized_size
};

static rosidl_message_type_support_t _RobotHighLatencyCorrections__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotHighLatencyCorrections__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sim_sem_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sim_sem_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<sim_sem_interfaces::msg::RobotHighLatencyCorrections>()
{
  return &sim_sem_interfaces::msg::typesupport_fastrtps_cpp::_RobotHighLatencyCorrections__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sim_sem_interfaces, msg, RobotHighLatencyCorrections)() {
  return &sim_sem_interfaces::msg::typesupport_fastrtps_cpp::_RobotHighLatencyCorrections__handle;
}

#ifdef __cplusplus
}
#endif
