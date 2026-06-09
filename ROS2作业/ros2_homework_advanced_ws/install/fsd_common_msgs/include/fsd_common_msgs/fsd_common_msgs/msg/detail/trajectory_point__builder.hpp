// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryPoint_trajectory_point
{
public:
  explicit Init_TrajectoryPoint_trajectory_point(::fsd_common_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::TrajectoryPoint trajectory_point(::fsd_common_msgs::msg::TrajectoryPoint::_trajectory_point_type arg)
  {
    msg_.trajectory_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_header
{
public:
  Init_TrajectoryPoint_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPoint_trajectory_point header(::fsd_common_msgs::msg::TrajectoryPoint::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrajectoryPoint_trajectory_point(msg_);
  }

private:
  ::fsd_common_msgs::msg::TrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::TrajectoryPoint>()
{
  return fsd_common_msgs::msg::builder::Init_TrajectoryPoint_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
