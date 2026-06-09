// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/ResAndAmi.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__RES_AND_AMI__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__RES_AND_AMI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/res_and_ami__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_ResAndAmi_mission
{
public:
  explicit Init_ResAndAmi_mission(::fsd_common_msgs::msg::ResAndAmi & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::ResAndAmi mission(::fsd_common_msgs::msg::ResAndAmi::_mission_type arg)
  {
    msg_.mission = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::ResAndAmi msg_;
};

class Init_ResAndAmi_res_state
{
public:
  explicit Init_ResAndAmi_res_state(::fsd_common_msgs::msg::ResAndAmi & msg)
  : msg_(msg)
  {}
  Init_ResAndAmi_mission res_state(::fsd_common_msgs::msg::ResAndAmi::_res_state_type arg)
  {
    msg_.res_state = std::move(arg);
    return Init_ResAndAmi_mission(msg_);
  }

private:
  ::fsd_common_msgs::msg::ResAndAmi msg_;
};

class Init_ResAndAmi_header
{
public:
  Init_ResAndAmi_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResAndAmi_res_state header(::fsd_common_msgs::msg::ResAndAmi::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ResAndAmi_res_state(msg_);
  }

private:
  ::fsd_common_msgs::msg::ResAndAmi msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::ResAndAmi>()
{
  return fsd_common_msgs::msg::builder::Init_ResAndAmi_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__RES_AND_AMI__BUILDER_HPP_
