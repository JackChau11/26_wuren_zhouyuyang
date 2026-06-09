// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/RemoteControlCommand.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__REMOTE_CONTROL_COMMAND__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__REMOTE_CONTROL_COMMAND__STRUCT_HPP_

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
# define DEPRECATED__fsd_common_msgs__msg__RemoteControlCommand __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__RemoteControlCommand __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RemoteControlCommand_
{
  using Type = RemoteControlCommand_<ContainerAllocator>;

  explicit RemoteControlCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0f;
      this->steering_angle = 0.0f;
      this->go = 0.0f;
      this->stop = 0.0f;
      this->test1 = 0.0f;
    }
  }

  explicit RemoteControlCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->throttle = 0.0f;
      this->steering_angle = 0.0f;
      this->go = 0.0f;
      this->stop = 0.0f;
      this->test1 = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _throttle_type =
    float;
  _throttle_type throttle;
  using _steering_angle_type =
    float;
  _steering_angle_type steering_angle;
  using _go_type =
    float;
  _go_type go;
  using _stop_type =
    float;
  _stop_type stop;
  using _test1_type =
    float;
  _test1_type test1;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__throttle(
    const float & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__steering_angle(
    const float & _arg)
  {
    this->steering_angle = _arg;
    return *this;
  }
  Type & set__go(
    const float & _arg)
  {
    this->go = _arg;
    return *this;
  }
  Type & set__stop(
    const float & _arg)
  {
    this->stop = _arg;
    return *this;
  }
  Type & set__test1(
    const float & _arg)
  {
    this->test1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::RemoteControlCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::RemoteControlCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::RemoteControlCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::RemoteControlCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::RemoteControlCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::RemoteControlCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::RemoteControlCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::RemoteControlCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::RemoteControlCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::RemoteControlCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__RemoteControlCommand
    std::shared_ptr<fsd_common_msgs::msg::RemoteControlCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__RemoteControlCommand
    std::shared_ptr<fsd_common_msgs::msg::RemoteControlCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RemoteControlCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->steering_angle != other.steering_angle) {
      return false;
    }
    if (this->go != other.go) {
      return false;
    }
    if (this->stop != other.stop) {
      return false;
    }
    if (this->test1 != other.test1) {
      return false;
    }
    return true;
  }
  bool operator!=(const RemoteControlCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RemoteControlCommand_

// alias to use template instance with default allocator
using RemoteControlCommand =
  fsd_common_msgs::msg::RemoteControlCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__REMOTE_CONTROL_COMMAND__STRUCT_HPP_
