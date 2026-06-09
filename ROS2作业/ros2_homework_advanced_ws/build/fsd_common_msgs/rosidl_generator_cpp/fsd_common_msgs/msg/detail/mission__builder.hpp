// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__MISSION__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__MISSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/mission__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_Mission_finished
{
public:
  explicit Init_Mission_finished(::fsd_common_msgs::msg::Mission & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::Mission finished(::fsd_common_msgs::msg::Mission::_finished_type arg)
  {
    msg_.finished = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::Mission msg_;
};

class Init_Mission_mission
{
public:
  explicit Init_Mission_mission(::fsd_common_msgs::msg::Mission & msg)
  : msg_(msg)
  {}
  Init_Mission_finished mission(::fsd_common_msgs::msg::Mission::_mission_type arg)
  {
    msg_.mission = std::move(arg);
    return Init_Mission_finished(msg_);
  }

private:
  ::fsd_common_msgs::msg::Mission msg_;
};

class Init_Mission_header
{
public:
  Init_Mission_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mission_mission header(::fsd_common_msgs::msg::Mission::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Mission_mission(msg_);
  }

private:
  ::fsd_common_msgs::msg::Mission msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::Mission>()
{
  return fsd_common_msgs::msg::builder::Init_Mission_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__MISSION__BUILDER_HPP_
