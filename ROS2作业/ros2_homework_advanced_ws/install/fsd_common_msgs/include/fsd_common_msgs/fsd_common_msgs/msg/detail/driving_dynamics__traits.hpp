// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fsd_common_msgs:msg/DrivingDynamics.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__DRIVING_DYNAMICS__TRAITS_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__DRIVING_DYNAMICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fsd_common_msgs/msg/detail/driving_dynamics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace fsd_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DrivingDynamics & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: speed_target
  {
    out << "speed_target: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_target, out);
    out << ", ";
  }

  // member: speed_actual
  {
    out << "speed_actual: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_actual, out);
    out << ", ";
  }

  // member: steering_angle_target
  {
    out << "steering_angle_target: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle_target, out);
    out << ", ";
  }

  // member: steering_angle_actual
  {
    out << "steering_angle_actual: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle_actual, out);
    out << ", ";
  }

  // member: brake_hydr_target
  {
    out << "brake_hydr_target: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_hydr_target, out);
    out << ", ";
  }

  // member: brake_hydr_actual
  {
    out << "brake_hydr_actual: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_hydr_actual, out);
    out << ", ";
  }

  // member: motor_moment_target
  {
    out << "motor_moment_target: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_moment_target, out);
    out << ", ";
  }

  // member: motor_moment_actual
  {
    out << "motor_moment_actual: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_moment_actual, out);
    out << ", ";
  }

  // member: acceleration_longitudinal
  {
    out << "acceleration_longitudinal: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_longitudinal, out);
    out << ", ";
  }

  // member: acceleration_lateral
  {
    out << "acceleration_lateral: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_lateral, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DrivingDynamics & msg,
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

  // member: speed_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_target: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_target, out);
    out << "\n";
  }

  // member: speed_actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_actual: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_actual, out);
    out << "\n";
  }

  // member: steering_angle_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle_target: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle_target, out);
    out << "\n";
  }

  // member: steering_angle_actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle_actual: ";
    rosidl_generator_traits::value_to_yaml(msg.steering_angle_actual, out);
    out << "\n";
  }

  // member: brake_hydr_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_hydr_target: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_hydr_target, out);
    out << "\n";
  }

  // member: brake_hydr_actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_hydr_actual: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_hydr_actual, out);
    out << "\n";
  }

  // member: motor_moment_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_moment_target: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_moment_target, out);
    out << "\n";
  }

  // member: motor_moment_actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_moment_actual: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_moment_actual, out);
    out << "\n";
  }

  // member: acceleration_longitudinal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_longitudinal: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_longitudinal, out);
    out << "\n";
  }

  // member: acceleration_lateral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_lateral: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_lateral, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DrivingDynamics & msg, bool use_flow_style = false)
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
  const fsd_common_msgs::msg::DrivingDynamics & msg,
  std::ostream & out, size_t indentation = 0)
{
  fsd_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fsd_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fsd_common_msgs::msg::DrivingDynamics & msg)
{
  return fsd_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fsd_common_msgs::msg::DrivingDynamics>()
{
  return "fsd_common_msgs::msg::DrivingDynamics";
}

template<>
inline const char * name<fsd_common_msgs::msg::DrivingDynamics>()
{
  return "fsd_common_msgs/msg/DrivingDynamics";
}

template<>
struct has_fixed_size<fsd_common_msgs::msg::DrivingDynamics>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<fsd_common_msgs::msg::DrivingDynamics>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<fsd_common_msgs::msg::DrivingDynamics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__DRIVING_DYNAMICS__TRAITS_HPP_
