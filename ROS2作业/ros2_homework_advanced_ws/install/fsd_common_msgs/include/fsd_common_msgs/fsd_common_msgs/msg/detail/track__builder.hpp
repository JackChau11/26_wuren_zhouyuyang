// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__TRACK__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__TRACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/track__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_Track_tk_device_end
{
public:
  explicit Init_Track_tk_device_end(::fsd_common_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::Track tk_device_end(::fsd_common_msgs::msg::Track::_tk_device_end_type arg)
  {
    msg_.tk_device_end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::Track msg_;
};

class Init_Track_tk_device_start
{
public:
  explicit Init_Track_tk_device_start(::fsd_common_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  Init_Track_tk_device_end tk_device_start(::fsd_common_msgs::msg::Track::_tk_device_start_type arg)
  {
    msg_.tk_device_start = std::move(arg);
    return Init_Track_tk_device_end(msg_);
  }

private:
  ::fsd_common_msgs::msg::Track msg_;
};

class Init_Track_cones_orange_big
{
public:
  explicit Init_Track_cones_orange_big(::fsd_common_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  Init_Track_tk_device_start cones_orange_big(::fsd_common_msgs::msg::Track::_cones_orange_big_type arg)
  {
    msg_.cones_orange_big = std::move(arg);
    return Init_Track_tk_device_start(msg_);
  }

private:
  ::fsd_common_msgs::msg::Track msg_;
};

class Init_Track_cones_orange
{
public:
  explicit Init_Track_cones_orange(::fsd_common_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  Init_Track_cones_orange_big cones_orange(::fsd_common_msgs::msg::Track::_cones_orange_type arg)
  {
    msg_.cones_orange = std::move(arg);
    return Init_Track_cones_orange_big(msg_);
  }

private:
  ::fsd_common_msgs::msg::Track msg_;
};

class Init_Track_cones_right
{
public:
  explicit Init_Track_cones_right(::fsd_common_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  Init_Track_cones_orange cones_right(::fsd_common_msgs::msg::Track::_cones_right_type arg)
  {
    msg_.cones_right = std::move(arg);
    return Init_Track_cones_orange(msg_);
  }

private:
  ::fsd_common_msgs::msg::Track msg_;
};

class Init_Track_cones_left
{
public:
  explicit Init_Track_cones_left(::fsd_common_msgs::msg::Track & msg)
  : msg_(msg)
  {}
  Init_Track_cones_right cones_left(::fsd_common_msgs::msg::Track::_cones_left_type arg)
  {
    msg_.cones_left = std::move(arg);
    return Init_Track_cones_right(msg_);
  }

private:
  ::fsd_common_msgs::msg::Track msg_;
};

class Init_Track_header
{
public:
  Init_Track_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Track_cones_left header(::fsd_common_msgs::msg::Track::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Track_cones_left(msg_);
  }

private:
  ::fsd_common_msgs::msg::Track msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::Track>()
{
  return fsd_common_msgs::msg::builder::Init_Track_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__TRACK__BUILDER_HPP_
