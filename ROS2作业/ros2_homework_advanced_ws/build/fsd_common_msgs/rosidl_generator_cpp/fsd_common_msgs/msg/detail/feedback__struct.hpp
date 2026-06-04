// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_HPP_

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
# define DEPRECATED__fsd_common_msgs__msg__Feedback __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__Feedback __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Feedback_
{
  using Type = Feedback_<ContainerAllocator>;

  explicit Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id_num = 0ull;
      this->wheel_speed_fl = 0.0f;
      this->wheel_speed_fr = 0.0f;
      this->wheel_speed_rl = 0.0f;
      this->wheel_speed_rr = 0.0f;
      this->motor_command_speed_rl = 0.0f;
      this->motor_command_speed_rr = 0.0f;
      this->motor_return_speed_rl = 0.0f;
      this->motor_return_speed_rr = 0.0f;
      this->motor_command_torq_rl = 0.0f;
      this->motor_command_torq_rr = 0.0f;
      this->motor_return_torq_rl = 0.0f;
      this->motor_return_torq_rr = 0.0f;
    }
  }

  explicit Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id_num = 0ull;
      this->wheel_speed_fl = 0.0f;
      this->wheel_speed_fr = 0.0f;
      this->wheel_speed_rl = 0.0f;
      this->wheel_speed_rr = 0.0f;
      this->motor_command_speed_rl = 0.0f;
      this->motor_command_speed_rr = 0.0f;
      this->motor_return_speed_rl = 0.0f;
      this->motor_return_speed_rr = 0.0f;
      this->motor_command_torq_rl = 0.0f;
      this->motor_command_torq_rr = 0.0f;
      this->motor_return_torq_rl = 0.0f;
      this->motor_return_torq_rr = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _frame_id_num_type =
    uint64_t;
  _frame_id_num_type frame_id_num;
  using _wheel_speed_fl_type =
    float;
  _wheel_speed_fl_type wheel_speed_fl;
  using _wheel_speed_fr_type =
    float;
  _wheel_speed_fr_type wheel_speed_fr;
  using _wheel_speed_rl_type =
    float;
  _wheel_speed_rl_type wheel_speed_rl;
  using _wheel_speed_rr_type =
    float;
  _wheel_speed_rr_type wheel_speed_rr;
  using _motor_command_speed_rl_type =
    float;
  _motor_command_speed_rl_type motor_command_speed_rl;
  using _motor_command_speed_rr_type =
    float;
  _motor_command_speed_rr_type motor_command_speed_rr;
  using _motor_return_speed_rl_type =
    float;
  _motor_return_speed_rl_type motor_return_speed_rl;
  using _motor_return_speed_rr_type =
    float;
  _motor_return_speed_rr_type motor_return_speed_rr;
  using _motor_command_torq_rl_type =
    float;
  _motor_command_torq_rl_type motor_command_torq_rl;
  using _motor_command_torq_rr_type =
    float;
  _motor_command_torq_rr_type motor_command_torq_rr;
  using _motor_return_torq_rl_type =
    float;
  _motor_return_torq_rl_type motor_return_torq_rl;
  using _motor_return_torq_rr_type =
    float;
  _motor_return_torq_rr_type motor_return_torq_rr;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__frame_id_num(
    const uint64_t & _arg)
  {
    this->frame_id_num = _arg;
    return *this;
  }
  Type & set__wheel_speed_fl(
    const float & _arg)
  {
    this->wheel_speed_fl = _arg;
    return *this;
  }
  Type & set__wheel_speed_fr(
    const float & _arg)
  {
    this->wheel_speed_fr = _arg;
    return *this;
  }
  Type & set__wheel_speed_rl(
    const float & _arg)
  {
    this->wheel_speed_rl = _arg;
    return *this;
  }
  Type & set__wheel_speed_rr(
    const float & _arg)
  {
    this->wheel_speed_rr = _arg;
    return *this;
  }
  Type & set__motor_command_speed_rl(
    const float & _arg)
  {
    this->motor_command_speed_rl = _arg;
    return *this;
  }
  Type & set__motor_command_speed_rr(
    const float & _arg)
  {
    this->motor_command_speed_rr = _arg;
    return *this;
  }
  Type & set__motor_return_speed_rl(
    const float & _arg)
  {
    this->motor_return_speed_rl = _arg;
    return *this;
  }
  Type & set__motor_return_speed_rr(
    const float & _arg)
  {
    this->motor_return_speed_rr = _arg;
    return *this;
  }
  Type & set__motor_command_torq_rl(
    const float & _arg)
  {
    this->motor_command_torq_rl = _arg;
    return *this;
  }
  Type & set__motor_command_torq_rr(
    const float & _arg)
  {
    this->motor_command_torq_rr = _arg;
    return *this;
  }
  Type & set__motor_return_torq_rl(
    const float & _arg)
  {
    this->motor_return_torq_rl = _arg;
    return *this;
  }
  Type & set__motor_return_torq_rr(
    const float & _arg)
  {
    this->motor_return_torq_rr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__Feedback
    std::shared_ptr<fsd_common_msgs::msg::Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__Feedback
    std::shared_ptr<fsd_common_msgs::msg::Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Feedback_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->frame_id_num != other.frame_id_num) {
      return false;
    }
    if (this->wheel_speed_fl != other.wheel_speed_fl) {
      return false;
    }
    if (this->wheel_speed_fr != other.wheel_speed_fr) {
      return false;
    }
    if (this->wheel_speed_rl != other.wheel_speed_rl) {
      return false;
    }
    if (this->wheel_speed_rr != other.wheel_speed_rr) {
      return false;
    }
    if (this->motor_command_speed_rl != other.motor_command_speed_rl) {
      return false;
    }
    if (this->motor_command_speed_rr != other.motor_command_speed_rr) {
      return false;
    }
    if (this->motor_return_speed_rl != other.motor_return_speed_rl) {
      return false;
    }
    if (this->motor_return_speed_rr != other.motor_return_speed_rr) {
      return false;
    }
    if (this->motor_command_torq_rl != other.motor_command_torq_rl) {
      return false;
    }
    if (this->motor_command_torq_rr != other.motor_command_torq_rr) {
      return false;
    }
    if (this->motor_return_torq_rl != other.motor_return_torq_rl) {
      return false;
    }
    if (this->motor_return_torq_rr != other.motor_return_torq_rr) {
      return false;
    }
    return true;
  }
  bool operator!=(const Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Feedback_

// alias to use template instance with default allocator
using Feedback =
  fsd_common_msgs::msg::Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_HPP_
