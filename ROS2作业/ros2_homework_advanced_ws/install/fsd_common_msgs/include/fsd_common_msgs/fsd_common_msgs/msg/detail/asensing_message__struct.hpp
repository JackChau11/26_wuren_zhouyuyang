// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/AsensingMessage.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__ASENSING_MESSAGE__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__ASENSING_MESSAGE__STRUCT_HPP_

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
# define DEPRECATED__fsd_common_msgs__msg__AsensingMessage __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__AsensingMessage __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AsensingMessage_
{
  using Type = AsensingMessage_<ContainerAllocator>;

  explicit AsensingMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id_num = 0ull;
      this->lat = 0.0;
      this->lon = 0.0;
      this->h = 0.0;
      this->vn = 0.0;
      this->ve = 0.0;
      this->vh = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->heading_angle = 0.0;
      this->gyro_x = 0.0;
      this->gyro_y = 0.0;
      this->gyro_z = 0.0;
      this->acc_x = 0.0;
      this->acc_y = 0.0;
      this->acc_z = 0.0;
      this->std_lat = 0.0f;
      this->std_lon = 0.0f;
      this->std_local_height = 0.0f;
      this->north_velocity_std = 0.0f;
      this->east_velocity_std = 0.0f;
      this->ground_velocity_std = 0.0f;
      this->roll_std = 0.0f;
      this->pitch_std = 0.0f;
      this->std_heading = 0.0f;
      this->status = 0ul;
      this->gps_flag_pos = 0ul;
      this->gps_week_number = 0.0;
      this->ull_timestamp = 0.0;
      this->temperature = 0.0f;
      this->car_status = 0ul;
      this->gps_flag_heading = 0ul;
      this->num_sv = 0ul;
    }
  }

  explicit AsensingMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id_num = 0ull;
      this->lat = 0.0;
      this->lon = 0.0;
      this->h = 0.0;
      this->vn = 0.0;
      this->ve = 0.0;
      this->vh = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->heading_angle = 0.0;
      this->gyro_x = 0.0;
      this->gyro_y = 0.0;
      this->gyro_z = 0.0;
      this->acc_x = 0.0;
      this->acc_y = 0.0;
      this->acc_z = 0.0;
      this->std_lat = 0.0f;
      this->std_lon = 0.0f;
      this->std_local_height = 0.0f;
      this->north_velocity_std = 0.0f;
      this->east_velocity_std = 0.0f;
      this->ground_velocity_std = 0.0f;
      this->roll_std = 0.0f;
      this->pitch_std = 0.0f;
      this->std_heading = 0.0f;
      this->status = 0ul;
      this->gps_flag_pos = 0ul;
      this->gps_week_number = 0.0;
      this->ull_timestamp = 0.0;
      this->temperature = 0.0f;
      this->car_status = 0ul;
      this->gps_flag_heading = 0ul;
      this->num_sv = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _frame_id_num_type =
    uint64_t;
  _frame_id_num_type frame_id_num;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _h_type =
    double;
  _h_type h;
  using _vn_type =
    double;
  _vn_type vn;
  using _ve_type =
    double;
  _ve_type ve;
  using _vh_type =
    double;
  _vh_type vh;
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _heading_angle_type =
    double;
  _heading_angle_type heading_angle;
  using _gyro_x_type =
    double;
  _gyro_x_type gyro_x;
  using _gyro_y_type =
    double;
  _gyro_y_type gyro_y;
  using _gyro_z_type =
    double;
  _gyro_z_type gyro_z;
  using _acc_x_type =
    double;
  _acc_x_type acc_x;
  using _acc_y_type =
    double;
  _acc_y_type acc_y;
  using _acc_z_type =
    double;
  _acc_z_type acc_z;
  using _std_lat_type =
    float;
  _std_lat_type std_lat;
  using _std_lon_type =
    float;
  _std_lon_type std_lon;
  using _std_local_height_type =
    float;
  _std_local_height_type std_local_height;
  using _north_velocity_std_type =
    float;
  _north_velocity_std_type north_velocity_std;
  using _east_velocity_std_type =
    float;
  _east_velocity_std_type east_velocity_std;
  using _ground_velocity_std_type =
    float;
  _ground_velocity_std_type ground_velocity_std;
  using _roll_std_type =
    float;
  _roll_std_type roll_std;
  using _pitch_std_type =
    float;
  _pitch_std_type pitch_std;
  using _std_heading_type =
    float;
  _std_heading_type std_heading;
  using _status_type =
    uint32_t;
  _status_type status;
  using _gps_flag_pos_type =
    uint32_t;
  _gps_flag_pos_type gps_flag_pos;
  using _gps_week_number_type =
    double;
  _gps_week_number_type gps_week_number;
  using _ull_timestamp_type =
    double;
  _ull_timestamp_type ull_timestamp;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _car_status_type =
    uint32_t;
  _car_status_type car_status;
  using _gps_flag_heading_type =
    uint32_t;
  _gps_flag_heading_type gps_flag_heading;
  using _num_sv_type =
    uint32_t;
  _num_sv_type num_sv;

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
    const double & _arg)
  {
    this->h = _arg;
    return *this;
  }
  Type & set__vn(
    const double & _arg)
  {
    this->vn = _arg;
    return *this;
  }
  Type & set__ve(
    const double & _arg)
  {
    this->ve = _arg;
    return *this;
  }
  Type & set__vh(
    const double & _arg)
  {
    this->vh = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__heading_angle(
    const double & _arg)
  {
    this->heading_angle = _arg;
    return *this;
  }
  Type & set__gyro_x(
    const double & _arg)
  {
    this->gyro_x = _arg;
    return *this;
  }
  Type & set__gyro_y(
    const double & _arg)
  {
    this->gyro_y = _arg;
    return *this;
  }
  Type & set__gyro_z(
    const double & _arg)
  {
    this->gyro_z = _arg;
    return *this;
  }
  Type & set__acc_x(
    const double & _arg)
  {
    this->acc_x = _arg;
    return *this;
  }
  Type & set__acc_y(
    const double & _arg)
  {
    this->acc_y = _arg;
    return *this;
  }
  Type & set__acc_z(
    const double & _arg)
  {
    this->acc_z = _arg;
    return *this;
  }
  Type & set__std_lat(
    const float & _arg)
  {
    this->std_lat = _arg;
    return *this;
  }
  Type & set__std_lon(
    const float & _arg)
  {
    this->std_lon = _arg;
    return *this;
  }
  Type & set__std_local_height(
    const float & _arg)
  {
    this->std_local_height = _arg;
    return *this;
  }
  Type & set__north_velocity_std(
    const float & _arg)
  {
    this->north_velocity_std = _arg;
    return *this;
  }
  Type & set__east_velocity_std(
    const float & _arg)
  {
    this->east_velocity_std = _arg;
    return *this;
  }
  Type & set__ground_velocity_std(
    const float & _arg)
  {
    this->ground_velocity_std = _arg;
    return *this;
  }
  Type & set__roll_std(
    const float & _arg)
  {
    this->roll_std = _arg;
    return *this;
  }
  Type & set__pitch_std(
    const float & _arg)
  {
    this->pitch_std = _arg;
    return *this;
  }
  Type & set__std_heading(
    const float & _arg)
  {
    this->std_heading = _arg;
    return *this;
  }
  Type & set__status(
    const uint32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__gps_flag_pos(
    const uint32_t & _arg)
  {
    this->gps_flag_pos = _arg;
    return *this;
  }
  Type & set__gps_week_number(
    const double & _arg)
  {
    this->gps_week_number = _arg;
    return *this;
  }
  Type & set__ull_timestamp(
    const double & _arg)
  {
    this->ull_timestamp = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__car_status(
    const uint32_t & _arg)
  {
    this->car_status = _arg;
    return *this;
  }
  Type & set__gps_flag_heading(
    const uint32_t & _arg)
  {
    this->gps_flag_heading = _arg;
    return *this;
  }
  Type & set__num_sv(
    const uint32_t & _arg)
  {
    this->num_sv = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::AsensingMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::AsensingMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::AsensingMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::AsensingMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::AsensingMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::AsensingMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::AsensingMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::AsensingMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::AsensingMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::AsensingMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__AsensingMessage
    std::shared_ptr<fsd_common_msgs::msg::AsensingMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__AsensingMessage
    std::shared_ptr<fsd_common_msgs::msg::AsensingMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AsensingMessage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->frame_id_num != other.frame_id_num) {
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
    if (this->heading_angle != other.heading_angle) {
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
    if (this->acc_x != other.acc_x) {
      return false;
    }
    if (this->acc_y != other.acc_y) {
      return false;
    }
    if (this->acc_z != other.acc_z) {
      return false;
    }
    if (this->std_lat != other.std_lat) {
      return false;
    }
    if (this->std_lon != other.std_lon) {
      return false;
    }
    if (this->std_local_height != other.std_local_height) {
      return false;
    }
    if (this->north_velocity_std != other.north_velocity_std) {
      return false;
    }
    if (this->east_velocity_std != other.east_velocity_std) {
      return false;
    }
    if (this->ground_velocity_std != other.ground_velocity_std) {
      return false;
    }
    if (this->roll_std != other.roll_std) {
      return false;
    }
    if (this->pitch_std != other.pitch_std) {
      return false;
    }
    if (this->std_heading != other.std_heading) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->gps_flag_pos != other.gps_flag_pos) {
      return false;
    }
    if (this->gps_week_number != other.gps_week_number) {
      return false;
    }
    if (this->ull_timestamp != other.ull_timestamp) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->car_status != other.car_status) {
      return false;
    }
    if (this->gps_flag_heading != other.gps_flag_heading) {
      return false;
    }
    if (this->num_sv != other.num_sv) {
      return false;
    }
    return true;
  }
  bool operator!=(const AsensingMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AsensingMessage_

// alias to use template instance with default allocator
using AsensingMessage =
  fsd_common_msgs::msg::AsensingMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__ASENSING_MESSAGE__STRUCT_HPP_
