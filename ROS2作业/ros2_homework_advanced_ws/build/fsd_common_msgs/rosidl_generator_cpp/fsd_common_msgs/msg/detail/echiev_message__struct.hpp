// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/EchievMessage.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__ECHIEV_MESSAGE__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__ECHIEV_MESSAGE__STRUCT_HPP_

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
# define DEPRECATED__fsd_common_msgs__msg__EchievMessage __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__EchievMessage __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EchievMessage_
{
  using Type = EchievMessage_<ContainerAllocator>;

  explicit EchievMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id_num = 0ull;
      this->ull_timestamp = 0ull;
      this->lat = 0.0;
      this->lon = 0.0;
      this->h = 0.0f;
      this->vn = 0.0f;
      this->ve = 0.0f;
      this->vh = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->acc_x = 0.0f;
      this->acc_y = 0.0f;
      this->acc_z = 0.0f;
      this->gyro_x = 0.0f;
      this->gyro_y = 0.0f;
      this->gyro_z = 0.0f;
      this->state = 0;
      this->gps_state = 0;
    }
  }

  explicit EchievMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id_num = 0ull;
      this->ull_timestamp = 0ull;
      this->lat = 0.0;
      this->lon = 0.0;
      this->h = 0.0f;
      this->vn = 0.0f;
      this->ve = 0.0f;
      this->vh = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->acc_x = 0.0f;
      this->acc_y = 0.0f;
      this->acc_z = 0.0f;
      this->gyro_x = 0.0f;
      this->gyro_y = 0.0f;
      this->gyro_z = 0.0f;
      this->state = 0;
      this->gps_state = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _frame_id_num_type =
    uint64_t;
  _frame_id_num_type frame_id_num;
  using _ull_timestamp_type =
    uint64_t;
  _ull_timestamp_type ull_timestamp;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _h_type =
    float;
  _h_type h;
  using _vn_type =
    float;
  _vn_type vn;
  using _ve_type =
    float;
  _ve_type ve;
  using _vh_type =
    float;
  _vh_type vh;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _acc_x_type =
    float;
  _acc_x_type acc_x;
  using _acc_y_type =
    float;
  _acc_y_type acc_y;
  using _acc_z_type =
    float;
  _acc_z_type acc_z;
  using _gyro_x_type =
    float;
  _gyro_x_type gyro_x;
  using _gyro_y_type =
    float;
  _gyro_y_type gyro_y;
  using _gyro_z_type =
    float;
  _gyro_z_type gyro_z;
  using _state_type =
    uint8_t;
  _state_type state;
  using _gps_state_type =
    uint8_t;
  _gps_state_type gps_state;

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
  Type & set__ull_timestamp(
    const uint64_t & _arg)
  {
    this->ull_timestamp = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__h(
    const float & _arg)
  {
    this->h = _arg;
    return *this;
  }
  Type & set__vn(
    const float & _arg)
  {
    this->vn = _arg;
    return *this;
  }
  Type & set__ve(
    const float & _arg)
  {
    this->ve = _arg;
    return *this;
  }
  Type & set__vh(
    const float & _arg)
  {
    this->vh = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__acc_x(
    const float & _arg)
  {
    this->acc_x = _arg;
    return *this;
  }
  Type & set__acc_y(
    const float & _arg)
  {
    this->acc_y = _arg;
    return *this;
  }
  Type & set__acc_z(
    const float & _arg)
  {
    this->acc_z = _arg;
    return *this;
  }
  Type & set__gyro_x(
    const float & _arg)
  {
    this->gyro_x = _arg;
    return *this;
  }
  Type & set__gyro_y(
    const float & _arg)
  {
    this->gyro_y = _arg;
    return *this;
  }
  Type & set__gyro_z(
    const float & _arg)
  {
    this->gyro_z = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__gps_state(
    const uint8_t & _arg)
  {
    this->gps_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::EchievMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::EchievMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::EchievMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::EchievMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::EchievMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::EchievMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::EchievMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::EchievMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::EchievMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::EchievMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__EchievMessage
    std::shared_ptr<fsd_common_msgs::msg::EchievMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__EchievMessage
    std::shared_ptr<fsd_common_msgs::msg::EchievMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EchievMessage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->frame_id_num != other.frame_id_num) {
      return false;
    }
    if (this->ull_timestamp != other.ull_timestamp) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->h != other.h) {
      return false;
    }
    if (this->vn != other.vn) {
      return false;
    }
    if (this->ve != other.ve) {
      return false;
    }
    if (this->vh != other.vh) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->acc_x != other.acc_x) {
      return false;
    }
    if (this->acc_y != other.acc_y) {
      return false;
    }
    if (this->acc_z != other.acc_z) {
      return false;
    }
    if (this->gyro_x != other.gyro_x) {
      return false;
    }
    if (this->gyro_y != other.gyro_y) {
      return false;
    }
    if (this->gyro_z != other.gyro_z) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->gps_state != other.gps_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const EchievMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EchievMessage_

// alias to use template instance with default allocator
using EchievMessage =
  fsd_common_msgs::msg::EchievMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__ECHIEV_MESSAGE__STRUCT_HPP_
