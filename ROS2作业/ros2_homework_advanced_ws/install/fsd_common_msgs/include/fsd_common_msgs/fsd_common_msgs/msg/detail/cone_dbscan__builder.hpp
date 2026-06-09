// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/ConeDbscan.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__CONE_DBSCAN__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__CONE_DBSCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/cone_dbscan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_ConeDbscan_corepts
{
public:
  explicit Init_ConeDbscan_corepts(::fsd_common_msgs::msg::ConeDbscan & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::ConeDbscan corepts(::fsd_common_msgs::msg::ConeDbscan::_corepts_type arg)
  {
    msg_.corepts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::ConeDbscan msg_;
};

class Init_ConeDbscan_visited
{
public:
  explicit Init_ConeDbscan_visited(::fsd_common_msgs::msg::ConeDbscan & msg)
  : msg_(msg)
  {}
  Init_ConeDbscan_corepts visited(::fsd_common_msgs::msg::ConeDbscan::_visited_type arg)
  {
    msg_.visited = std::move(arg);
    return Init_ConeDbscan_corepts(msg_);
  }

private:
  ::fsd_common_msgs::msg::ConeDbscan msg_;
};

class Init_ConeDbscan_pts
{
public:
  explicit Init_ConeDbscan_pts(::fsd_common_msgs::msg::ConeDbscan & msg)
  : msg_(msg)
  {}
  Init_ConeDbscan_visited pts(::fsd_common_msgs::msg::ConeDbscan::_pts_type arg)
  {
    msg_.pts = std::move(arg);
    return Init_ConeDbscan_visited(msg_);
  }

private:
  ::fsd_common_msgs::msg::ConeDbscan msg_;
};

class Init_ConeDbscan_point_type
{
public:
  explicit Init_ConeDbscan_point_type(::fsd_common_msgs::msg::ConeDbscan & msg)
  : msg_(msg)
  {}
  Init_ConeDbscan_pts point_type(::fsd_common_msgs::msg::ConeDbscan::_point_type_type arg)
  {
    msg_.point_type = std::move(arg);
    return Init_ConeDbscan_pts(msg_);
  }

private:
  ::fsd_common_msgs::msg::ConeDbscan msg_;
};

class Init_ConeDbscan_cluster
{
public:
  explicit Init_ConeDbscan_cluster(::fsd_common_msgs::msg::ConeDbscan & msg)
  : msg_(msg)
  {}
  Init_ConeDbscan_point_type cluster(::fsd_common_msgs::msg::ConeDbscan::_cluster_type arg)
  {
    msg_.cluster = std::move(arg);
    return Init_ConeDbscan_point_type(msg_);
  }

private:
  ::fsd_common_msgs::msg::ConeDbscan msg_;
};

class Init_ConeDbscan_color_confidence
{
public:
  explicit Init_ConeDbscan_color_confidence(::fsd_common_msgs::msg::ConeDbscan & msg)
  : msg_(msg)
  {}
  Init_ConeDbscan_cluster color_confidence(::fsd_common_msgs::msg::ConeDbscan::_color_confidence_type arg)
  {
    msg_.color_confidence = std::move(arg);
    return Init_ConeDbscan_cluster(msg_);
  }

private:
  ::fsd_common_msgs::msg::ConeDbscan msg_;
};

class Init_ConeDbscan_pose_confidence
{
public:
  explicit Init_ConeDbscan_pose_confidence(::fsd_common_msgs::msg::ConeDbscan & msg)
  : msg_(msg)
  {}
  Init_ConeDbscan_color_confidence pose_confidence(::fsd_common_msgs::msg::ConeDbscan::_pose_confidence_type arg)
  {
    msg_.pose_confidence = std::move(arg);
    return Init_ConeDbscan_color_confidence(msg_);
  }

private:
  ::fsd_common_msgs::msg::ConeDbscan msg_;
};

class Init_ConeDbscan_color
{
public:
  explicit Init_ConeDbscan_color(::fsd_common_msgs::msg::ConeDbscan & msg)
  : msg_(msg)
  {}
  Init_ConeDbscan_pose_confidence color(::fsd_common_msgs::msg::ConeDbscan::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_ConeDbscan_pose_confidence(msg_);
  }

private:
  ::fsd_common_msgs::msg::ConeDbscan msg_;
};

class Init_ConeDbscan_position
{
public:
  Init_ConeDbscan_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConeDbscan_color position(::fsd_common_msgs::msg::ConeDbscan::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ConeDbscan_color(msg_);
  }

private:
  ::fsd_common_msgs::msg::ConeDbscan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::ConeDbscan>()
{
  return fsd_common_msgs::msg::builder::Init_ConeDbscan_position();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__CONE_DBSCAN__BUILDER_HPP_
