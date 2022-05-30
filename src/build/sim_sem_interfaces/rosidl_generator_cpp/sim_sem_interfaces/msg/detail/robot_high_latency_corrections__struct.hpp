// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sim_sem_interfaces:msg/RobotHighLatencyCorrections.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__STRUCT_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sim_sem_interfaces__msg__RobotHighLatencyCorrections __attribute__((deprecated))
#else
# define DEPRECATED__sim_sem_interfaces__msg__RobotHighLatencyCorrections __declspec(deprecated)
#endif

namespace sim_sem_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotHighLatencyCorrections_
{
  using Type = RobotHighLatencyCorrections_<ContainerAllocator>;

  explicit RobotHighLatencyCorrections_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->action.resize(3);
      this->action = {{"movement"}, {"grasp"}, {"stopping"}};
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->description = "";
      this->cause = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->description = "";
      this->cause = "";
    }
  }

  explicit RobotHighLatencyCorrections_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : description(_alloc),
    cause(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->action.resize(3);
      this->action = {{"movement"}, {"grasp"}, {"stopping"}};
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->description = "";
      this->cause = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->description = "";
      this->cause = "";
    }
  }

  // field types and members
  using _action_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _action_type action;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _cause_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cause_type cause;

  // setters for named parameter idiom
  Type & set__action(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__cause(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cause = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sim_sem_interfaces::msg::RobotHighLatencyCorrections_<ContainerAllocator> *;
  using ConstRawPtr =
    const sim_sem_interfaces::msg::RobotHighLatencyCorrections_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::RobotHighLatencyCorrections_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::RobotHighLatencyCorrections_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::RobotHighLatencyCorrections_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::RobotHighLatencyCorrections_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::RobotHighLatencyCorrections_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::RobotHighLatencyCorrections_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::RobotHighLatencyCorrections_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::RobotHighLatencyCorrections_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sim_sem_interfaces__msg__RobotHighLatencyCorrections
    std::shared_ptr<sim_sem_interfaces::msg::RobotHighLatencyCorrections_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sim_sem_interfaces__msg__RobotHighLatencyCorrections
    std::shared_ptr<sim_sem_interfaces::msg::RobotHighLatencyCorrections_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotHighLatencyCorrections_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->cause != other.cause) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotHighLatencyCorrections_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotHighLatencyCorrections_

// alias to use template instance with default allocator
using RobotHighLatencyCorrections =
  sim_sem_interfaces::msg::RobotHighLatencyCorrections_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_HIGH_LATENCY_CORRECTIONS__STRUCT_HPP_
