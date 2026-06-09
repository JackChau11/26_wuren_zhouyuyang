// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/EchievMessage.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__ECHIEV_MESSAGE__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__ECHIEV_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/echiev_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_EchievMessage_gps_state
{
public:
  explicit Init_EchievMessage_gps_state(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::EchievMessage gps_state(::fsd_common_msgs::msg::EchievMessage::_gps_state_type arg)
  {
    msg_.gps_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_state
{
public:
  explicit Init_EchievMessage_state(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_gps_state state(::fsd_common_msgs::msg::EchievMessage::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_EchievMessage_gps_state(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_gyro_z
{
public:
  explicit Init_EchievMessage_gyro_z(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_state gyro_z(::fsd_common_msgs::msg::EchievMessage::_gyro_z_type arg)
  {
    msg_.gyro_z = std::move(arg);
    return Init_EchievMessage_state(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_gyro_y
{
public:
  explicit Init_EchievMessage_gyro_y(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_gyro_z gyro_y(::fsd_common_msgs::msg::EchievMessage::_gyro_y_type arg)
  {
    msg_.gyro_y = std::move(arg);
    return Init_EchievMessage_gyro_z(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_gyro_x
{
public:
  explicit Init_EchievMessage_gyro_x(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_gyro_y gyro_x(::fsd_common_msgs::msg::EchievMessage::_gyro_x_type arg)
  {
    msg_.gyro_x = std::move(arg);
    return Init_EchievMessage_gyro_y(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_acc_z
{
public:
  explicit Init_EchievMessage_acc_z(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_gyro_x acc_z(::fsd_common_msgs::msg::EchievMessage::_acc_z_type arg)
  {
    msg_.acc_z = std::move(arg);
    return Init_EchievMessage_gyro_x(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_acc_y
{
public:
  explicit Init_EchievMessage_acc_y(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_acc_z acc_y(::fsd_common_msgs::msg::EchievMessage::_acc_y_type arg)
  {
    msg_.acc_y = std::move(arg);
    return Init_EchievMessage_acc_z(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_acc_x
{
public:
  explicit Init_EchievMessage_acc_x(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_acc_y acc_x(::fsd_common_msgs::msg::EchievMessage::_acc_x_type arg)
  {
    msg_.acc_x = std::move(arg);
    return Init_EchievMessage_acc_y(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_yaw
{
public:
  explicit Init_EchievMessage_yaw(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_acc_x yaw(::fsd_common_msgs::msg::EchievMessage::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_EchievMessage_acc_x(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_pitch
{
public:
  explicit Init_EchievMessage_pitch(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_yaw pitch(::fsd_common_msgs::msg::EchievMessage::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_EchievMessage_yaw(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_roll
{
public:
  explicit Init_EchievMessage_roll(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_pitch roll(::fsd_common_msgs::msg::EchievMessage::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_EchievMessage_pitch(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_vh
{
public:
  explicit Init_EchievMessage_vh(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_roll vh(::fsd_common_msgs::msg::EchievMessage::_vh_type arg)
  {
    msg_.vh = std::move(arg);
    return Init_EchievMessage_roll(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_ve
{
public:
  explicit Init_EchievMessage_ve(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_vh ve(::fsd_common_msgs::msg::EchievMessage::_ve_type arg)
  {
    msg_.ve = std::move(arg);
    return Init_EchievMessage_vh(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_vn
{
public:
  explicit Init_EchievMessage_vn(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_ve vn(::fsd_common_msgs::msg::EchievMessage::_vn_type arg)
  {
    msg_.vn = std::move(arg);
    return Init_EchievMessage_ve(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_h
{
public:
  explicit Init_EchievMessage_h(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_vn h(::fsd_common_msgs::msg::EchievMessage::_h_type arg)
  {
    msg_.h = std::move(arg);
    return Init_EchievMessage_vn(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_lon
{
public:
  explicit Init_EchievMessage_lon(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_h lon(::fsd_common_msgs::msg::EchievMessage::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_EchievMessage_h(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_lat
{
public:
  explicit Init_EchievMessage_lat(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_lon lat(::fsd_common_msgs::msg::EchievMessage::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_EchievMessage_lon(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_ull_timestamp
{
public:
  explicit Init_EchievMessage_ull_timestamp(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_lat ull_timestamp(::fsd_common_msgs::msg::EchievMessage::_ull_timestamp_type arg)
  {
    msg_.ull_timestamp = std::move(arg);
    return Init_EchievMessage_lat(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_frame_id_num
{
public:
  explicit Init_EchievMessage_frame_id_num(::fsd_common_msgs::msg::EchievMessage & msg)
  : msg_(msg)
  {}
  Init_EchievMessage_ull_timestamp frame_id_num(::fsd_common_msgs::msg::EchievMessage::_frame_id_num_type arg)
  {
    msg_.frame_id_num = std::move(arg);
    return Init_EchievMessage_ull_timestamp(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

class Init_EchievMessage_header
{
public:
  Init_EchievMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EchievMessage_frame_id_num header(::fsd_common_msgs::msg::EchievMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EchievMessage_frame_id_num(msg_);
  }

private:
  ::fsd_common_msgs::msg::EchievMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::EchievMessage>()
{
  return fsd_common_msgs::msg::builder::Init_EchievMessage_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__ECHIEV_MESSAGE__BUILDER_HPP_
