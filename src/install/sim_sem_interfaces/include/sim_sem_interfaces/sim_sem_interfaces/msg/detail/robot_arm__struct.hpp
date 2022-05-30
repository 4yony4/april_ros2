// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sim_sem_interfaces:msg/RobotArm.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_ARM__STRUCT_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_ARM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'robotarmkinematic_list'
#include "sim_sem_interfaces/msg/detail/robot_arm_kinematic__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sim_sem_interfaces__msg__RobotArm __attribute__((deprecated))
#else
# define DEPRECATED__sim_sem_interfaces__msg__RobotArm __declspec(deprecated)
#endif

namespace sim_sem_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotArm_
{
  using Type = RobotArm_<ContainerAllocator>;

  explicit RobotArm_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  explicit RobotArm_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  // field types and members
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _robotarmkinematic_list_type =
    std::vector<sim_sem_interfaces::msg::RobotArmKinematic_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sim_sem_interfaces::msg::RobotArmKinematic_<ContainerAllocator>>>;
  _robotarmkinematic_list_type robotarmkinematic_list;

  // setters for named parameter idiom
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__robotarmkinematic_list(
    const std::vector<sim_sem_interfaces::msg::RobotArmKinematic_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sim_sem_interfaces::msg::RobotArmKinematic_<ContainerAllocator>>> & _arg)
  {
    this->robotarmkinematic_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sim_sem_interfaces::msg::RobotArm_<ContainerAllocator> *;
  using ConstRawPtr =
    const sim_sem_interfaces::msg::RobotArm_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::RobotArm_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::RobotArm_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::RobotArm_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::RobotArm_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::RobotArm_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::RobotArm_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::RobotArm_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::RobotArm_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sim_sem_interfaces__msg__RobotArm
    std::shared_ptr<sim_sem_interfaces::msg::RobotArm_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sim_sem_interfaces__msg__RobotArm
    std::shared_ptr<sim_sem_interfaces::msg::RobotArm_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotArm_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->robotarmkinematic_list != other.robotarmkinematic_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotArm_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotArm_

// alias to use template instance with default allocator
using RobotArm =
  sim_sem_interfaces::msg::RobotArm_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__ROBOT_ARM__STRUCT_HPP_
