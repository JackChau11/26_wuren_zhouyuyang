// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fsd_common_msgs:msg/AsensingMessage.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__ASENSING_MESSAGE__TRAITS_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__ASENSING_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fsd_common_msgs/msg/detail/asensing_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace fsd_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AsensingMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: frame_id_num
  {
    out << "frame_id_num: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id_num, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: h
  {
    out << "h: ";
    rosidl_generator_traits::value_to_yaml(msg.h, out);
    out << ", ";
  }

  // member: vn
  {
    out << "vn: ";
    rosidl_generator_traits::value_to_yaml(msg.vn, out);
    out << ", ";
  }

  // member: ve
  {
    out << "ve: ";
    rosidl_generator_traits::value_to_yaml(msg.ve, out);
    out << ", ";
  }

  // member: vh
  {
    out << "vh: ";
    rosidl_generator_traits::value_to_yaml(msg.vh, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: heading_angle
  {
    out << "heading_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_angle, out);
    out << ", ";
  }

  // member: gyro_x
  {
    out << "gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x, out);
    out << ", ";
  }

  // member: gyro_y
  {
    out << "gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y, out);
    out << ", ";
  }

  // member: gyro_z
  {
    out << "gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z, out);
    out << ", ";
  }

  // member: acc_x
  {
    out << "acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_x, out);
    out << ", ";
  }

  // member: acc_y
  {
    out << "acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_y, out);
    out << ", ";
  }

  // member: acc_z
  {
    out << "acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_z, out);
    out << ", ";
  }

  // member: std_lat
  {
    out << "std_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.std_lat, out);
    out << ", ";
  }

  // member: std_lon
  {
    out << "std_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.std_lon, out);
    out << ", ";
  }

  // member: std_local_height
  {
    out << "std_local_height: ";
    rosidl_generator_traits::value_to_yaml(msg.std_local_height, out);
    out << ", ";
  }

  // member: north_velocity_std
  {
    out << "north_velocity_std: ";
    rosidl_generator_traits::value_to_yaml(msg.north_velocity_std, out);
    out << ", ";
  }

  // member: east_velocity_std
  {
    out << "east_velocity_std: ";
    rosidl_generator_traits::value_to_yaml(msg.east_velocity_std, out);
    out << ", ";
  }

  // member: ground_velocity_std
  {
    out << "ground_velocity_std: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_velocity_std, out);
    out << ", ";
  }

  // member: roll_std
  {
    out << "roll_std: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_std, out);
    out << ", ";
  }

  // member: pitch_std
  {
    out << "pitch_std: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_std, out);
    out << ", ";
  }

  // member: std_heading
  {
    out << "std_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.std_heading, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: gps_flag_pos
  {
    out << "gps_flag_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_flag_pos, out);
    out << ", ";
  }

  // member: gps_week_number
  {
    out << "gps_week_number: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_week_number, out);
    out << ", ";
  }

  // member: ull_timestamp
  {
    out << "ull_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.ull_timestamp, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: car_status
  {
    out << "car_status: ";
    rosidl_generator_traits::value_to_yaml(msg.car_status, out);
    out << ", ";
  }

  // member: gps_flag_heading
  {
    out << "gps_flag_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_flag_heading, out);
    out << ", ";
  }

  // member: num_sv
  {
    out << "num_sv: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sv, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AsensingMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: frame_id_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id_num: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id_num, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h: ";
    rosidl_generator_traits::value_to_yaml(msg.h, out);
    out << "\n";
  }

  // member: vn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vn: ";
    rosidl_generator_traits::value_to_yaml(msg.vn, out);
    out << "\n";
  }

  // member: ve
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ve: ";
    rosidl_generator_traits::value_to_yaml(msg.ve, out);
    out << "\n";
  }

  // member: vh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vh: ";
    rosidl_generator_traits::value_to_yaml(msg.vh, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: heading_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_angle, out);
    out << "\n";
  }

  // member: gyro_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x, out);
    out << "\n";
  }

  // member: gyro_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y, out);
    out << "\n";
  }

  // member: gyro_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z, out);
    out << "\n";
  }

  // member: acc_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_x: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_x, out);
    out << "\n";
  }

  // member: acc_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_y: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_y, out);
    out << "\n";
  }

  // member: acc_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_z: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_z, out);
    out << "\n";
  }

  // member: std_lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_lat: ";
    rosidl_generator_traits::value_to_yaml(msg.std_lat, out);
    out << "\n";
  }

  // member: std_lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_lon: ";
    rosidl_generator_traits::value_to_yaml(msg.std_lon, out);
    out << "\n";
  }

  // member: std_local_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_local_height: ";
    rosidl_generator_traits::value_to_yaml(msg.std_local_height, out);
    out << "\n";
  }

  // member: north_velocity_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "north_velocity_std: ";
    rosidl_generator_traits::value_to_yaml(msg.north_velocity_std, out);
    out << "\n";
  }

  // member: east_velocity_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "east_velocity_std: ";
    rosidl_generator_traits::value_to_yaml(msg.east_velocity_std, out);
    out << "\n";
  }

  // member: ground_velocity_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_velocity_std: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_velocity_std, out);
    out << "\n";
  }

  // member: roll_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_std: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_std, out);
    out << "\n";
  }

  // member: pitch_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_std: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_std, out);
    out << "\n";
  }

  // member: std_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.std_heading, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: gps_flag_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_flag_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_flag_pos, out);
    out << "\n";
  }

  // member: gps_week_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_week_number: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_week_number, out);
    out << "\n";
  }

  // member: ull_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ull_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.ull_timestamp, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: car_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "car_status: ";
    rosidl_generator_traits::value_to_yaml(msg.car_status, out);
    out << "\n";
  }

  // member: gps_flag_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_flag_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_flag_heading, out);
    out << "\n";
  }

  // member: num_sv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_sv: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sv, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AsensingMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace fsd_common_msgs

namespace rosidl_generator_traits
{

[[deprecated("use fsd_common_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fsd_common_msgs::msg::AsensingMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  fsd_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fsd_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fsd_common_msgs::msg::AsensingMessage & msg)
{
  return fsd_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fsd_common_msgs::msg::AsensingMessage>()
{
  return "fsd_common_msgs::msg::AsensingMessage";
}

template<>
inline const char * name<fsd_common_msgs::msg::AsensingMessage>()
{
  return "fsd_common_msgs/msg/AsensingMessage";
}

template<>
struct has_fixed_size<fsd_common_msgs::msg::AsensingMessage>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<fsd_common_msgs::msg::AsensingMessage>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<fsd_common_msgs::msg::AsensingMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__ASENSING_MESSAGE__TRAITS_HPP_
