// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fsd_common_msgs:msg/InsDelta.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__INS_DELTA__TRAITS_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__INS_DELTA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fsd_common_msgs/msg/detail/ins_delta__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace fsd_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InsDelta & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: total_omega
  {
    out << "total_omega: ";
    rosidl_generator_traits::value_to_yaml(msg.total_omega, out);
    out << ", ";
  }

  // member: total_distance_x
  {
    out << "total_distance_x: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance_x, out);
    out << ", ";
  }

  // member: total_distance_y
  {
    out << "total_distance_y: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance_y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InsDelta & msg,
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

  // member: total_omega
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_omega: ";
    rosidl_generator_traits::value_to_yaml(msg.total_omega, out);
    out << "\n";
  }

  // member: total_distance_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_distance_x: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance_x, out);
    out << "\n";
  }

  // member: total_distance_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_distance_y: ";
    rosidl_generator_traits::value_to_yaml(msg.total_distance_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InsDelta & msg, bool use_flow_style = false)
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
  const fsd_common_msgs::msg::InsDelta & msg,
  std::ostream & out, size_t indentation = 0)
{
  fsd_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fsd_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fsd_common_msgs::msg::InsDelta & msg)
{
  return fsd_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fsd_common_msgs::msg::InsDelta>()
{
  return "fsd_common_msgs::msg::InsDelta";
}

template<>
inline const char * name<fsd_common_msgs::msg::InsDelta>()
{
  return "fsd_common_msgs/msg/InsDelta";
}

template<>
struct has_fixed_size<fsd_common_msgs::msg::InsDelta>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<fsd_common_msgs::msg::InsDelta>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<fsd_common_msgs::msg::InsDelta>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__INS_DELTA__TRAITS_HPP_
