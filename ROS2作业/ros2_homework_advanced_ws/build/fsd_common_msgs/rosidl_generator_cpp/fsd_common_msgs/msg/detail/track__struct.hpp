// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__TRACK__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__TRACK__STRUCT_HPP_

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
// Member 'cones_left'
// Member 'cones_right'
// Member 'cones_orange'
// Member 'cones_orange_big'
// Member 'tk_device_start'
// Member 'tk_device_end'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fsd_common_msgs__msg__Track __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__Track __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Track_
{
  using Type = Track_<ContainerAllocator>;

  explicit Track_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Track_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cones_left_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _cones_left_type cones_left;
  using _cones_right_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _cones_right_type cones_right;
  using _cones_orange_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _cones_orange_type cones_orange;
  using _cones_orange_big_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _cones_orange_big_type cones_orange_big;
  using _tk_device_start_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _tk_device_start_type tk_device_start;
  using _tk_device_end_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _tk_device_end_type tk_device_end;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cones_left(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->cones_left = _arg;
    return *this;
  }
  Type & set__cones_right(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->cones_right = _arg;
    return *this;
  }
  Type & set__cones_orange(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->cones_orange = _arg;
    return *this;
  }
  Type & set__cones_orange_big(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->cones_orange_big = _arg;
    return *this;
  }
  Type & set__tk_device_start(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->tk_device_start = _arg;
    return *this;
  }
  Type & set__tk_device_end(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->tk_device_end = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::Track_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::Track_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::Track_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::Track_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::Track_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::Track_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::Track_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::Track_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::Track_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::Track_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__Track
    std::shared_ptr<fsd_common_msgs::msg::Track_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__Track
    std::shared_ptr<fsd_common_msgs::msg::Track_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Track_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cones_left != other.cones_left) {
      return false;
    }
    if (this->cones_right != other.cones_right) {
      return false;
    }
    if (this->cones_orange != other.cones_orange) {
      return false;
    }
    if (this->cones_orange_big != other.cones_orange_big) {
      return false;
    }
    if (this->tk_device_start != other.tk_device_start) {
      return false;
    }
    if (this->tk_device_end != other.tk_device_end) {
      return false;
    }
    return true;
  }
  bool operator!=(const Track_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Track_

// alias to use template instance with default allocator
using Track =
  fsd_common_msgs::msg::Track_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__TRACK__STRUCT_HPP_
