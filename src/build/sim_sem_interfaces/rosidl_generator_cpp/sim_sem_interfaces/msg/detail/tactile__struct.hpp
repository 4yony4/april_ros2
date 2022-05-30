// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sim_sem_interfaces:msg/Tactile.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__TACTILE__STRUCT_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__TACTILE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sim_sem_interfaces__msg__Tactile __attribute__((deprecated))
#else
# define DEPRECATED__sim_sem_interfaces__msg__Tactile __declspec(deprecated)
#endif

namespace sim_sem_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Tactile_
{
  using Type = Tactile_<ContainerAllocator>;

  explicit Tactile_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->temperature = 0.0f;
    }
  }

  explicit Tactile_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->label = "";
      this->temperature = 0.0f;
    }
  }

  // field types and members
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;
  using _temperature_type =
    float;
  _temperature_type temperature;

  // setters for named parameter idiom
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sim_sem_interfaces::msg::Tactile_<ContainerAllocator> *;
  using ConstRawPtr =
    const sim_sem_interfaces::msg::Tactile_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::Tactile_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::Tactile_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::Tactile_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::Tactile_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::Tactile_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::Tactile_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::Tactile_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::Tactile_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sim_sem_interfaces__msg__Tactile
    std::shared_ptr<sim_sem_interfaces::msg::Tactile_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sim_sem_interfaces__msg__Tactile
    std::shared_ptr<sim_sem_interfaces::msg::Tactile_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tactile_ & other) const
  {
    if (this->label != other.label) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tactile_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tactile_

// alias to use template instance with default allocator
using Tactile =
  sim_sem_interfaces::msg::Tactile_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__TACTILE__STRUCT_HPP_
