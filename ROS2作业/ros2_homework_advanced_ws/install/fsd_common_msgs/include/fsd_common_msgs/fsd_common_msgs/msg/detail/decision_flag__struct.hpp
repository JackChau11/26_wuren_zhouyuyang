// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/DecisionFlag.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__DECISION_FLAG__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__DECISION_FLAG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fsd_common_msgs__msg__DecisionFlag __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__DecisionFlag __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DecisionFlag_
{
  using Type = DecisionFlag_<ContainerAllocator>;

  explicit DecisionFlag_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lap1_state = 0;
      this->lap2_state = 0;
      this->map_state = 0;
    }
  }

  explicit DecisionFlag_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lap1_state = 0;
      this->lap2_state = 0;
      this->map_state = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _lap1_state_type =
    uint8_t;
  _lap1_state_type lap1_state;
  using _lap2_state_type =
    uint8_t;
  _lap2_state_type lap2_state;
  using _map_state_type =
    uint8_t;
  _map_state_type map_state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__lap1_state(
    const uint8_t & _arg)
  {
    this->lap1_state = _arg;
    return *this;
  }
  Type & set__lap2_state(
    const uint8_t & _arg)
  {
    this->lap2_state = _arg;
    return *this;
  }
  Type & set__map_state(
    const uint8_t & _arg)
  {
    this->map_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::DecisionFlag_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::DecisionFlag_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::DecisionFlag_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::DecisionFlag_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::DecisionFlag_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::DecisionFlag_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::DecisionFlag_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::DecisionFlag_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::DecisionFlag_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::DecisionFlag_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__DecisionFlag
    std::shared_ptr<fsd_common_msgs::msg::DecisionFlag_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__DecisionFlag
    std::shared_ptr<fsd_common_msgs::msg::DecisionFlag_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DecisionFlag_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->lap1_state != other.lap1_state) {
      return false;
    }
    if (this->lap2_state != other.lap2_state) {
      return false;
    }
    if (this->map_state != other.map_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const DecisionFlag_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DecisionFlag_

// alias to use template instance with default allocator
using DecisionFlag =
  fsd_common_msgs::msg::DecisionFlag_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__DECISION_FLAG__STRUCT_HPP_
