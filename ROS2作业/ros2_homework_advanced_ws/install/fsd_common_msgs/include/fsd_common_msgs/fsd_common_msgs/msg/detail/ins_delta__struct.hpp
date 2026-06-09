// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/InsDelta.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__INS_DELTA__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__INS_DELTA__STRUCT_HPP_

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
# define DEPRECATED__fsd_common_msgs__msg__InsDelta __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__InsDelta __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InsDelta_
{
  using Type = InsDelta_<ContainerAllocator>;

  explicit InsDelta_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_omega = 0.0f;
      this->total_distance_x = 0.0f;
      this->total_distance_y = 0.0f;
    }
  }

  explicit InsDelta_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_omega = 0.0f;
      this->total_distance_x = 0.0f;
      this->total_distance_y = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _total_omega_type =
    float;
  _total_omega_type total_omega;
  using _total_distance_x_type =
    float;
  _total_distance_x_type total_distance_x;
  using _total_distance_y_type =
    float;
  _total_distance_y_type total_distance_y;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__total_omega(
    const float & _arg)
  {
    this->total_omega = _arg;
    return *this;
  }
  Type & set__total_distance_x(
    const float & _arg)
  {
    this->total_distance_x = _arg;
    return *this;
  }
  Type & set__total_distance_y(
    const float & _arg)
  {
    this->total_distance_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::InsDelta_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::InsDelta_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::InsDelta_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::InsDelta_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::InsDelta_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::InsDelta_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::InsDelta_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::InsDelta_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::InsDelta_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::InsDelta_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__InsDelta
    std::shared_ptr<fsd_common_msgs::msg::InsDelta_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__InsDelta
    std::shared_ptr<fsd_common_msgs::msg::InsDelta_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InsDelta_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->total_omega != other.total_omega) {
      return false;
    }
    if (this->total_distance_x != other.total_distance_x) {
      return false;
    }
    if (this->total_distance_y != other.total_distance_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const InsDelta_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InsDelta_

// alias to use template instance with default allocator
using InsDelta =
  fsd_common_msgs::msg::InsDelta_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__INS_DELTA__STRUCT_HPP_
