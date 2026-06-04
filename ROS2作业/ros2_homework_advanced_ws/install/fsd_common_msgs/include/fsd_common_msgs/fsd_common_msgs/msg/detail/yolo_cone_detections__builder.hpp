// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/YoloConeDetections.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_DETECTIONS__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_DETECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/yolo_cone_detections__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_YoloConeDetections_cone_detections
{
public:
  explicit Init_YoloConeDetections_cone_detections(::fsd_common_msgs::msg::YoloConeDetections & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::YoloConeDetections cone_detections(::fsd_common_msgs::msg::YoloConeDetections::_cone_detections_type arg)
  {
    msg_.cone_detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeDetections msg_;
};

class Init_YoloConeDetections_image_header
{
public:
  explicit Init_YoloConeDetections_image_header(::fsd_common_msgs::msg::YoloConeDetections & msg)
  : msg_(msg)
  {}
  Init_YoloConeDetections_cone_detections image_header(::fsd_common_msgs::msg::YoloConeDetections::_image_header_type arg)
  {
    msg_.image_header = std::move(arg);
    return Init_YoloConeDetections_cone_detections(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeDetections msg_;
};

class Init_YoloConeDetections_header
{
public:
  Init_YoloConeDetections_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YoloConeDetections_image_header header(::fsd_common_msgs::msg::YoloConeDetections::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_YoloConeDetections_image_header(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloConeDetections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::YoloConeDetections>()
{
  return fsd_common_msgs::msg::builder::Init_YoloConeDetections_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_DETECTIONS__BUILDER_HPP_
