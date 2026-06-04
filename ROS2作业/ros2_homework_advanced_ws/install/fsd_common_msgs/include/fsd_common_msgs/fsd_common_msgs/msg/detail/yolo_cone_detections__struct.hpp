// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/YoloConeDetections.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_DETECTIONS__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_DETECTIONS__STRUCT_HPP_

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
// Member 'image_header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'cone_detections'
#include "fsd_common_msgs/msg/detail/yolo_cone__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fsd_common_msgs__msg__YoloConeDetections __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__YoloConeDetections __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YoloConeDetections_
{
  using Type = YoloConeDetections_<ContainerAllocator>;

  explicit YoloConeDetections_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    image_header(_init)
  {
    (void)_init;
  }

  explicit YoloConeDetections_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    image_header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _image_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _image_header_type image_header;
  using _cone_detections_type =
    std::vector<fsd_common_msgs::msg::YoloCone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<fsd_common_msgs::msg::YoloCone_<ContainerAllocator>>>;
  _cone_detections_type cone_detections;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__image_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->image_header = _arg;
    return *this;
  }
  Type & set__cone_detections(
    const std::vector<fsd_common_msgs::msg::YoloCone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<fsd_common_msgs::msg::YoloCone_<ContainerAllocator>>> & _arg)
  {
    this->cone_detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::YoloConeDetections_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::YoloConeDetections_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::YoloConeDetections_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::YoloConeDetections_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::YoloConeDetections_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::YoloConeDetections_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::YoloConeDetections_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::YoloConeDetections_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::YoloConeDetections_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::YoloConeDetections_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__YoloConeDetections
    std::shared_ptr<fsd_common_msgs::msg::YoloConeDetections_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__YoloConeDetections
    std::shared_ptr<fsd_common_msgs::msg::YoloConeDetections_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YoloConeDetections_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->image_header != other.image_header) {
      return false;
    }
    if (this->cone_detections != other.cone_detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const YoloConeDetections_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YoloConeDetections_

// alias to use template instance with default allocator
using YoloConeDetections =
  fsd_common_msgs::msg::YoloConeDetections_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_DETECTIONS__STRUCT_HPP_
