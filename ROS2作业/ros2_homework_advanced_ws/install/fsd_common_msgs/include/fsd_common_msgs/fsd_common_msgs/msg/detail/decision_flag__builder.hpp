// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/DecisionFlag.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__DECISION_FLAG__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__DECISION_FLAG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/decision_flag__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_DecisionFlag_map_state
{
public:
  explicit Init_DecisionFlag_map_state(::fsd_common_msgs::msg::DecisionFlag & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::DecisionFlag map_state(::fsd_common_msgs::msg::DecisionFlag::_map_state_type arg)
  {
    msg_.map_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::DecisionFlag msg_;
};

class Init_DecisionFlag_lap2_state
{
public:
  explicit Init_DecisionFlag_lap2_state(::fsd_common_msgs::msg::DecisionFlag & msg)
  : msg_(msg)
  {}
  Init_DecisionFlag_map_state lap2_state(::fsd_common_msgs::msg::DecisionFlag::_lap2_state_type arg)
  {
    msg_.lap2_state = std::move(arg);
    return Init_DecisionFlag_map_state(msg_);
  }

private:
  ::fsd_common_msgs::msg::DecisionFlag msg_;
};

class Init_DecisionFlag_lap1_state
{
public:
  explicit Init_DecisionFlag_lap1_state(::fsd_common_msgs::msg::DecisionFlag & msg)
  : msg_(msg)
  {}
  Init_DecisionFlag_lap2_state lap1_state(::fsd_common_msgs::msg::DecisionFlag::_lap1_state_type arg)
  {
    msg_.lap1_state = std::move(arg);
    return Init_DecisionFlag_lap2_state(msg_);
  }

private:
  ::fsd_common_msgs::msg::DecisionFlag msg_;
};

class Init_DecisionFlag_header
{
public:
  Init_DecisionFlag_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DecisionFlag_lap1_state header(::fsd_common_msgs::msg::DecisionFlag::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DecisionFlag_lap1_state(msg_);
  }

private:
  ::fsd_common_msgs::msg::DecisionFlag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::DecisionFlag>()
{
  return fsd_common_msgs::msg::builder::Init_DecisionFlag_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__DECISION_FLAG__BUILDER_HPP_
