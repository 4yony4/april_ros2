// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sim_sem_interfaces:msg/Environment.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ENVIRONMENT__STRUCT_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ENVIRONMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'objects_list'
#include "sim_sem_interfaces/msg/detail/physical_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sim_sem_interfaces__msg__Environment __attribute__((deprecated))
#else
# define DEPRECATED__sim_sem_interfaces__msg__Environment __declspec(deprecated)
#endif

namespace sim_sem_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Environment_
{
  using Type = Environment_<ContainerAllocator>;

  explicit Environment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ul;
      this->semantictag = "";
    }
  }

  explicit Environment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : semantictag(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ul;
      this->semantictag = "";
    }
  }

  // field types and members
  using _timestamp_type =
    uint32_t;
  _timestamp_type timestamp;
  using _semantictag_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _semantictag_type semantictag;
  using _objects_list_type =
    std::vector<sim_sem_interfaces::msg::PhysicalObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sim_sem_interfaces::msg::PhysicalObject_<ContainerAllocator>>>;
  _objects_list_type objects_list;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint32_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__semantictag(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->semantictag = _arg;
    return *this;
  }
  Type & set__objects_list(
    const std::vector<sim_sem_interfaces::msg::PhysicalObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sim_sem_interfaces::msg::PhysicalObject_<ContainerAllocator>>> & _arg)
  {
    this->objects_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sim_sem_interfaces::msg::Environment_<ContainerAllocator> *;
  using ConstRawPtr =
    const sim_sem_interfaces::msg::Environment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::Environment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::Environment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::Environment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::Environment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::Environment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::Environment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::Environment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::Environment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sim_sem_interfaces__msg__Environment
    std::shared_ptr<sim_sem_interfaces::msg::Environment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sim_sem_interfaces__msg__Environment
    std::shared_ptr<sim_sem_interfaces::msg::Environment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Environment_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->semantictag != other.semantictag) {
      return false;
    }
    if (this->objects_list != other.objects_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const Environment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Environment_

// alias to use template instance with default allocator
using Environment =
  sim_sem_interfaces::msg::Environment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ENVIRONMENT__STRUCT_HPP_
