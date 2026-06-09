// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fsd_common_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__FEEDBACK__TRAITS_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__FEEDBACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fsd_common_msgs/msg/detail/feedback__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace fsd_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Feedback & msg,
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

  // member: wheel_speed_fl
  {
    out << "wheel_speed_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_fl, out);
    out << ", ";
  }

  // member: wheel_speed_fr
  {
    out << "wheel_speed_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_fr, out);
    out << ", ";
  }

  // member: wheel_speed_rl
  {
    out << "wheel_speed_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_rl, out);
    out << ", ";
  }

  // member: wheel_speed_rr
  {
    out << "wheel_speed_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_rr, out);
    out << ", ";
  }

  // member: motor_command_speed_rl
  {
    out << "motor_command_speed_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_command_speed_rl, out);
    out << ", ";
  }

  // member: motor_command_speed_rr
  {
    out << "motor_command_speed_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_command_speed_rr, out);
    out << ", ";
  }

  // member: motor_return_speed_rl
  {
    out << "motor_return_speed_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_return_speed_rl, out);
    out << ", ";
  }

  // member: motor_return_speed_rr
  {
    out << "motor_return_speed_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_return_speed_rr, out);
    out << ", ";
  }

  // member: motor_command_torq_rl
  {
    out << "motor_command_torq_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_command_torq_rl, out);
    out << ", ";
  }

  // member: motor_command_torq_rr
  {
    out << "motor_command_torq_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_command_torq_rr, out);
    out << ", ";
  }

  // member: motor_return_torq_rl
  {
    out << "motor_return_torq_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_return_torq_rl, out);
    out << ", ";
  }

  // member: motor_return_torq_rr
  {
    out << "motor_return_torq_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_return_torq_rr, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Feedback & msg,
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

  // member: wheel_speed_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_speed_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_fl, out);
    out << "\n";
  }

  // member: wheel_speed_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_speed_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_fr, out);
    out << "\n";
  }

  // member: wheel_speed_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_speed_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_rl, out);
    out << "\n";
  }

  // member: wheel_speed_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_speed_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_speed_rr, out);
    out << "\n";
  }

  // member: motor_command_speed_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_command_speed_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_command_speed_rl, out);
    out << "\n";
  }

  // member: motor_command_speed_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_command_speed_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_command_speed_rr, out);
    out << "\n";
  }

  // member: motor_return_speed_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_return_speed_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_return_speed_rl, out);
    out << "\n";
  }

  // member: motor_return_speed_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_return_speed_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_return_speed_rr, out);
    out << "\n";
  }

  // member: motor_command_torq_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_command_torq_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_command_torq_rl, out);
    out << "\n";
  }

  // member: motor_command_torq_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_command_torq_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_command_torq_rr, out);
    out << "\n";
  }

  // member: motor_return_torq_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_return_torq_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_return_torq_rl, out);
    out << "\n";
  }

  // member: motor_return_torq_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_return_torq_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_return_torq_rr, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Feedback & msg, bool use_flow_style = false)
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
  const fsd_common_msgs::msg::Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  fsd_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fsd_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fsd_common_msgs::msg::Feedback & msg)
{
  return fsd_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fsd_common_msgs::msg::Feedback>()
{
  return "fsd_common_msgs::msg::Feedback";
}

template<>
inline const char * name<fsd_common_msgs::msg::Feedback>()
{
  return "fsd_common_msgs/msg/Feedback";
}

template<>
struct has_fixed_size<fsd_common_msgs::msg::Feedback>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<fsd_common_msgs::msg::Feedback>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<fsd_common_msgs::msg::Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__FEEDBACK__TRAITS_HPP_
