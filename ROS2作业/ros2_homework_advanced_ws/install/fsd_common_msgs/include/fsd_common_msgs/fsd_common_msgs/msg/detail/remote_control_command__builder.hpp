// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/RemoteControlCommand.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__REMOTE_CONTROL_COMMAND__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__REMOTE_CONTROL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/remote_control_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_RemoteControlCommand_test1
{
public:
  explicit Init_RemoteControlCommand_test1(::fsd_common_msgs::msg::RemoteControlCommand & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::RemoteControlCommand test1(::fsd_common_msgs::msg::RemoteControlCommand::_test1_type arg)
  {
    msg_.test1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::RemoteControlCommand msg_;
};

class Init_RemoteControlCommand_stop
{
public:
  explicit Init_RemoteControlCommand_stop(::fsd_common_msgs::msg::RemoteControlCommand & msg)
  : msg_(msg)
  {}
  Init_RemoteControlCommand_test1 stop(::fsd_common_msgs::msg::RemoteControlCommand::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return Init_RemoteControlCommand_test1(msg_);
  }

private:
  ::fsd_common_msgs::msg::RemoteControlCommand msg_;
};

class Init_RemoteControlCommand_go
{
public:
  explicit Init_RemoteControlCommand_go(::fsd_common_msgs::msg::RemoteControlCommand & msg)
  : msg_(msg)
  {}
  Init_RemoteControlCommand_stop go(::fsd_common_msgs::msg::RemoteControlCommand::_go_type arg)
  {
    msg_.go = std::move(arg);
    return Init_RemoteControlCommand_stop(msg_);
  }

private:
  ::fsd_common_msgs::msg::RemoteControlCommand msg_;
};

class Init_RemoteControlCommand_steering_angle
{
public:
  explicit Init_RemoteControlCommand_steering_angle(::fsd_common_msgs::msg::RemoteControlCommand & msg)
  : msg_(msg)
  {}
  Init_RemoteControlCommand_go steering_angle(::fsd_common_msgs::msg::RemoteControlCommand::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return Init_RemoteControlCommand_go(msg_);
  }

private:
  ::fsd_common_msgs::msg::RemoteControlCommand msg_;
};

class Init_RemoteControlCommand_throttle
{
public:
  explicit Init_RemoteControlCommand_throttle(::fsd_common_msgs::msg::RemoteControlCommand & msg)
  : msg_(msg)
  {}
  Init_RemoteControlCommand_steering_angle throttle(::fsd_common_msgs::msg::RemoteControlCommand::_throttle_type arg)
  {
    msg_.throttle = std::move(arg);
    return Init_RemoteControlCommand_steering_angle(msg_);
  }

private:
  ::fsd_common_msgs::msg::RemoteControlCommand msg_;
};

class Init_RemoteControlCommand_header
{
public:
  Init_RemoteControlCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RemoteControlCommand_throttle header(::fsd_common_msgs::msg::RemoteControlCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RemoteControlCommand_throttle(msg_);
  }

private:
  ::fsd_common_msgs::msg::RemoteControlCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::RemoteControlCommand>()
{
  return fsd_common_msgs::msg::builder::Init_RemoteControlCommand_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__REMOTE_CONTROL_COMMAND__BUILDER_HPP_
