// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fsd_common_msgs:msg/CarState.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__CAR_STATE__TRAITS_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__CAR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fsd_common_msgs/msg/detail/car_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'car_state'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"
// Member 'car_state_dt'
#include "fsd_common_msgs/msg/detail/car_state_dt__traits.hpp"

namespace fsd_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CarState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: car_state
  {
    out << "car_state: ";
    to_flow_style_yaml(msg.car_state, out);
    out << ", ";
  }

  // member: car_state_dt
  {
    out << "car_state_dt: ";
    to_flow_style_yaml(msg.car_state_dt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CarState & msg,
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

  // member: car_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "car_state:\n";
    to_block_style_yaml(msg.car_state, out, indentation + 2);
  }

  // member: car_state_dt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "car_state_dt:\n";
    to_block_style_yaml(msg.car_state_dt, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CarState & msg, bool use_flow_style = false)
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
  const fsd_common_msgs::msg::CarState & msg,
  std::ostream & out, size_t indentation = 0)
{
  fsd_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fsd_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fsd_common_msgs::msg::CarState & msg)
{
  return fsd_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fsd_common_msgs::msg::CarState>()
{
  return "fsd_common_msgs::msg::CarState";
}

template<>
inline const char * name<fsd_common_msgs::msg::CarState>()
{
  return "fsd_common_msgs/msg/CarState";
}

template<>
struct has_fixed_size<fsd_common_msgs::msg::CarState>
  : std::integral_constant<bool, has_fixed_size<fsd_common_msgs::msg::CarStateDt>::value && has_fixed_size<geometry_msgs::msg::Pose2D>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<fsd_common_msgs::msg::CarState>
  : std::integral_constant<bool, has_bounded_size<fsd_common_msgs::msg::CarStateDt>::value && has_bounded_size<geometry_msgs::msg::Pose2D>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<fsd_common_msgs::msg::CarState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__CAR_STATE__TRAITS_HPP_
