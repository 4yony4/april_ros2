// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sim_sem_interfaces:msg/Environment.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/environment__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sim_sem_interfaces/msg/detail/environment__struct.hpp"

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
bool cdr_serialize(
  const sim_sem_interfaces::msg::PhysicalObject &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sim_sem_interfaces::msg::PhysicalObject &);
size_t get_serialized_size(
  const sim_sem_interfaces::msg::PhysicalObject &,
  size_t current_alignment);
size_t
max_serialized_size_PhysicalObject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sim_sem_interfaces


namespace sim_sem_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
cdr_serialize(
  const sim_sem_interfaces::msg::Environment & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: semantictag
  cdr << ros_message.semantictag;
  // Member: objects_list
  {
    size_t size = ros_message.objects_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      sim_sem_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.objects_list[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sim_sem_interfaces::msg::Environment & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: semantictag
  cdr >> ros_message.semantictag;

  // Member: objects_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.objects_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      sim_sem_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.objects_list[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
get_serialized_size(
  const sim_sem_interfaces::msg::Environment & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: semantictag
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.semantictag.size() + 1);
  // Member: objects_list
  {
    size_t array_size = ros_message.objects_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sim_sem_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.objects_list[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
max_serialized_size_Environment(
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


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: semantictag
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

  // Member: objects_list
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
        sim_sem_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_PhysicalObject(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Environment__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sim_sem_interfaces::msg::Environment *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Environment__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sim_sem_interfaces::msg::Environment *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Environment__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sim_sem_interfaces::msg::Environment *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Environment__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Environment(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Environment__callbacks = {
  "sim_sem_interfaces::msg",
  "Environment",
  _Environment__cdr_serialize,
  _Environment__cdr_deserialize,
  _Environment__get_serialized_size,
  _Environment__max_serialized_size
};

static rosidl_message_type_support_t _Environment__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Environment__callbacks,
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
get_message_type_support_handle<sim_sem_interfaces::msg::Environment>()
{
  return &sim_sem_interfaces::msg::typesupport_fastrtps_cpp::_Environment__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sim_sem_interfaces, msg, Environment)() {
  return &sim_sem_interfaces::msg::typesupport_fastrtps_cpp::_Environment__handle;
}

#ifdef __cplusplus
}
#endif
