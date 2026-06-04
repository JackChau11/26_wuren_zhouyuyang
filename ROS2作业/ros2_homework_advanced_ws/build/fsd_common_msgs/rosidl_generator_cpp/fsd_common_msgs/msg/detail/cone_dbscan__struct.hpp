// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/ConeDbscan.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__CONE_DBSCAN__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__CONE_DBSCAN__STRUCT_HPP_

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
// Member 'color'
#include "std_msgs/msg/detail/string__struct.hpp"
// Member 'pose_confidence'
// Member 'color_confidence'
#include "std_msgs/msg/detail/float32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fsd_common_msgs__msg__ConeDbscan __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__ConeDbscan __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConeDbscan_
{
  using Type = ConeDbscan_<ContainerAllocator>;

  explicit ConeDbscan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    color(_init),
    pose_confidence(_init),
    color_confidence(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cluster = 0;
      this->point_type = 0;
      this->pts = 0;
      this->visited = 0;
    }
  }

  explicit ConeDbscan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    color(_alloc, _init),
    pose_confidence(_alloc, _init),
    color_confidence(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cluster = 0;
      this->point_type = 0;
      this->pts = 0;
      this->visited = 0;
    }
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _color_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _color_type color;
  using _pose_confidence_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _pose_confidence_type pose_confidence;
  using _color_confidence_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _color_confidence_type color_confidence;
  using _cluster_type =
    uint8_t;
  _cluster_type cluster;
  using _point_type_type =
    uint8_t;
  _point_type_type point_type;
  using _pts_type =
    uint8_t;
  _pts_type pts;
  using _visited_type =
    uint8_t;
  _visited_type visited;
  using _corepts_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _corepts_type corepts;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__color(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__pose_confidence(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->pose_confidence = _arg;
    return *this;
  }
  Type & set__color_confidence(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->color_confidence = _arg;
    return *this;
  }
  Type & set__cluster(
    const uint8_t & _arg)
  {
    this->cluster = _arg;
    return *this;
  }
  Type & set__point_type(
    const uint8_t & _arg)
  {
    this->point_type = _arg;
    return *this;
  }
  Type & set__pts(
    const uint8_t & _arg)
  {
    this->pts = _arg;
    return *this;
  }
  Type & set__visited(
    const uint8_t & _arg)
  {
    this->visited = _arg;
    return *this;
  }
  Type & set__corepts(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->corepts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::ConeDbscan_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::ConeDbscan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::ConeDbscan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::ConeDbscan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::ConeDbscan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::ConeDbscan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::ConeDbscan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::ConeDbscan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::ConeDbscan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::ConeDbscan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__ConeDbscan
    std::shared_ptr<fsd_common_msgs::msg::ConeDbscan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__ConeDbscan
    std::shared_ptr<fsd_common_msgs::msg::ConeDbscan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConeDbscan_ & other) const
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
    if (this->cluster != other.cluster) {
      return false;
    }
    if (this->point_type != other.point_type) {
      return false;
    }
    if (this->pts != other.pts) {
      return false;
    }
    if (this->visited != other.visited) {
      return false;
    }
    if (this->corepts != other.corepts) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConeDbscan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConeDbscan_

// alias to use template instance with default allocator
using ConeDbscan =
  fsd_common_msgs::msg::ConeDbscan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__CONE_DBSCAN__STRUCT_HPP_
