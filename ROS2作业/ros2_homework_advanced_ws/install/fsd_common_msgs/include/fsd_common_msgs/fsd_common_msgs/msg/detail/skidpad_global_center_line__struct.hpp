// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/SkidpadGlobalCenterLine.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__SKIDPAD_GLOBAL_CENTER_LINE__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__SKIDPAD_GLOBAL_CENTER_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'global_path'
#include "nav_msgs/msg/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fsd_common_msgs__msg__SkidpadGlobalCenterLine __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__SkidpadGlobalCenterLine __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SkidpadGlobalCenterLine_
{
  using Type = SkidpadGlobalCenterLine_<ContainerAllocator>;

  explicit SkidpadGlobalCenterLine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : global_path(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_reach_mid = false;
    }
  }

  explicit SkidpadGlobalCenterLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : global_path(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_reach_mid = false;
    }
  }

  // field types and members
  using _global_path_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _global_path_type global_path;
  using _is_reach_mid_type =
    bool;
  _is_reach_mid_type is_reach_mid;

  // setters for named parameter idiom
  Type & set__global_path(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->global_path = _arg;
    return *this;
  }
  Type & set__is_reach_mid(
    const bool & _arg)
  {
    this->is_reach_mid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::SkidpadGlobalCenterLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::SkidpadGlobalCenterLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::SkidpadGlobalCenterLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::SkidpadGlobalCenterLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::SkidpadGlobalCenterLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::SkidpadGlobalCenterLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::SkidpadGlobalCenterLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::SkidpadGlobalCenterLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::SkidpadGlobalCenterLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::SkidpadGlobalCenterLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__SkidpadGlobalCenterLine
    std::shared_ptr<fsd_common_msgs::msg::SkidpadGlobalCenterLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__SkidpadGlobalCenterLine
    std::shared_ptr<fsd_common_msgs::msg::SkidpadGlobalCenterLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SkidpadGlobalCenterLine_ & other) const
  {
    if (this->global_path != other.global_path) {
      return false;
    }
    if (this->is_reach_mid != other.is_reach_mid) {
      return false;
    }
    return true;
  }
  bool operator!=(const SkidpadGlobalCenterLine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SkidpadGlobalCenterLine_

// alias to use template instance with default allocator
using SkidpadGlobalCenterLine =
  fsd_common_msgs::msg::SkidpadGlobalCenterLine_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__SKIDPAD_GLOBAL_CENTER_LINE__STRUCT_HPP_
