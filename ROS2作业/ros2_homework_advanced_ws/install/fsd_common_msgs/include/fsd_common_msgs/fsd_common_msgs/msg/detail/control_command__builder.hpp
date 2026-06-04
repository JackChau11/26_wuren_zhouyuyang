// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlCommand_steering_angle
{
public:
  explicit Init_ControlCommand_steering_angle(::fsd_common_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::ControlCommand steering_angle(::fsd_common_msgs::msg::ControlCommand::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_throttle
{
public:
  explicit Init_ControlCommand_throttle(::fsd_common_msgs::msg::ControlCommand & msg)
  : msg_(msg)
  {}
  Init_ControlCommand_steering_angle throttle(::fsd_common_msgs::msg::ControlCommand::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_ControlCommand_steering_angle(msg_);
  }

private:
  ::fsd_common_msgs::msg::ControlCommand msg_;
};

class Init_ControlCommand_header
{
public:
  Init_ControlCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlCommand_throttle header(::fsd_common_msgs::msg::ControlCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControlCommand_throttle(msg_);
  }

private:
  ::fsd_common_msgs::msg::ControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::ControlCommand>()
{
  return fsd_common_msgs::msg::builder::Init_ControlCommand_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__CONTROL_COMMAND__BUILDER_HPP_
