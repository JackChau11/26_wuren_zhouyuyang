// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/SkidpadGlobalCenterLine.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__SKIDPAD_GLOBAL_CENTER_LINE__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__SKIDPAD_GLOBAL_CENTER_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/skidpad_global_center_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_SkidpadGlobalCenterLine_is_reach_mid
{
public:
  explicit Init_SkidpadGlobalCenterLine_is_reach_mid(::fsd_common_msgs::msg::SkidpadGlobalCenterLine & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::SkidpadGlobalCenterLine is_reach_mid(::fsd_common_msgs::msg::SkidpadGlobalCenterLine::_is_reach_mid_type arg)
  {
    msg_.is_reach_mid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::SkidpadGlobalCenterLine msg_;
};

class Init_SkidpadGlobalCenterLine_global_path
{
public:
  Init_SkidpadGlobalCenterLine_global_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkidpadGlobalCenterLine_is_reach_mid global_path(::fsd_common_msgs::msg::SkidpadGlobalCenterLine::_global_path_type arg)
  {
    msg_.global_path = std::move(arg);
    return Init_SkidpadGlobalCenterLine_is_reach_mid(msg_);
  }

private:
  ::fsd_common_msgs::msg::SkidpadGlobalCenterLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::SkidpadGlobalCenterLine>()
{
  return fsd_common_msgs::msg::builder::Init_SkidpadGlobalCenterLine_global_path();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__SKIDPAD_GLOBAL_CENTER_LINE__BUILDER_HPP_
