// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sim_sem_interfaces:msg/NeuromorphicSensing.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__NEUROMORPHIC_SENSING__STRUCT_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__NEUROMORPHIC_SENSING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sim_sem_interfaces__msg__NeuromorphicSensing __attribute__((deprecated))
#else
# define DEPRECATED__sim_sem_interfaces__msg__NeuromorphicSensing __declspec(deprecated)
#endif

namespace sim_sem_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NeuromorphicSensing_
{
  using Type = NeuromorphicSensing_<ContainerAllocator>;

  explicit NeuromorphicSensing_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point1_speed = "";
      this->point2_speed = "";
    }
  }

  explicit NeuromorphicSensing_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point1_speed(_alloc),
    point2_speed(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->point1_speed = "";
      this->point2_speed = "";
    }
  }

  // field types and members
  using _point1_speed_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _point1_speed_type point1_speed;
  using _point2_speed_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _point2_speed_type point2_speed;

  // setters for named parameter idiom
  Type & set__point1_speed(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->point1_speed = _arg;
    return *this;
  }
  Type & set__point2_speed(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->point2_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sim_sem_interfaces::msg::NeuromorphicSensing_<ContainerAllocator> *;
  using ConstRawPtr =
    const sim_sem_interfaces::msg::NeuromorphicSensing_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::NeuromorphicSensing_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::NeuromorphicSensing_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::NeuromorphicSensing_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::NeuromorphicSensing_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::NeuromorphicSensing_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::NeuromorphicSensing_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::NeuromorphicSensing_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::NeuromorphicSensing_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sim_sem_interfaces__msg__NeuromorphicSensing
    std::shared_ptr<sim_sem_interfaces::msg::NeuromorphicSensing_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sim_sem_interfaces__msg__NeuromorphicSensing
    std::shared_ptr<sim_sem_interfaces::msg::NeuromorphicSensing_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NeuromorphicSensing_ & other) const
  {
    if (this->point1_speed != other.point1_speed) {
      return false;
    }
    if (this->point2_speed != other.point2_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const NeuromorphicSensing_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NeuromorphicSensing_

// alias to use template instance with default allocator
using NeuromorphicSensing =
  sim_sem_interfaces::msg::NeuromorphicSensing_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__NEUROMORPHIC_SENSING__STRUCT_HPP_
