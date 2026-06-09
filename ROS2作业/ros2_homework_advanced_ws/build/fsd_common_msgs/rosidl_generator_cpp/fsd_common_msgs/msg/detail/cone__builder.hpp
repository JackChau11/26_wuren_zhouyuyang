// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/Cone.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__CONE__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__CONE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/cone__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_Cone_color_confidence
{
public:
  explicit Init_Cone_color_confidence(::fsd_common_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::Cone color_confidence(::fsd_common_msgs::msg::Cone::_color_confidence_type arg)
  {
    msg_.color_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::Cone msg_;
};

class Init_Cone_pose_confidence
{
public:
  explicit Init_Cone_pose_confidence(::fsd_common_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  Init_Cone_color_confidence pose_confidence(::fsd_common_msgs::msg::Cone::_pose_confidence_type arg)
  {
    msg_.pose_confidence = std::move(arg);
    return Init_Cone_color_confidence(msg_);
  }

private:
  ::fsd_common_msgs::msg::Cone msg_;
};

class Init_Cone_color
{
public:
  explicit Init_Cone_color(::fsd_common_msgs::msg::Cone & msg)
  : msg_(msg)
  {}
  Init_Cone_pose_confidence color(::fsd_common_msgs::msg::Cone::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_Cone_pose_confidence(msg_);
  }

private:
  ::fsd_common_msgs::msg::Cone msg_;
};

class Init_Cone_position
{
public:
  Init_Cone_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cone_color position(::fsd_common_msgs::msg::Cone::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Cone_color(msg_);
  }

private:
  ::fsd_common_msgs::msg::Cone msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::Cone>()
{
  return fsd_common_msgs::msg::builder::Init_Cone_position();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__CONE__BUILDER_HPP_
