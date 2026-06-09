// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fsd_common_msgs:msg/AsState.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__AS_STATE__TRAITS_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__AS_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fsd_common_msgs/msg/detail/as_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace fsd_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AsState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: mission
  {
    out << "mission: ";
    rosidl_generator_traits::value_to_yaml(msg.mission, out);
    out << ", ";
  }

  // member: which_lap
  {
    out << "which_lap: ";
    rosidl_generator_traits::value_to_yaml(msg.which_lap, out);
    out << ", ";
  }

  // member: end
  {
    out << "end: ";
    rosidl_generator_traits::value_to_yaml(msg.end, out);
    out << ", ";
  }

  // member: finished
  {
    out << "finished: ";
    rosidl_generator_traits::value_to_yaml(msg.finished, out);
    out << ", ";
  }

  // member: camera_state
  {
    out << "camera_state: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_state, out);
    out << ", ";
  }

  // member: lidar_state
  {
    out << "lidar_state: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_state, out);
    out << ", ";
  }

  // member: ins_state
  {
    out << "ins_state: ";
    rosidl_generator_traits::value_to_yaml(msg.ins_state, out);
    out << ", ";
  }

  // member: sensor_state
  {
    out << "sensor_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_state, out);
    out << ", ";
  }

  // member: ready
  {
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
    out << ", ";
  }

  // member: count_time
  {
    out << "count_time: ";
    rosidl_generator_traits::value_to_yaml(msg.count_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AsState & msg,
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

  // member: mission
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission: ";
    rosidl_generator_traits::value_to_yaml(msg.mission, out);
    out << "\n";
  }

  // member: which_lap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "which_lap: ";
    rosidl_generator_traits::value_to_yaml(msg.which_lap, out);
    out << "\n";
  }

  // member: end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end: ";
    rosidl_generator_traits::value_to_yaml(msg.end, out);
    out << "\n";
  }

  // member: finished
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finished: ";
    rosidl_generator_traits::value_to_yaml(msg.finished, out);
    out << "\n";
  }

  // member: camera_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_state: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_state, out);
    out << "\n";
  }

  // member: lidar_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lidar_state: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar_state, out);
    out << "\n";
  }

  // member: ins_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ins_state: ";
    rosidl_generator_traits::value_to_yaml(msg.ins_state, out);
    out << "\n";
  }

  // member: sensor_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_state, out);
    out << "\n";
  }

  // member: ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
    out << "\n";
  }

  // member: count_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count_time: ";
    rosidl_generator_traits::value_to_yaml(msg.count_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AsState & msg, bool use_flow_style = false)
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
  const fsd_common_msgs::msg::AsState & msg,
  std::ostream & out, size_t indentation = 0)
{
  fsd_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fsd_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fsd_common_msgs::msg::AsState & msg)
{
  return fsd_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fsd_common_msgs::msg::AsState>()
{
  return "fsd_common_msgs::msg::AsState";
}

template<>
inline const char * name<fsd_common_msgs::msg::AsState>()
{
  return "fsd_common_msgs/msg/AsState";
}

template<>
struct has_fixed_size<fsd_common_msgs::msg::AsState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fsd_common_msgs::msg::AsState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fsd_common_msgs::msg::AsState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__AS_STATE__TRAITS_HPP_
