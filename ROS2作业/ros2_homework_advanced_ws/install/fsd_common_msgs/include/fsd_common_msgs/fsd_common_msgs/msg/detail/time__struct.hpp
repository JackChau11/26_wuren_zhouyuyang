// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__TIME__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__TIME__STRUCT_HPP_

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
# define DEPRECATED__fsd_common_msgs__msg__Time __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__Time __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Time_
{
  using Type = Time_<ContainerAllocator>;

  explicit Time_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id_num = 0ull;
      this->sum_compute_time = 0.0f;
      this->control_compute_time = 0.0f;
      this->boundary_detector_compute_time = 0.0f;
      this->line_detector_compute_time = 0.0f;
      this->skidpad_detector_compute_time = 0.0f;
      this->lidar_detection_compute_time = 0.0f;
      this->camera_detection_compute_time = 0.0f;
      this->fusion_detection_compute_time = 0.0f;
      this->time2 = 0.0f;
      this->time3 = 0.0f;
      this->time4 = 0.0f;
      this->time5 = 0.0f;
      this->time6 = 0.0f;
      this->time7 = 0.0f;
      this->time8 = 0.0f;
      this->time9 = 0.0f;
    }
  }

  explicit Time_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id_num = 0ull;
      this->sum_compute_time = 0.0f;
      this->control_compute_time = 0.0f;
      this->boundary_detector_compute_time = 0.0f;
      this->line_detector_compute_time = 0.0f;
      this->skidpad_detector_compute_time = 0.0f;
      this->lidar_detection_compute_time = 0.0f;
      this->camera_detection_compute_time = 0.0f;
      this->fusion_detection_compute_time = 0.0f;
      this->time2 = 0.0f;
      this->time3 = 0.0f;
      this->time4 = 0.0f;
      this->time5 = 0.0f;
      this->time6 = 0.0f;
      this->time7 = 0.0f;
      this->time8 = 0.0f;
      this->time9 = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _frame_id_num_type =
    uint64_t;
  _frame_id_num_type frame_id_num;
  using _sum_compute_time_type =
    float;
  _sum_compute_time_type sum_compute_time;
  using _control_compute_time_type =
    float;
  _control_compute_time_type control_compute_time;
  using _boundary_detector_compute_time_type =
    float;
  _boundary_detector_compute_time_type boundary_detector_compute_time;
  using _line_detector_compute_time_type =
    float;
  _line_detector_compute_time_type line_detector_compute_time;
  using _skidpad_detector_compute_time_type =
    float;
  _skidpad_detector_compute_time_type skidpad_detector_compute_time;
  using _lidar_detection_compute_time_type =
    float;
  _lidar_detection_compute_time_type lidar_detection_compute_time;
  using _camera_detection_compute_time_type =
    float;
  _camera_detection_compute_time_type camera_detection_compute_time;
  using _fusion_detection_compute_time_type =
    float;
  _fusion_detection_compute_time_type fusion_detection_compute_time;
  using _time2_type =
    float;
  _time2_type time2;
  using _time3_type =
    float;
  _time3_type time3;
  using _time4_type =
    float;
  _time4_type time4;
  using _time5_type =
    float;
  _time5_type time5;
  using _time6_type =
    float;
  _time6_type time6;
  using _time7_type =
    float;
  _time7_type time7;
  using _time8_type =
    float;
  _time8_type time8;
  using _time9_type =
    float;
  _time9_type time9;

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
  Type & set__sum_compute_time(
    const float & _arg)
  {
    this->sum_compute_time = _arg;
    return *this;
  }
  Type & set__control_compute_time(
    const float & _arg)
  {
    this->control_compute_time = _arg;
    return *this;
  }
  Type & set__boundary_detector_compute_time(
    const float & _arg)
  {
    this->boundary_detector_compute_time = _arg;
    return *this;
  }
  Type & set__line_detector_compute_time(
    const float & _arg)
  {
    this->line_detector_compute_time = _arg;
    return *this;
  }
  Type & set__skidpad_detector_compute_time(
    const float & _arg)
  {
    this->skidpad_detector_compute_time = _arg;
    return *this;
  }
  Type & set__lidar_detection_compute_time(
    const float & _arg)
  {
    this->lidar_detection_compute_time = _arg;
    return *this;
  }
  Type & set__camera_detection_compute_time(
    const float & _arg)
  {
    this->camera_detection_compute_time = _arg;
    return *this;
  }
  Type & set__fusion_detection_compute_time(
    const float & _arg)
  {
    this->fusion_detection_compute_time = _arg;
    return *this;
  }
  Type & set__time2(
    const float & _arg)
  {
    this->time2 = _arg;
    return *this;
  }
  Type & set__time3(
    const float & _arg)
  {
    this->time3 = _arg;
    return *this;
  }
  Type & set__time4(
    const float & _arg)
  {
    this->time4 = _arg;
    return *this;
  }
  Type & set__time5(
    const float & _arg)
  {
    this->time5 = _arg;
    return *this;
  }
  Type & set__time6(
    const float & _arg)
  {
    this->time6 = _arg;
    return *this;
  }
  Type & set__time7(
    const float & _arg)
  {
    this->time7 = _arg;
    return *this;
  }
  Type & set__time8(
    const float & _arg)
  {
    this->time8 = _arg;
    return *this;
  }
  Type & set__time9(
    const float & _arg)
  {
    this->time9 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::Time_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::Time_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::Time_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::Time_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::Time_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::Time_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::Time_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::Time_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::Time_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::Time_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__Time
    std::shared_ptr<fsd_common_msgs::msg::Time_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__Time
    std::shared_ptr<fsd_common_msgs::msg::Time_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Time_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->frame_id_num != other.frame_id_num) {
      return false;
    }
    if (this->sum_compute_time != other.sum_compute_time) {
      return false;
    }
    if (this->control_compute_time != other.control_compute_time) {
      return false;
    }
    if (this->boundary_detector_compute_time != other.boundary_detector_compute_time) {
      return false;
    }
    if (this->line_detector_compute_time != other.line_detector_compute_time) {
      return false;
    }
    if (this->skidpad_detector_compute_time != other.skidpad_detector_compute_time) {
      return false;
    }
    if (this->lidar_detection_compute_time != other.lidar_detection_compute_time) {
      return false;
    }
    if (this->camera_detection_compute_time != other.camera_detection_compute_time) {
      return false;
    }
    if (this->fusion_detection_compute_time != other.fusion_detection_compute_time) {
      return false;
    }
    if (this->time2 != other.time2) {
      return false;
    }
    if (this->time3 != other.time3) {
      return false;
    }
    if (this->time4 != other.time4) {
      return false;
    }
    if (this->time5 != other.time5) {
      return false;
    }
    if (this->time6 != other.time6) {
      return false;
    }
    if (this->time7 != other.time7) {
      return false;
    }
    if (this->time8 != other.time8) {
      return false;
    }
    if (this->time9 != other.time9) {
      return false;
    }
    return true;
  }
  bool operator!=(const Time_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Time_

// alias to use template instance with default allocator
using Time =
  fsd_common_msgs::msg::Time_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__TIME__STRUCT_HPP_
