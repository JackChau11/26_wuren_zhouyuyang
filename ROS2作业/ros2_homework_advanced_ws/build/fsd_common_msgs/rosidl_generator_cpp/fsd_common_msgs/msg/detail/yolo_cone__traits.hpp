// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fsd_common_msgs:msg/YoloCone.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE__TRAITS_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fsd_common_msgs/msg/detail/yolo_cone__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'width'
// Member 'height'
// Member 'color_confidence'
#include "std_msgs/msg/detail/float32__traits.hpp"
// Member 'color'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace fsd_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const YoloCone & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    to_flow_style_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    to_flow_style_yaml(msg.y, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    to_flow_style_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    to_flow_style_yaml(msg.height, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    to_flow_style_yaml(msg.color, out);
    out << ", ";
  }

  // member: color_confidence
  {
    out << "color_confidence: ";
    to_flow_style_yaml(msg.color_confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const YoloCone & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x:\n";
    to_block_style_yaml(msg.x, out, indentation + 2);
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y:\n";
    to_block_style_yaml(msg.y, out, indentation + 2);
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width:\n";
    to_block_style_yaml(msg.width, out, indentation + 2);
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height:\n";
    to_block_style_yaml(msg.height, out, indentation + 2);
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color:\n";
    to_block_style_yaml(msg.color, out, indentation + 2);
  }

  // member: color_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color_confidence:\n";
    to_block_style_yaml(msg.color_confidence, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const YoloCone & msg, bool use_flow_style = false)
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
  const fsd_common_msgs::msg::YoloCone & msg,
  std::ostream & out, size_t indentation = 0)
{
  fsd_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fsd_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fsd_common_msgs::msg::YoloCone & msg)
{
  return fsd_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fsd_common_msgs::msg::YoloCone>()
{
  return "fsd_common_msgs::msg::YoloCone";
}

template<>
inline const char * name<fsd_common_msgs::msg::YoloCone>()
{
  return "fsd_common_msgs/msg/YoloCone";
}

template<>
struct has_fixed_size<fsd_common_msgs::msg::YoloCone>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<fsd_common_msgs::msg::YoloCone>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<fsd_common_msgs::msg::YoloCone>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE__TRAITS_HPP_
