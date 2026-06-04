// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/AsState.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__AS_STATE__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__AS_STATE__STRUCT_HPP_

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
# define DEPRECATED__fsd_common_msgs__msg__AsState __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__AsState __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AsState_
{
  using Type = AsState_<ContainerAllocator>;

  explicit AsState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission = "";
      this->which_lap = 0;
      this->end = 0;
      this->finished = 0;
      this->camera_state = 0;
      this->lidar_state = 0;
      this->ins_state = 0;
      this->sensor_state = 0;
      this->ready = 0;
      this->count_time = 0.0f;
    }
  }

  explicit AsState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    mission(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mission = "";
      this->which_lap = 0;
      this->end = 0;
      this->finished = 0;
      this->camera_state = 0;
      this->lidar_state = 0;
      this->ins_state = 0;
      this->sensor_state = 0;
      this->ready = 0;
      this->count_time = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mission_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_type mission;
  using _which_lap_type =
    uint8_t;
  _which_lap_type which_lap;
  using _end_type =
    uint8_t;
  _end_type end;
  using _finished_type =
    uint8_t;
  _finished_type finished;
  using _camera_state_type =
    uint8_t;
  _camera_state_type camera_state;
  using _lidar_state_type =
    uint8_t;
  _lidar_state_type lidar_state;
  using _ins_state_type =
    uint8_t;
  _ins_state_type ins_state;
  using _sensor_state_type =
    uint8_t;
  _sensor_state_type sensor_state;
  using _ready_type =
    uint8_t;
  _ready_type ready;
  using _count_time_type =
    float;
  _count_time_type count_time;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mission(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission = _arg;
    return *this;
  }
  Type & set__which_lap(
    const uint8_t & _arg)
  {
    this->which_lap = _arg;
    return *this;
  }
  Type & set__end(
    const uint8_t & _arg)
  {
    this->end = _arg;
    return *this;
  }
  Type & set__finished(
    const uint8_t & _arg)
  {
    this->finished = _arg;
    return *this;
  }
  Type & set__camera_state(
    const uint8_t & _arg)
  {
    this->camera_state = _arg;
    return *this;
  }
  Type & set__lidar_state(
    const uint8_t & _arg)
  {
    this->lidar_state = _arg;
    return *this;
  }
  Type & set__ins_state(
    const uint8_t & _arg)
  {
    this->ins_state = _arg;
    return *this;
  }
  Type & set__sensor_state(
    const uint8_t & _arg)
  {
    this->sensor_state = _arg;
    return *this;
  }
  Type & set__ready(
    const uint8_t & _arg)
  {
    this->ready = _arg;
    return *this;
  }
  Type & set__count_time(
    const float & _arg)
  {
    this->count_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::AsState_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::AsState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::AsState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::AsState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::AsState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::AsState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::AsState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::AsState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::AsState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::AsState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__AsState
    std::shared_ptr<fsd_common_msgs::msg::AsState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__AsState
    std::shared_ptr<fsd_common_msgs::msg::AsState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AsState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mission != other.mission) {
      return false;
    }
    if (this->which_lap != other.which_lap) {
      return false;
    }
    if (this->end != other.end) {
      return false;
    }
    if (this->finished != other.finished) {
      return false;
    }
    if (this->camera_state != other.camera_state) {
      return false;
    }
    if (this->lidar_state != other.lidar_state) {
      return false;
    }
    if (this->ins_state != other.ins_state) {
      return false;
    }
    if (this->sensor_state != other.sensor_state) {
      return false;
    }
    if (this->ready != other.ready) {
      return false;
    }
    if (this->count_time != other.count_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const AsState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AsState_

// alias to use template instance with default allocator
using AsState =
  fsd_common_msgs::msg::AsState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__AS_STATE__STRUCT_HPP_
