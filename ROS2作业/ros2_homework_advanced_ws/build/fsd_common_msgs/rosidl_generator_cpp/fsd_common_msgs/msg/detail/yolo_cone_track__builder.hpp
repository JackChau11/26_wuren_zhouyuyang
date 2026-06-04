// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/YoloConeTrack.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_TRACK__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_TRACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/yolo_cone_track__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_YoloConeTrack_missing_frams
{
public:
  explicit Init_YoloConeTrack_missing_frams(::fsd_common_msgs::msg::YoloConeTrack & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::YoloConeTrack missing_frams(::fsd_common_msgs::msg::YoloConeTrack::_missing_frams_type arg)
  {
    msg_.missing_frams = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeTrack msg_;
};

class Init_YoloConeTrack_tracking_state
{
public:
  explicit Init_YoloConeTrack_tracking_state(::fsd_common_msgs::msg::YoloConeTrack & msg)
  : msg_(msg)
  {}
  Init_YoloConeTrack_missing_frams tracking_state(::fsd_common_msgs::msg::YoloConeTrack::_tracking_state_type arg)
  {
    msg_.tracking_state = std::move(arg);
    return Init_YoloConeTrack_missing_frams(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeTrack msg_;
};

class Init_YoloConeTrack_tracking_id
{
public:
  explicit Init_YoloConeTrack_tracking_id(::fsd_common_msgs::msg::YoloConeTrack & msg)
  : msg_(msg)
  {}
  Init_YoloConeTrack_tracking_state tracking_id(::fsd_common_msgs::msg::YoloConeTrack::_tracking_id_type arg)
  {
    msg_.tracking_id = std::move(arg);
    return Init_YoloConeTrack_tracking_state(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeTrack msg_;
};

class Init_YoloConeTrack_pose_confidence
{
public:
  explicit Init_YoloConeTrack_pose_confidence(::fsd_common_msgs::msg::YoloConeTrack & msg)
  : msg_(msg)
  {}
  Init_YoloConeTrack_tracking_id pose_confidence(::fsd_common_msgs::msg::YoloConeTrack::_pose_confidence_type arg)
  {
    msg_.pose_confidence = std::move(arg);
    return Init_YoloConeTrack_tracking_id(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeTrack msg_;
};

class Init_YoloConeTrack_position
{
public:
  explicit Init_YoloConeTrack_position(::fsd_common_msgs::msg::YoloConeTrack & msg)
  : msg_(msg)
  {}
  Init_YoloConeTrack_pose_confidence position(::fsd_common_msgs::msg::YoloConeTrack::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_YoloConeTrack_pose_confidence(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeTrack msg_;
};

class Init_YoloConeTrack_color_confidence
{
public:
  explicit Init_YoloConeTrack_color_confidence(::fsd_common_msgs::msg::YoloConeTrack & msg)
  : msg_(msg)
  {}
  Init_YoloConeTrack_position color_confidence(::fsd_common_msgs::msg::YoloConeTrack::_color_confidence_type arg)
  {
    msg_.color_confidence = std::move(arg);
    return Init_YoloConeTrack_position(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeTrack msg_;
};

class Init_YoloConeTrack_color
{
public:
  explicit Init_YoloConeTrack_color(::fsd_common_msgs::msg::YoloConeTrack & msg)
  : msg_(msg)
  {}
  Init_YoloConeTrack_color_confidence color(::fsd_common_msgs::msg::YoloConeTrack::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_YoloConeTrack_color_confidence(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeTrack msg_;
};

class Init_YoloConeTrack_height
{
public:
  explicit Init_YoloConeTrack_height(::fsd_common_msgs::msg::YoloConeTrack & msg)
  : msg_(msg)
  {}
  Init_YoloConeTrack_color height(::fsd_common_msgs::msg::YoloConeTrack::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_YoloConeTrack_color(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeTrack msg_;
};

class Init_YoloConeTrack_width
{
public:
  explicit Init_YoloConeTrack_width(::fsd_common_msgs::msg::YoloConeTrack & msg)
  : msg_(msg)
  {}
  Init_YoloConeTrack_height width(::fsd_common_msgs::msg::YoloConeTrack::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_YoloConeTrack_height(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeTrack msg_;
};

class Init_YoloConeTrack_y
{
public:
  explicit Init_YoloConeTrack_y(::fsd_common_msgs::msg::YoloConeTrack & msg)
  : msg_(msg)
  {}
  Init_YoloConeTrack_width y(::fsd_common_msgs::msg::YoloConeTrack::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_YoloConeTrack_width(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeTrack msg_;
};

class Init_YoloConeTrack_x
{
public:
  Init_YoloConeTrack_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YoloConeTrack_y x(::fsd_common_msgs::msg::YoloConeTrack::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_YoloConeTrack_y(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeTrack msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::YoloConeTrack>()
{
  return fsd_common_msgs::msg::builder::Init_YoloConeTrack_x();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_TRACK__BUILDER_HPP_
