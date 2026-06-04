// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/Map.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__MAP__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_Map_cone_unknown
{
public:
  explicit Init_Map_cone_unknown(::fsd_common_msgs::msg::Map & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::Map cone_unknown(::fsd_common_msgs::msg::Map::_cone_unknown_type arg)
  {
    msg_.cone_unknown = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::Map msg_;
};

class Init_Map_cone_red
{
public:
  explicit Init_Map_cone_red(::fsd_common_msgs::msg::Map & msg)
  : msg_(msg)
  {}
  Init_Map_cone_unknown cone_red(::fsd_common_msgs::msg::Map::_cone_red_type arg)
  {
    msg_.cone_red = std::move(arg);
    return Init_Map_cone_unknown(msg_);
  }

private:
  ::fsd_common_msgs::msg::Map msg_;
};

class Init_Map_cone_blue
{
public:
  explicit Init_Map_cone_blue(::fsd_common_msgs::msg::Map & msg)
  : msg_(msg)
  {}
  Init_Map_cone_red cone_blue(::fsd_common_msgs::msg::Map::_cone_blue_type arg)
  {
    msg_.cone_blue = std::move(arg);
    return Init_Map_cone_red(msg_);
  }

private:
  ::fsd_common_msgs::msg::Map msg_;
};

class Init_Map_cone_yellow
{
public:
  explicit Init_Map_cone_yellow(::fsd_common_msgs::msg::Map & msg)
  : msg_(msg)
  {}
  Init_Map_cone_blue cone_yellow(::fsd_common_msgs::msg::Map::_cone_yellow_type arg)
  {
    msg_.cone_yellow = std::move(arg);
    return Init_Map_cone_blue(msg_);
  }

private:
  ::fsd_common_msgs::msg::Map msg_;
};

class Init_Map_header
{
public:
  Init_Map_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Map_cone_yellow header(::fsd_common_msgs::msg::Map::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Map_cone_yellow(msg_);
  }

private:
  ::fsd_common_msgs::msg::Map msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::Map>()
{
  return fsd_common_msgs::msg::builder::Init_Map_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__MAP__BUILDER_HPP_
