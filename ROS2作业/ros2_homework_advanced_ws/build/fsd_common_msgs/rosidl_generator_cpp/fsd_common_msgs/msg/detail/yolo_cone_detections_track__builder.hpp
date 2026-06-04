// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/YoloConeDetectionsTrack.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_DETECTIONS_TRACK__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_DETECTIONS_TRACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/yolo_cone_detections_track__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_YoloConeDetectionsTrack_cone_detections
{
public:
  explicit Init_YoloConeDetectionsTrack_cone_detections(::fsd_common_msgs::msg::YoloConeDetectionsTrack & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::YoloConeDetectionsTrack cone_detections(::fsd_common_msgs::msg::YoloConeDetectionsTrack::_cone_detections_type arg)
  {
    msg_.cone_detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeDetectionsTrack msg_;
};

class Init_YoloConeDetectionsTrack_header
{
public:
  Init_YoloConeDetectionsTrack_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YoloConeDetectionsTrack_cone_detections header(::fsd_common_msgs::msg::YoloConeDetectionsTrack::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_YoloConeDetectionsTrack_cone_detections(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeDetectionsTrack msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::YoloConeDetectionsTrack>()
{
  return fsd_common_msgs::msg::builder::Init_YoloConeDetectionsTrack_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_DETECTIONS_TRACK__BUILDER_HPP_
