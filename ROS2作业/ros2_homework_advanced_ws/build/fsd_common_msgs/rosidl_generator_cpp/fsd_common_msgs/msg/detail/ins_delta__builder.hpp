// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/InsDelta.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__INS_DELTA__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__INS_DELTA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/ins_delta__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_InsDelta_total_distance_y
{
public:
  explicit Init_InsDelta_total_distance_y(::fsd_common_msgs::msg::InsDelta & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::InsDelta total_distance_y(::fsd_common_msgs::msg::InsDelta::_total_distance_y_type arg)
  {
    msg_.total_distance_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::InsDelta msg_;
};

class Init_InsDelta_total_distance_x
{
public:
  explicit Init_InsDelta_total_distance_x(::fsd_common_msgs::msg::InsDelta & msg)
  : msg_(msg)
  {}
  Init_InsDelta_total_distance_y total_distance_x(::fsd_common_msgs::msg::InsDelta::_total_distance_x_type arg)
  {
    msg_.total_distance_x = std::move(arg);
    return Init_InsDelta_total_distance_y(msg_);
  }

private:
  ::fsd_common_msgs::msg::InsDelta msg_;
};

class Init_InsDelta_total_omega
{
public:
  explicit Init_InsDelta_total_omega(::fsd_common_msgs::msg::InsDelta & msg)
  : msg_(msg)
  {}
  Init_InsDelta_total_distance_x total_omega(::fsd_common_msgs::msg::InsDelta::_total_omega_type arg)
  {
    msg_.total_omega = std::move(arg);
    return Init_InsDelta_total_distance_x(msg_);
  }

private:
  ::fsd_common_msgs::msg::InsDelta msg_;
};

class Init_InsDelta_header
{
public:
  Init_InsDelta_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InsDelta_total_omega header(::fsd_common_msgs::msg::InsDelta::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InsDelta_total_omega(msg_);
  }

private:
  ::fsd_common_msgs::msg::InsDelta msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::InsDelta>()
{
  return fsd_common_msgs::msg::builder::Init_InsDelta_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__INS_DELTA__BUILDER_HPP_
