// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sim_sem_interfaces:msg/RobotHandKinematic.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/robot_hand_kinematic__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sim_sem_interfaces/msg/detail/robot_hand_kinematic__struct.hpp"

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
  const sim_sem_interfaces::msg::RobotHandKinematic & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: position
  cdr << ros_message.position;
  // Member: velocity
  cdr << ros_message.velocity;
  // Member: acceleration
  cdr << ros_message.acceleration;
  // Member: forces
  cdr << ros_message.forces;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sim_sem_interfaces::msg::RobotHandKinematic & ros_message)
{
  // Member: position
  cdr >> ros_message.position;

  // Member: velocity
  cdr >> ros_message.velocity;

  // Member: acceleration
  cdr >> ros_message.acceleration;

  // Member: forces
  cdr >> ros_message.forces;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
get_serialized_size(
  const sim_sem_interfaces::msg::RobotHandKinematic & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: position
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.position.size() + 1);
  // Member: velocity
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.velocity.size() + 1);
  // Member: acceleration
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.acceleration.size() + 1);
  // Member: forces
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.forces.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
max_serialized_size_RobotHandKinematic(
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

  // Member: velocity
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

  // Member: acceleration
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

  // Member: forces
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

static bool _RobotHandKinematic__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sim_sem_interfaces::msg::RobotHandKinematic *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotHandKinematic__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sim_sem_interfaces::msg::RobotHandKinematic *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotHandKinematic__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sim_sem_interfaces::msg::RobotHandKinematic *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotHandKinematic__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RobotHandKinematic(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RobotHandKinematic__callbacks = {
  "sim_sem_interfaces::msg",
  "RobotHandKinematic",
  _RobotHandKinematic__cdr_serialize,
  _RobotHandKinematic__cdr_deserialize,
  _RobotHandKinematic__get_serialized_size,
  _RobotHandKinematic__max_serialized_size
};

static rosidl_message_type_support_t _RobotHandKinematic__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotHandKinematic__callbacks,
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
get_message_type_support_handle<sim_sem_interfaces::msg::RobotHandKinematic>()
{
  return &sim_sem_interfaces::msg::typesupport_fastrtps_cpp::_RobotHandKinematic__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sim_sem_interfaces, msg, RobotHandKinematic)() {
  return &sim_sem_interfaces::msg::typesupport_fastrtps_cpp::_RobotHandKinematic__handle;
}

#ifdef __cplusplus
}
#endif
