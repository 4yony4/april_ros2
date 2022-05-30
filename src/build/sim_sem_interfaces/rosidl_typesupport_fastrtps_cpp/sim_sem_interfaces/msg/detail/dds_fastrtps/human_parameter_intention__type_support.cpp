// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sim_sem_interfaces:msg/HumanParameterIntention.idl
// generated code does not contain a copyright notice
#include "sim_sem_interfaces/msg/detail/human_parameter_intention__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sim_sem_interfaces/msg/detail/human_parameter_intention__struct.hpp"

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
  const sim_sem_interfaces::msg::HumanMotion &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sim_sem_interfaces::msg::HumanMotion &);
size_t get_serialized_size(
  const sim_sem_interfaces::msg::HumanMotion &,
  size_t current_alignment);
size_t
max_serialized_size_HumanMotion(
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
  const sim_sem_interfaces::msg::HumanParameterIntention & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motion_prediction
  cdr << ros_message.motion_prediction;
  // Member: engagement_level
  cdr << ros_message.engagement_level;
  // Member: cognitive_level
  cdr << ros_message.cognitive_level;
  // Member: mood_level
  cdr << ros_message.mood_level;
  // Member: humanmotion_list
  {
    size_t size = ros_message.humanmotion_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      sim_sem_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.humanmotion_list[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sim_sem_interfaces::msg::HumanParameterIntention & ros_message)
{
  // Member: motion_prediction
  cdr >> ros_message.motion_prediction;

  // Member: engagement_level
  cdr >> ros_message.engagement_level;

  // Member: cognitive_level
  cdr >> ros_message.cognitive_level;

  // Member: mood_level
  cdr >> ros_message.mood_level;

  // Member: humanmotion_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.humanmotion_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      sim_sem_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.humanmotion_list[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
get_serialized_size(
  const sim_sem_interfaces::msg::HumanParameterIntention & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motion_prediction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.motion_prediction.size() + 1);
  // Member: engagement_level
  {
    size_t item_size = sizeof(ros_message.engagement_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cognitive_level
  {
    size_t item_size = sizeof(ros_message.cognitive_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mood_level
  {
    size_t item_size = sizeof(ros_message.mood_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: humanmotion_list
  {
    size_t array_size = ros_message.humanmotion_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sim_sem_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.humanmotion_list[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sim_sem_interfaces
max_serialized_size_HumanParameterIntention(
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


  // Member: motion_prediction
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

  // Member: engagement_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cognitive_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: mood_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: humanmotion_list
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
        sim_sem_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_HumanMotion(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _HumanParameterIntention__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sim_sem_interfaces::msg::HumanParameterIntention *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HumanParameterIntention__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sim_sem_interfaces::msg::HumanParameterIntention *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HumanParameterIntention__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sim_sem_interfaces::msg::HumanParameterIntention *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HumanParameterIntention__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HumanParameterIntention(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HumanParameterIntention__callbacks = {
  "sim_sem_interfaces::msg",
  "HumanParameterIntention",
  _HumanParameterIntention__cdr_serialize,
  _HumanParameterIntention__cdr_deserialize,
  _HumanParameterIntention__get_serialized_size,
  _HumanParameterIntention__max_serialized_size
};

static rosidl_message_type_support_t _HumanParameterIntention__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HumanParameterIntention__callbacks,
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
get_message_type_support_handle<sim_sem_interfaces::msg::HumanParameterIntention>()
{
  return &sim_sem_interfaces::msg::typesupport_fastrtps_cpp::_HumanParameterIntention__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sim_sem_interfaces, msg, HumanParameterIntention)() {
  return &sim_sem_interfaces::msg::typesupport_fastrtps_cpp::_HumanParameterIntention__handle;
}

#ifdef __cplusplus
}
#endif
