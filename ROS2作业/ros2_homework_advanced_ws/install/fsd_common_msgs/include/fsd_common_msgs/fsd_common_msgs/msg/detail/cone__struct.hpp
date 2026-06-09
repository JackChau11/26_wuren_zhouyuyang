// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/Cone.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__CONE__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__CONE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fsd_common_msgs__msg__Cone __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__Cone __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Cone_
{
  using Type = Cone_<ContainerAllocator>;

  explicit Cone_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
      this->pose_confidence = 0.0;
      this->color_confidence = 0.0;
    }
  }

  explicit Cone_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    color(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = "";
      this->pose_confidence = 0.0;
      this->color_confidence = 0.0;
    }
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _color_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _color_type color;
  using _pose_confidence_type =
    double;
  _pose_confidence_type pose_confidence;
  using _color_confidence_type =
    double;
  _color_confidence_type color_confidence;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__color(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__pose_confidence(
    const double & _arg)
  {
    this->pose_confidence = _arg;
    return *this;
  }
  Type & set__color_confidence(
    const double & _arg)
  {
    this->color_confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::Cone_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::Cone_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::Cone_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::Cone_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::Cone_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::Cone_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::Cone_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::Cone_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::Cone_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::Cone_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__Cone
    std::shared_ptr<fsd_common_msgs::msg::Cone_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__Cone
    std::shared_ptr<fsd_common_msgs::msg::Cone_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Cone_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->pose_confidence != other.pose_confidence) {
      return false;
    }
    if (this->color_confidence != other.color_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const Cone_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Cone_

// alias to use template instance with default allocator
using Cone =
  fsd_common_msgs::msg::Cone_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__CONE__STRUCT_HPP_
