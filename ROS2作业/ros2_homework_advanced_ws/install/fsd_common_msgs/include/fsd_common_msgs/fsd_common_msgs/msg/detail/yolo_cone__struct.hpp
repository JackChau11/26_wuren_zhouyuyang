// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/YoloCone.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'width'
// Member 'height'
// Member 'color_confidence'
#include "std_msgs/msg/detail/float32__struct.hpp"
// Member 'color'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fsd_common_msgs__msg__YoloCone __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__YoloCone __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YoloCone_
{
  using Type = YoloCone_<ContainerAllocator>;

  explicit YoloCone_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : x(_init),
    y(_init),
    width(_init),
    height(_init),
    color(_init),
    color_confidence(_init)
  {
    (void)_init;
  }

  explicit YoloCone_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : x(_alloc, _init),
    y(_alloc, _init),
    width(_alloc, _init),
    height(_alloc, _init),
    color(_alloc, _init),
    color_confidence(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _x_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _x_type x;
  using _y_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _y_type y;
  using _width_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _width_type width;
  using _height_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _height_type height;
  using _color_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _color_type color;
  using _color_confidence_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _color_confidence_type color_confidence;

  // setters for named parameter idiom
  Type & set__x(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__width(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__color(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__color_confidence(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->color_confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::YoloCone_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::YoloCone_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::YoloCone_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::YoloCone_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::YoloCone_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::YoloCone_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::YoloCone_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::YoloCone_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::YoloCone_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::YoloCone_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__YoloCone
    std::shared_ptr<fsd_common_msgs::msg::YoloCone_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__YoloCone
    std::shared_ptr<fsd_common_msgs::msg::YoloCone_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YoloCone_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->color_confidence != other.color_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const YoloCone_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YoloCone_

// alias to use template instance with default allocator
using YoloCone =
  fsd_common_msgs::msg::YoloCone_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE__STRUCT_HPP_
