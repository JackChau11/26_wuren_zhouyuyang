// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/YoloCone.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/yolo_cone__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_YoloCone_color_confidence
{
public:
  explicit Init_YoloCone_color_confidence(::fsd_common_msgs::msg::YoloCone & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::YoloCone color_confidence(::fsd_common_msgs::msg::YoloCone::_color_confidence_type arg)
  {
    msg_.color_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloCone msg_;
};

class Init_YoloCone_color
{
public:
  explicit Init_YoloCone_color(::fsd_common_msgs::msg::YoloCone & msg)
  : msg_(msg)
  {}
  Init_YoloCone_color_confidence color(::fsd_common_msgs::msg::YoloCone::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_YoloCone_color_confidence(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloCone msg_;
};

class Init_YoloCone_height
{
public:
  explicit Init_YoloCone_height(::fsd_common_msgs::msg::YoloCone & msg)
  : msg_(msg)
  {}
  Init_YoloCone_color height(::fsd_common_msgs::msg::YoloCone::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_YoloCone_color(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloCone msg_;
};

class Init_YoloCone_width
{
public:
  explicit Init_YoloCone_width(::fsd_common_msgs::msg::YoloCone & msg)
  : msg_(msg)
  {}
  Init_YoloCone_height width(::fsd_common_msgs::msg::YoloCone::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_YoloCone_height(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloCone msg_;
};

class Init_YoloCone_y
{
public:
  explicit Init_YoloCone_y(::fsd_common_msgs::msg::YoloCone & msg)
  : msg_(msg)
  {}
  Init_YoloCone_width y(::fsd_common_msgs::msg::YoloCone::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_YoloCone_width(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloCone msg_;
};

class Init_YoloCone_x
{
public:
  Init_YoloCone_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YoloCone_y x(::fsd_common_msgs::msg::YoloCone::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_YoloCone_y(msg_);
  }

private:
  ::fsd_common_msgs::msg::YoloCone msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::YoloCone>()
{
  return fsd_common_msgs::msg::builder::Init_YoloCone_x();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE__BUILDER_HPP_
