// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/CanFrames.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__CAN_FRAMES__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__CAN_FRAMES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/can_frames__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_CanFrames_frames
{
public:
  explicit Init_CanFrames_frames(::fsd_common_msgs::msg::CanFrames & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::CanFrames frames(::fsd_common_msgs::msg::CanFrames::_frames_type arg)
  {
    msg_.frames = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::CanFrames msg_;
};

class Init_CanFrames_header
{
public:
  Init_CanFrames_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanFrames_frames header(::fsd_common_msgs::msg::CanFrames::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CanFrames_frames(msg_);
  }

private:
  ::fsd_common_msgs::msg::CanFrames msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::CanFrames>()
{
  return fsd_common_msgs::msg::builder::Init_CanFrames_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__CAN_FRAMES__BUILDER_HPP_
