// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fsd_common_msgs:msg/ResAndAmi.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__RES_AND_AMI__TRAITS_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__RES_AND_AMI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fsd_common_msgs/msg/detail/res_and_ami__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace fsd_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ResAndAmi & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: res_state
  {
    out << "res_state: ";
    rosidl_generator_traits::value_to_yaml(msg.res_state, out);
    out << ", ";
  }

  // member: mission
  {
    out << "mission: ";
    rosidl_generator_traits::value_to_yaml(msg.mission, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResAndAmi & msg,
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

  // member: res_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "res_state: ";
    rosidl_generator_traits::value_to_yaml(msg.res_state, out);
    out << "\n";
  }

  // member: mission
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission: ";
    rosidl_generator_traits::value_to_yaml(msg.mission, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResAndAmi & msg, bool use_flow_style = false)
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
  const fsd_common_msgs::msg::ResAndAmi & msg,
  std::ostream & out, size_t indentation = 0)
{
  fsd_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fsd_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fsd_common_msgs::msg::ResAndAmi & msg)
{
  return fsd_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fsd_common_msgs::msg::ResAndAmi>()
{
  return "fsd_common_msgs::msg::ResAndAmi";
}

template<>
inline const char * name<fsd_common_msgs::msg::ResAndAmi>()
{
  return "fsd_common_msgs/msg/ResAndAmi";
}

template<>
struct has_fixed_size<fsd_common_msgs::msg::ResAndAmi>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fsd_common_msgs::msg::ResAndAmi>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fsd_common_msgs::msg::ResAndAmi>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__RES_AND_AMI__TRAITS_HPP_
