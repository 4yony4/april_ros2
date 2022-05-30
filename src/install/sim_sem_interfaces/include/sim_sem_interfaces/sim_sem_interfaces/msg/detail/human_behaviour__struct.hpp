// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sim_sem_interfaces:msg/HumanBehaviour.idl
// generated code does not contain a copyright notice

#ifndef SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_BEHAVIOUR__STRUCT_HPP_
#define SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_BEHAVIOUR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'humamgrasping_list'
#include "sim_sem_interfaces/msg/detail/human_grasping_strategies__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sim_sem_interfaces__msg__HumanBehaviour __attribute__((deprecated))
#else
# define DEPRECATED__sim_sem_interfaces__msg__HumanBehaviour __declspec(deprecated)
#endif

namespace sim_sem_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HumanBehaviour_
{
  using Type = HumanBehaviour_<ContainerAllocator>;

  explicit HumanBehaviour_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->body_posture = "";
    }
  }

  explicit HumanBehaviour_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : body_posture(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->body_posture = "";
    }
  }

  // field types and members
  using _body_posture_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _body_posture_type body_posture;
  using _humamgrasping_list_type =
    std::vector<sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator>>>;
  _humamgrasping_list_type humamgrasping_list;

  // setters for named parameter idiom
  Type & set__body_posture(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->body_posture = _arg;
    return *this;
  }
  Type & set__humamgrasping_list(
    const std::vector<sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sim_sem_interfaces::msg::HumanGraspingStrategies_<ContainerAllocator>>> & _arg)
  {
    this->humamgrasping_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sim_sem_interfaces::msg::HumanBehaviour_<ContainerAllocator> *;
  using ConstRawPtr =
    const sim_sem_interfaces::msg::HumanBehaviour_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::HumanBehaviour_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sim_sem_interfaces::msg::HumanBehaviour_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::HumanBehaviour_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::HumanBehaviour_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sim_sem_interfaces::msg::HumanBehaviour_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sim_sem_interfaces::msg::HumanBehaviour_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::HumanBehaviour_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sim_sem_interfaces::msg::HumanBehaviour_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sim_sem_interfaces__msg__HumanBehaviour
    std::shared_ptr<sim_sem_interfaces::msg::HumanBehaviour_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sim_sem_interfaces__msg__HumanBehaviour
    std::shared_ptr<sim_sem_interfaces::msg::HumanBehaviour_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HumanBehaviour_ & other) const
  {
    if (this->body_posture != other.body_posture) {
      return false;
    }
    if (this->humamgrasping_list != other.humamgrasping_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const HumanBehaviour_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HumanBehaviour_

// alias to use template instance with default allocator
using HumanBehaviour =
  sim_sem_interfaces::msg::HumanBehaviour_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sim_sem_interfaces

#endif  // SIM_SEM_INTERFACES__MSG__DETAIL__HUMAN_BEHAVIOUR__STRUCT_HPP_
