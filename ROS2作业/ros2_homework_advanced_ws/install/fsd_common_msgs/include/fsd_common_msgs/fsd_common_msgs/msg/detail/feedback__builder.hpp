// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__FEEDBACK__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_Feedback_motor_return_torq_rr
{
public:
  explicit Init_Feedback_motor_return_torq_rr(::fsd_common_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::Feedback motor_return_torq_rr(::fsd_common_msgs::msg::Feedback::_motor_return_torq_rr_type arg)
  {
    msg_.motor_return_torq_rr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::Feedback msg_;
};

class Init_Feedback_motor_return_torq_rl
{
public:
  explicit Init_Feedback_motor_return_torq_rl(::fsd_common_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_motor_return_torq_rr motor_return_torq_rl(::fsd_common_msgs::msg::Feedback::_motor_return_torq_rl_type arg)
  {
    msg_.motor_return_torq_rl = std::move(arg);
    return Init_Feedback_motor_return_torq_rr(msg_);
  }

private:
  ::fsd_common_msgs::msg::Feedback msg_;
};

class Init_Feedback_motor_command_torq_rr
{
public:
  explicit Init_Feedback_motor_command_torq_rr(::fsd_common_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_motor_return_torq_rl motor_command_torq_rr(::fsd_common_msgs::msg::Feedback::_motor_command_torq_rr_type arg)
  {
    msg_.motor_command_torq_rr = std::move(arg);
    return Init_Feedback_motor_return_torq_rl(msg_);
  }

private:
  ::fsd_common_msgs::msg::Feedback msg_;
};

class Init_Feedback_motor_command_torq_rl
{
public:
  explicit Init_Feedback_motor_command_torq_rl(::fsd_common_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_motor_command_torq_rr motor_command_torq_rl(::fsd_common_msgs::msg::Feedback::_motor_command_torq_rl_type arg)
  {
    msg_.motor_command_torq_rl = std::move(arg);
    return Init_Feedback_motor_command_torq_rr(msg_);
  }

private:
  ::fsd_common_msgs::msg::Feedback msg_;
};

class Init_Feedback_motor_return_speed_rr
{
public:
  explicit Init_Feedback_motor_return_speed_rr(::fsd_common_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_motor_command_torq_rl motor_return_speed_rr(::fsd_common_msgs::msg::Feedback::_motor_return_speed_rr_type arg)
  {
    msg_.motor_return_speed_rr = std::move(arg);
    return Init_Feedback_motor_command_torq_rl(msg_);
  }

private:
  ::fsd_common_msgs::msg::Feedback msg_;
};

class Init_Feedback_motor_return_speed_rl
{
public:
  explicit Init_Feedback_motor_return_speed_rl(::fsd_common_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_motor_return_speed_rr motor_return_speed_rl(::fsd_common_msgs::msg::Feedback::_motor_return_speed_rl_type arg)
  {
    msg_.motor_return_speed_rl = std::move(arg);
    return Init_Feedback_motor_return_speed_rr(msg_);
  }

private:
  ::fsd_common_msgs::msg::Feedback msg_;
};

class Init_Feedback_motor_command_speed_rr
{
public:
  explicit Init_Feedback_motor_command_speed_rr(::fsd_common_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_motor_return_speed_rl motor_command_speed_rr(::fsd_common_msgs::msg::Feedback::_motor_command_speed_rr_type arg)
  {
    msg_.motor_command_speed_rr = std::move(arg);
    return Init_Feedback_motor_return_speed_rl(msg_);
  }

private:
  ::fsd_common_msgs::msg::Feedback msg_;
};

class Init_Feedback_motor_command_speed_rl
{
public:
  explicit Init_Feedback_motor_command_speed_rl(::fsd_common_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_motor_command_speed_rr motor_command_speed_rl(::fsd_common_msgs::msg::Feedback::_motor_command_speed_rl_type arg)
  {
    msg_.motor_command_speed_rl = std::move(arg);
    return Init_Feedback_motor_command_speed_rr(msg_);
  }

private:
  ::fsd_common_msgs::msg::Feedback msg_;
};

class Init_Feedback_wheel_speed_rr
{
public:
  explicit Init_Feedback_wheel_speed_rr(::fsd_common_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_motor_command_speed_rl wheel_speed_rr(::fsd_common_msgs::msg::Feedback::_wheel_speed_rr_type arg)
  {
    msg_.wheel_speed_rr = std::move(arg);
    return Init_Feedback_motor_command_speed_rl(msg_);
  }

private:
  ::fsd_common_msgs::msg::Feedback msg_;
};

class Init_Feedback_wheel_speed_rl
{
public:
  explicit Init_Feedback_wheel_speed_rl(::fsd_common_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_wheel_speed_rr wheel_speed_rl(::fsd_common_msgs::msg::Feedback::_wheel_speed_rl_type arg)
  {
    msg_.wheel_speed_rl = std::move(arg);
    return Init_Feedback_wheel_speed_rr(msg_);
  }

private:
  ::fsd_common_msgs::msg::Feedback msg_;
};

class Init_Feedback_wheel_speed_fr
{
public:
  explicit Init_Feedback_wheel_speed_fr(::fsd_common_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_wheel_speed_rl wheel_speed_fr(::fsd_common_msgs::msg::Feedback::_wheel_speed_fr_type arg)
  {
    msg_.wheel_speed_fr = std::move(arg);
    return Init_Feedback_wheel_speed_rl(msg_);
  }

private:
  ::fsd_common_msgs::msg::Feedback msg_;
};

class Init_Feedback_wheel_speed_fl
{
public:
  explicit Init_Feedback_wheel_speed_fl(::fsd_common_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_wheel_speed_fr wheel_speed_fl(::fsd_common_msgs::msg::Feedback::_wheel_speed_fl_type arg)
  {
    msg_.wheel_speed_fl = std::move(arg);
    return Init_Feedback_wheel_speed_fr(msg_);
  }

private:
  ::fsd_common_msgs::msg::Feedback msg_;
};

class Init_Feedback_frame_id_num
{
public:
  explicit Init_Feedback_frame_id_num(::fsd_common_msgs::msg::Feedback & msg)
  : msg_(msg)
  {}
  Init_Feedback_wheel_speed_fl frame_id_num(::fsd_common_msgs::msg::Feedback::_frame_id_num_type arg)
  {
    msg_.frame_id_num = std::move(arg);
    return Init_Feedback_wheel_speed_fl(msg_);
  }

private:
  ::fsd_common_msgs::msg::Feedback msg_;
};

class Init_Feedback_header
{
public:
  Init_Feedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Feedback_frame_id_num header(::fsd_common_msgs::msg::Feedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Feedback_frame_id_num(msg_);
  }

private:
  ::fsd_common_msgs::msg::Feedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::Feedback>()
{
  return fsd_common_msgs::msg::builder::Init_Feedback_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__FEEDBACK__BUILDER_HPP_
