// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fsd_common_msgs:msg/DecisionFlag.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__DECISION_FLAG__TRAITS_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__DECISION_FLAG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fsd_common_msgs/msg/detail/decision_flag__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace fsd_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DecisionFlag & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: lap1_state
  {
    out << "lap1_state: ";
    rosidl_generator_traits::value_to_yaml(msg.lap1_state, out);
    out << ", ";
  }

  // member: lap2_state
  {
    out << "lap2_state: ";
    rosidl_generator_traits::value_to_yaml(msg.lap2_state, out);
    out << ", ";
  }

  // member: map_state
  {
    out << "map_state: ";
    rosidl_generator_traits::value_to_yaml(msg.map_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DecisionFlag & msg,
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

  // member: lap1_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap1_state: ";
    rosidl_generator_traits::value_to_yaml(msg.lap1_state, out);
    out << "\n";
  }

  // member: lap2_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lap2_state: ";
    rosidl_generator_traits::value_to_yaml(msg.lap2_state, out);
    out << "\n";
  }

  // member: map_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_state: ";
    rosidl_generator_traits::value_to_yaml(msg.map_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DecisionFlag & msg, bool use_flow_style = false)
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
  const fsd_common_msgs::msg::DecisionFlag & msg,
  std::ostream & out, size_t indentation = 0)
{
  fsd_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fsd_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fsd_common_msgs::msg::DecisionFlag & msg)
{
  return fsd_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fsd_common_msgs::msg::DecisionFlag>()
{
  return "fsd_common_msgs::msg::DecisionFlag";
}

template<>
inline const char * name<fsd_common_msgs::msg::DecisionFlag>()
{
  return "fsd_common_msgs/msg/DecisionFlag";
}

template<>
struct has_fixed_size<fsd_common_msgs::msg::DecisionFlag>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<fsd_common_msgs::msg::DecisionFlag>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<fsd_common_msgs::msg::DecisionFlag>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__DECISION_FLAG__TRAITS_HPP_
