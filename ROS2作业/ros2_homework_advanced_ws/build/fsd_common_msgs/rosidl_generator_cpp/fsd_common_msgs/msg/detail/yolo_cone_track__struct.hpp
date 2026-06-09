// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/YoloConeTrack.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_TRACK__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_TRACK__STRUCT_HPP_

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
// Member 'pose_confidence'
#include "std_msgs/msg/detail/float32__struct.hpp"
// Member 'color'
// Member 'tracking_state'
#include "std_msgs/msg/detail/string__struct.hpp"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'tracking_id'
// Member 'missing_frams'
#include "std_msgs/msg/detail/u_int8__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fsd_common_msgs__msg__YoloConeTrack __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__YoloConeTrack __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YoloConeTrack_
{
  using Type = YoloConeTrack_<ContainerAllocator>;

  explicit YoloConeTrack_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : x(_init),
    y(_init),
    width(_init),
    height(_init),
    color(_init),
    color_confidence(_init),
    position(_init),
    pose_confidence(_init),
    tracking_id(_init),
    tracking_state(_init),
    missing_frams(_init)
  {
    (void)_init;
  }

  explicit YoloConeTrack_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : x(_alloc, _init),
    y(_alloc, _init),
    width(_alloc, _init),
    height(_alloc, _init),
    color(_alloc, _init),
    color_confidence(_alloc, _init),
    position(_alloc, _init),
    pose_confidence(_alloc, _init),
    tracking_id(_alloc, _init),
    tracking_state(_alloc, _init),
    missing_frams(_alloc, _init)
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
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _pose_confidence_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _pose_confidence_type pose_confidence;
  using _tracking_id_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _tracking_id_type tracking_id;
  using _tracking_state_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _tracking_state_type tracking_state;
  using _missing_frams_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _missing_frams_type missing_frams;

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
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__pose_confidence(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->pose_confidence = _arg;
    return *this;
  }
  Type & set__tracking_id(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->tracking_id = _arg;
    return *this;
  }
  Type & set__tracking_state(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->tracking_state = _arg;
    return *this;
  }
  Type & set__missing_frams(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->missing_frams = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::YoloConeTrack_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::YoloConeTrack_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::YoloConeTrack_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::YoloConeTrack_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::YoloConeTrack_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::YoloConeTrack_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::YoloConeTrack_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::YoloConeTrack_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::YoloConeTrack_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::YoloConeTrack_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__YoloConeTrack
    std::shared_ptr<fsd_common_msgs::msg::YoloConeTrack_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__YoloConeTrack
    std::shared_ptr<fsd_common_msgs::msg::YoloConeTrack_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YoloConeTrack_ & other) const
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
    if (this->position != other.position) {
      return false;
    }
    if (this->pose_confidence != other.pose_confidence) {
      return false;
    }
    if (this->tracking_id != other.tracking_id) {
      return false;
    }
    if (this->tracking_state != other.tracking_state) {
      return false;
    }
    if (this->missing_frams != other.missing_frams) {
      return false;
    }
    return true;
  }
  bool operator!=(const YoloConeTrack_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YoloConeTrack_

// alias to use template instance with default allocator
using YoloConeTrack =
  fsd_common_msgs::msg::YoloConeTrack_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_TRACK__STRUCT_HPP_
