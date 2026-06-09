// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fsd_common_msgs:msg/CanFrames.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__CAN_FRAMES__TRAITS_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__CAN_FRAMES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fsd_common_msgs/msg/detail/can_frames__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'frames'
#include "can_msgs/msg/detail/frame__traits.hpp"

namespace fsd_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CanFrames & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: frames
  {
    if (msg.frames.size() == 0) {
      out << "frames: []";
    } else {
      out << "frames: [";
      size_t pending_items = msg.frames.size();
      for (auto item : msg.frames) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CanFrames & msg,
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

  // member: frames
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.frames.size() == 0) {
      out << "frames: []\n";
    } else {
      out << "frames:\n";
      for (auto item : msg.frames) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CanFrames & msg, bool use_flow_style = false)
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
  const fsd_common_msgs::msg::CanFrames & msg,
  std::ostream & out, size_t indentation = 0)
{
  fsd_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fsd_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fsd_common_msgs::msg::CanFrames & msg)
{
  return fsd_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fsd_common_msgs::msg::CanFrames>()
{
  return "fsd_common_msgs::msg::CanFrames";
}

template<>
inline const char * name<fsd_common_msgs::msg::CanFrames>()
{
  return "fsd_common_msgs/msg/CanFrames";
}

template<>
struct has_fixed_size<fsd_common_msgs::msg::CanFrames>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fsd_common_msgs::msg::CanFrames>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fsd_common_msgs::msg::CanFrames>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__CAN_FRAMES__TRAITS_HPP_
