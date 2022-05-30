// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sim_sem_interfaces:msg/FatigueAnalysis.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__FATIGUE_ANALYSIS__STRUCT_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__FATIGUE_ANALYSIS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sim_sem_interfaces__msg__FatigueAnalysis __attribute__((deprecated))
#else
# define DEPRECATED__sim_sem_interfaces__msg__FatigueAnalysis __declspec(deprecated)
#endif

namespace sim_sem_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FatigueAnalysis_
{
  using Type = FatigueAnalysis_<ContainerAllocator>;

  explicit FatigueAnalysis_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->fatigue_values[0] = "low";
      this->fatigue_values[1] = "medium";
      this->fatigue_values[2] = "high";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->fatigue_values.begin(), this->fatigue_values.end(), "");
    }
  }

  explicit FatigueAnalysis_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fatigue_values(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->fatigue_values[0] = "low";
      this->fatigue_values[1] = "medium";
      this->fatigue_values[2] = "high";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>(this->fatigue_values.begin(), this->fatigue_values.end(), "");
    }
  }

  // field types and members
  using _fatigue_values_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 3>;
  _fatigue_values_type fatigue_values;

  // setters for named parameter idiom
  Type & set__fatigue_values(
    const std::array<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 3> & _arg)
  {
    this->fatigue_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sim_sem_interfaces::msg::FatigueAnalysis_<ContainerAllocator> *;
  using ConstRawPtr =
    const sim_sem_interfaces::msg::FatigueAnalysis_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::FatigueAnalysis_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::FatigueAnalysis_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::FatigueAnalysis_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::FatigueAnalysis_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::FatigueAnalysis_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::FatigueAnalysis_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::FatigueAnalysis_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::FatigueAnalysis_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sim_sem_interfaces__msg__FatigueAnalysis
    std::shared_ptr<sim_sem_interfaces::msg::FatigueAnalysis_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sim_sem_interfaces__msg__FatigueAnalysis
    std::shared_ptr<sim_sem_interfaces::msg::FatigueAnalysis_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FatigueAnalysis_ & other) const
  {
    if (this->fatigue_values != other.fatigue_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const FatigueAnalysis_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FatigueAnalysis_

// alias to use template instance with default allocator
using FatigueAnalysis =
  sim_sem_interfaces::msg::FatigueAnalysis_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__FATIGUE_ANALYSIS__STRUCT_HPP_
