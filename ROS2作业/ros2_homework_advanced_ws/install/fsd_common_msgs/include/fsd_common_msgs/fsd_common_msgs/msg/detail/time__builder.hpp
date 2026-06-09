// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__TIME__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_Time_time9
{
public:
  explicit Init_Time_time9(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::Time time9(::fsd_common_msgs::msg::Time::_time9_type arg)
  {
    msg_.time9 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_time8
{
public:
  explicit Init_Time_time8(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_time9 time8(::fsd_common_msgs::msg::Time::_time8_type arg)
  {
    msg_.time8 = std::move(arg);
    return Init_Time_time9(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_time7
{
public:
  explicit Init_Time_time7(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_time8 time7(::fsd_common_msgs::msg::Time::_time7_type arg)
  {
    msg_.time7 = std::move(arg);
    return Init_Time_time8(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_time6
{
public:
  explicit Init_Time_time6(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_time7 time6(::fsd_common_msgs::msg::Time::_time6_type arg)
  {
    msg_.time6 = std::move(arg);
    return Init_Time_time7(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_time5
{
public:
  explicit Init_Time_time5(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_time6 time5(::fsd_common_msgs::msg::Time::_time5_type arg)
  {
    msg_.time5 = std::move(arg);
    return Init_Time_time6(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_time4
{
public:
  explicit Init_Time_time4(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_time5 time4(::fsd_common_msgs::msg::Time::_time4_type arg)
  {
    msg_.time4 = std::move(arg);
    return Init_Time_time5(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_time3
{
public:
  explicit Init_Time_time3(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_time4 time3(::fsd_common_msgs::msg::Time::_time3_type arg)
  {
    msg_.time3 = std::move(arg);
    return Init_Time_time4(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_time2
{
public:
  explicit Init_Time_time2(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_time3 time2(::fsd_common_msgs::msg::Time::_time2_type arg)
  {
    msg_.time2 = std::move(arg);
    return Init_Time_time3(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_fusion_detection_compute_time
{
public:
  explicit Init_Time_fusion_detection_compute_time(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_time2 fusion_detection_compute_time(::fsd_common_msgs::msg::Time::_fusion_detection_compute_time_type arg)
  {
    msg_.fusion_detection_compute_time = std::move(arg);
    return Init_Time_time2(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_camera_detection_compute_time
{
public:
  explicit Init_Time_camera_detection_compute_time(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_fusion_detection_compute_time camera_detection_compute_time(::fsd_common_msgs::msg::Time::_camera_detection_compute_time_type arg)
  {
    msg_.camera_detection_compute_time = std::move(arg);
    return Init_Time_fusion_detection_compute_time(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_lidar_detection_compute_time
{
public:
  explicit Init_Time_lidar_detection_compute_time(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_camera_detection_compute_time lidar_detection_compute_time(::fsd_common_msgs::msg::Time::_lidar_detection_compute_time_type arg)
  {
    msg_.lidar_detection_compute_time = std::move(arg);
    return Init_Time_camera_detection_compute_time(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_skidpad_detector_compute_time
{
public:
  explicit Init_Time_skidpad_detector_compute_time(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_lidar_detection_compute_time skidpad_detector_compute_time(::fsd_common_msgs::msg::Time::_skidpad_detector_compute_time_type arg)
  {
    msg_.skidpad_detector_compute_time = std::move(arg);
    return Init_Time_lidar_detection_compute_time(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_line_detector_compute_time
{
public:
  explicit Init_Time_line_detector_compute_time(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_skidpad_detector_compute_time line_detector_compute_time(::fsd_common_msgs::msg::Time::_line_detector_compute_time_type arg)
  {
    msg_.line_detector_compute_time = std::move(arg);
    return Init_Time_skidpad_detector_compute_time(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_boundary_detector_compute_time
{
public:
  explicit Init_Time_boundary_detector_compute_time(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_line_detector_compute_time boundary_detector_compute_time(::fsd_common_msgs::msg::Time::_boundary_detector_compute_time_type arg)
  {
    msg_.boundary_detector_compute_time = std::move(arg);
    return Init_Time_line_detector_compute_time(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_control_compute_time
{
public:
  explicit Init_Time_control_compute_time(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_boundary_detector_compute_time control_compute_time(::fsd_common_msgs::msg::Time::_control_compute_time_type arg)
  {
    msg_.control_compute_time = std::move(arg);
    return Init_Time_boundary_detector_compute_time(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_sum_compute_time
{
public:
  explicit Init_Time_sum_compute_time(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_control_compute_time sum_compute_time(::fsd_common_msgs::msg::Time::_sum_compute_time_type arg)
  {
    msg_.sum_compute_time = std::move(arg);
    return Init_Time_control_compute_time(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_frame_id_num
{
public:
  explicit Init_Time_frame_id_num(::fsd_common_msgs::msg::Time & msg)
  : msg_(msg)
  {}
  Init_Time_sum_compute_time frame_id_num(::fsd_common_msgs::msg::Time::_frame_id_num_type arg)
  {
    msg_.frame_id_num = std::move(arg);
    return Init_Time_sum_compute_time(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

class Init_Time_header
{
public:
  Init_Time_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Time_frame_id_num header(::fsd_common_msgs::msg::Time::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Time_frame_id_num(msg_);
  }

private:
  ::fsd_common_msgs::msg::Time msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::Time>()
{
  return fsd_common_msgs::msg::builder::Init_Time_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__TIME__BUILDER_HPP_
