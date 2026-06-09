// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/AsensingMessage.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__ASENSING_MESSAGE__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__ASENSING_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/asensing_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_AsensingMessage_num_sv
{
public:
  explicit Init_AsensingMessage_num_sv(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::AsensingMessage num_sv(::fsd_common_msgs::msg::AsensingMessage::_num_sv_type arg)
  {
    msg_.num_sv = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_gps_flag_heading
{
public:
  explicit Init_AsensingMessage_gps_flag_heading(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_num_sv gps_flag_heading(::fsd_common_msgs::msg::AsensingMessage::_gps_flag_heading_type arg)
  {
    msg_.gps_flag_heading = std::move(arg);
    return Init_AsensingMessage_num_sv(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_car_status
{
public:
  explicit Init_AsensingMessage_car_status(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_gps_flag_heading car_status(::fsd_common_msgs::msg::AsensingMessage::_car_status_type arg)
  {
    msg_.car_status = std::move(arg);
    return Init_AsensingMessage_gps_flag_heading(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_temperature
{
public:
  explicit Init_AsensingMessage_temperature(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_car_status temperature(::fsd_common_msgs::msg::AsensingMessage::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_AsensingMessage_car_status(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_ull_timestamp
{
public:
  explicit Init_AsensingMessage_ull_timestamp(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_temperature ull_timestamp(::fsd_common_msgs::msg::AsensingMessage::_ull_timestamp_type arg)
  {
    msg_.ull_timestamp = std::move(arg);
    return Init_AsensingMessage_temperature(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_gps_week_number
{
public:
  explicit Init_AsensingMessage_gps_week_number(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_ull_timestamp gps_week_number(::fsd_common_msgs::msg::AsensingMessage::_gps_week_number_type arg)
  {
    msg_.gps_week_number = std::move(arg);
    return Init_AsensingMessage_ull_timestamp(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_gps_flag_pos
{
public:
  explicit Init_AsensingMessage_gps_flag_pos(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_gps_week_number gps_flag_pos(::fsd_common_msgs::msg::AsensingMessage::_gps_flag_pos_type arg)
  {
    msg_.gps_flag_pos = std::move(arg);
    return Init_AsensingMessage_gps_week_number(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_status
{
public:
  explicit Init_AsensingMessage_status(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_gps_flag_pos status(::fsd_common_msgs::msg::AsensingMessage::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AsensingMessage_gps_flag_pos(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_std_heading
{
public:
  explicit Init_AsensingMessage_std_heading(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_status std_heading(::fsd_common_msgs::msg::AsensingMessage::_std_heading_type arg)
  {
    msg_.std_heading = std::move(arg);
    return Init_AsensingMessage_status(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_pitch_std
{
public:
  explicit Init_AsensingMessage_pitch_std(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_std_heading pitch_std(::fsd_common_msgs::msg::AsensingMessage::_pitch_std_type arg)
  {
    msg_.pitch_std = std::move(arg);
    return Init_AsensingMessage_std_heading(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_roll_std
{
public:
  explicit Init_AsensingMessage_roll_std(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_pitch_std roll_std(::fsd_common_msgs::msg::AsensingMessage::_roll_std_type arg)
  {
    msg_.roll_std = std::move(arg);
    return Init_AsensingMessage_pitch_std(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_ground_velocity_std
{
public:
  explicit Init_AsensingMessage_ground_velocity_std(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_roll_std ground_velocity_std(::fsd_common_msgs::msg::AsensingMessage::_ground_velocity_std_type arg)
  {
    msg_.ground_velocity_std = std::move(arg);
    return Init_AsensingMessage_roll_std(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_east_velocity_std
{
public:
  explicit Init_AsensingMessage_east_velocity_std(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_ground_velocity_std east_velocity_std(::fsd_common_msgs::msg::AsensingMessage::_east_velocity_std_type arg)
  {
    msg_.east_velocity_std = std::move(arg);
    return Init_AsensingMessage_ground_velocity_std(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_north_velocity_std
{
public:
  explicit Init_AsensingMessage_north_velocity_std(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_east_velocity_std north_velocity_std(::fsd_common_msgs::msg::AsensingMessage::_north_velocity_std_type arg)
  {
    msg_.north_velocity_std = std::move(arg);
    return Init_AsensingMessage_east_velocity_std(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_std_local_height
{
public:
  explicit Init_AsensingMessage_std_local_height(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_north_velocity_std std_local_height(::fsd_common_msgs::msg::AsensingMessage::_std_local_height_type arg)
  {
    msg_.std_local_height = std::move(arg);
    return Init_AsensingMessage_north_velocity_std(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_std_lon
{
public:
  explicit Init_AsensingMessage_std_lon(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_std_local_height std_lon(::fsd_common_msgs::msg::AsensingMessage::_std_lon_type arg)
  {
    msg_.std_lon = std::move(arg);
    return Init_AsensingMessage_std_local_height(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_std_lat
{
public:
  explicit Init_AsensingMessage_std_lat(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_std_lon std_lat(::fsd_common_msgs::msg::AsensingMessage::_std_lat_type arg)
  {
    msg_.std_lat = std::move(arg);
    return Init_AsensingMessage_std_lon(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_acc_z
{
public:
  explicit Init_AsensingMessage_acc_z(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_std_lat acc_z(::fsd_common_msgs::msg::AsensingMessage::_acc_z_type arg)
  {
    msg_.acc_z = std::move(arg);
    return Init_AsensingMessage_std_lat(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_acc_y
{
public:
  explicit Init_AsensingMessage_acc_y(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_acc_z acc_y(::fsd_common_msgs::msg::AsensingMessage::_acc_y_type arg)
  {
    msg_.acc_y = std::move(arg);
    return Init_AsensingMessage_acc_z(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_acc_x
{
public:
  explicit Init_AsensingMessage_acc_x(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_acc_y acc_x(::fsd_common_msgs::msg::AsensingMessage::_acc_x_type arg)
  {
    msg_.acc_x = std::move(arg);
    return Init_AsensingMessage_acc_y(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_gyro_z
{
public:
  explicit Init_AsensingMessage_gyro_z(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_acc_x gyro_z(::fsd_common_msgs::msg::AsensingMessage::_gyro_z_type arg)
  {
    msg_.gyro_z = std::move(arg);
    return Init_AsensingMessage_acc_x(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_gyro_y
{
public:
  explicit Init_AsensingMessage_gyro_y(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_gyro_z gyro_y(::fsd_common_msgs::msg::AsensingMessage::_gyro_y_type arg)
  {
    msg_.gyro_y = std::move(arg);
    return Init_AsensingMessage_gyro_z(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_gyro_x
{
public:
  explicit Init_AsensingMessage_gyro_x(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_gyro_y gyro_x(::fsd_common_msgs::msg::AsensingMessage::_gyro_x_type arg)
  {
    msg_.gyro_x = std::move(arg);
    return Init_AsensingMessage_gyro_y(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_heading_angle
{
public:
  explicit Init_AsensingMessage_heading_angle(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_gyro_x heading_angle(::fsd_common_msgs::msg::AsensingMessage::_heading_angle_type arg)
  {
    msg_.heading_angle = std::move(arg);
    return Init_AsensingMessage_gyro_x(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_pitch
{
public:
  explicit Init_AsensingMessage_pitch(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_heading_angle pitch(::fsd_common_msgs::msg::AsensingMessage::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_AsensingMessage_heading_angle(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_roll
{
public:
  explicit Init_AsensingMessage_roll(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_pitch roll(::fsd_common_msgs::msg::AsensingMessage::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_AsensingMessage_pitch(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_vh
{
public:
  explicit Init_AsensingMessage_vh(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_roll vh(::fsd_common_msgs::msg::AsensingMessage::_vh_type arg)
  {
    msg_.vh = std::move(arg);
    return Init_AsensingMessage_roll(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_ve
{
public:
  explicit Init_AsensingMessage_ve(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_vh ve(::fsd_common_msgs::msg::AsensingMessage::_ve_type arg)
  {
    msg_.ve = std::move(arg);
    return Init_AsensingMessage_vh(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_vn
{
public:
  explicit Init_AsensingMessage_vn(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_ve vn(::fsd_common_msgs::msg::AsensingMessage::_vn_type arg)
  {
    msg_.vn = std::move(arg);
    return Init_AsensingMessage_ve(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_h
{
public:
  explicit Init_AsensingMessage_h(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_vn h(::fsd_common_msgs::msg::AsensingMessage::_h_type arg)
  {
    msg_.h = std::move(arg);
    return Init_AsensingMessage_vn(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_lon
{
public:
  explicit Init_AsensingMessage_lon(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_h lon(::fsd_common_msgs::msg::AsensingMessage::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_AsensingMessage_h(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_lat
{
public:
  explicit Init_AsensingMessage_lat(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_lon lat(::fsd_common_msgs::msg::AsensingMessage::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_AsensingMessage_lon(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_frame_id_num
{
public:
  explicit Init_AsensingMessage_frame_id_num(::fsd_common_msgs::msg::AsensingMessage & msg)
  : msg_(msg)
  {}
  Init_AsensingMessage_lat frame_id_num(::fsd_common_msgs::msg::AsensingMessage::_frame_id_num_type arg)
  {
    msg_.frame_id_num = std::move(arg);
    return Init_AsensingMessage_lat(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

class Init_AsensingMessage_header
{
public:
  Init_AsensingMessage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AsensingMessage_frame_id_num header(::fsd_common_msgs::msg::AsensingMessage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AsensingMessage_frame_id_num(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsensingMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::AsensingMessage>()
{
  return fsd_common_msgs::msg::builder::Init_AsensingMessage_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__ASENSING_MESSAGE__BUILDER_HPP_
