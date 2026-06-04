// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/DrivingDynamics.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__DRIVING_DYNAMICS__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__DRIVING_DYNAMICS__STRUCT_HPP_

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
# define DEPRECATED__fsd_common_msgs__msg__DrivingDynamics __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__DrivingDynamics __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DrivingDynamics_
{
  using Type = DrivingDynamics_<ContainerAllocator>;

  explicit DrivingDynamics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_target = 0.0f;
      this->speed_actual = 0.0f;
      this->steering_angle_target = 0.0f;
      this->steering_angle_actual = 0.0f;
      this->brake_hydr_target = 0.0f;
      this->brake_hydr_actual = 0.0f;
      this->motor_moment_target = 0.0f;
      this->motor_moment_actual = 0.0f;
      this->acceleration_longitudinal = 0.0f;
      this->acceleration_lateral = 0.0f;
      this->yaw_rate = 0.0f;
    }
  }

  explicit DrivingDynamics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_target = 0.0f;
      this->speed_actual = 0.0f;
      this->steering_angle_target = 0.0f;
      this->steering_angle_actual = 0.0f;
      this->brake_hydr_target = 0.0f;
      this->brake_hydr_actual = 0.0f;
      this->motor_moment_target = 0.0f;
      this->motor_moment_actual = 0.0f;
      this->acceleration_longitudinal = 0.0f;
      this->acceleration_lateral = 0.0f;
      this->yaw_rate = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _speed_target_type =
    float;
  _speed_target_type speed_target;
  using _speed_actual_type =
    float;
  _speed_actual_type speed_actual;
  using _steering_angle_target_type =
    float;
  _steering_angle_target_type steering_angle_target;
  using _steering_angle_actual_type =
    float;
  _steering_angle_actual_type steering_angle_actual;
  using _brake_hydr_target_type =
    float;
  _brake_hydr_target_type brake_hydr_target;
  using _brake_hydr_actual_type =
    float;
  _brake_hydr_actual_type brake_hydr_actual;
  using _motor_moment_target_type =
    float;
  _motor_moment_target_type motor_moment_target;
  using _motor_moment_actual_type =
    float;
  _motor_moment_actual_type motor_moment_actual;
  using _acceleration_longitudinal_type =
    float;
  _acceleration_longitudinal_type acceleration_longitudinal;
  using _acceleration_lateral_type =
    float;
  _acceleration_lateral_type acceleration_lateral;
  using _yaw_rate_type =
    float;
  _yaw_rate_type yaw_rate;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__speed_target(
    const float & _arg)
  {
    this->speed_target = _arg;
    return *this;
  }
  Type & set__speed_actual(
    const float & _arg)
  {
    this->speed_actual = _arg;
    return *this;
  }
  Type & set__steering_angle_target(
    const float & _arg)
  {
    this->steering_angle_target = _arg;
    return *this;
  }
  Type & set__steering_angle_actual(
    const float & _arg)
  {
    this->steering_angle_actual = _arg;
    return *this;
  }
  Type & set__brake_hydr_target(
    const float & _arg)
  {
    this->brake_hydr_target = _arg;
    return *this;
  }
  Type & set__brake_hydr_actual(
    const float & _arg)
  {
    this->brake_hydr_actual = _arg;
    return *this;
  }
  Type & set__motor_moment_target(
    const float & _arg)
  {
    this->motor_moment_target = _arg;
    return *this;
  }
  Type & set__motor_moment_actual(
    const float & _arg)
  {
    this->motor_moment_actual = _arg;
    return *this;
  }
  Type & set__acceleration_longitudinal(
    const float & _arg)
  {
    this->acceleration_longitudinal = _arg;
    return *this;
  }
  Type & set__acceleration_lateral(
    const float & _arg)
  {
    this->acceleration_lateral = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const float & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::DrivingDynamics_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::DrivingDynamics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::DrivingDynamics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::DrivingDynamics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::DrivingDynamics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::DrivingDynamics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::DrivingDynamics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::DrivingDynamics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::DrivingDynamics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::DrivingDynamics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__DrivingDynamics
    std::shared_ptr<fsd_common_msgs::msg::DrivingDynamics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__DrivingDynamics
    std::shared_ptr<fsd_common_msgs::msg::DrivingDynamics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrivingDynamics_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->speed_target != other.speed_target) {
      return false;
    }
    if (this->speed_actual != other.speed_actual) {
      return false;
    }
    if (this->steering_angle_target != other.steering_angle_target) {
      return false;
    }
    if (this->steering_angle_actual != other.steering_angle_actual) {
      return false;
    }
    if (this->brake_hydr_target != other.brake_hydr_target) {
      return false;
    }
    if (this->brake_hydr_actual != other.brake_hydr_actual) {
      return false;
    }
    if (this->motor_moment_target != other.motor_moment_target) {
      return false;
    }
    if (this->motor_moment_actual != other.motor_moment_actual) {
      return false;
    }
    if (this->acceleration_longitudinal != other.acceleration_longitudinal) {
      return false;
    }
    if (this->acceleration_lateral != other.acceleration_lateral) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrivingDynamics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrivingDynamics_

// alias to use template instance with default allocator
using DrivingDynamics =
  fsd_common_msgs::msg::DrivingDynamics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__DRIVING_DYNAMICS__STRUCT_HPP_
