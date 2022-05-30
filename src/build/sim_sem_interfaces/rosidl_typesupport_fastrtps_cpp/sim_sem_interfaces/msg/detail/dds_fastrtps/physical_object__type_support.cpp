// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sim_sem_interfaces:msg/PhysicalObject.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/physical_object__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sim_sem_interfaces/msg/detail/physical_object__struct.hpp"

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
  const sim_sem_interfaces::msg::PhysicalObject & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: shape
  cdr << ros_message.shape;
  // Member: size
  cdr << ros_message.size;
  // Member: position
  cdr << ros_message.position;
  // Member: orientation
  cdr << ros_message.orientation;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sim_sem_interfaces::msg::PhysicalObject & ros_message)
{
  // Member: shape
  cdr >> ros_message.shape;

  // Member: size
  cdr >> ros_message.size;

  // Member: position
  cdr >> ros_message.position;

  // Member: orientation
  cdr >> ros_message.orientation;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
get_serialized_size(
  const sim_sem_interfaces::msg::PhysicalObject & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: shape
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.shape.size() + 1);
  // Member: size
  {
    size_t item_size = sizeof(ros_message.size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.position.size() + 1);
  // Member: orientation
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.orientation.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
max_serialized_size_PhysicalObject(
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


  // Member: shape
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

  // Member: size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: position
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

  // Member: orientation
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

static bool _PhysicalObject__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sim_sem_interfaces::msg::PhysicalObject *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PhysicalObject__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sim_sem_interfaces::msg::PhysicalObject *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PhysicalObject__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sim_sem_interfaces::msg::PhysicalObject *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PhysicalObject__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PhysicalObject(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PhysicalObject__callbacks = {
  "sim_sem_interfaces::msg",
  "PhysicalObject",
  _PhysicalObject__cdr_serialize,
  _PhysicalObject__cdr_deserialize,
  _PhysicalObject__get_serialized_size,
  _PhysicalObject__max_serialized_size
};

static rosidl_message_type_support_t _PhysicalObject__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PhysicalObject__callbacks,
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
get_message_type_support_handle<sim_sem_interfaces::msg::PhysicalObject>()
{
  return &sim_sem_interfaces::msg::typesupport_fastrtps_cpp::_PhysicalObject__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sim_sem_interfaces, msg, PhysicalObject)() {
  return &sim_sem_interfaces::msg::typesupport_fastrtps_cpp::_PhysicalObject__handle;
}

#ifdef __cplusplus
}
#endif
