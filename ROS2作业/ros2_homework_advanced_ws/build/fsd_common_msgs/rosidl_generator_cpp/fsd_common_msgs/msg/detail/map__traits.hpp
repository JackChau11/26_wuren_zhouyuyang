// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fsd_common_msgs:msg/Map.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__MAP__TRAITS_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fsd_common_msgs/msg/detail/map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'cone_yellow'
// Member 'cone_blue'
// Member 'cone_red'
// Member 'cone_unknown'
#include "fsd_common_msgs/msg/detail/cone__traits.hpp"

namespace fsd_common_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Map & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cone_yellow
  {
    if (msg.cone_yellow.size() == 0) {
      out << "cone_yellow: []";
    } else {
      out << "cone_yellow: [";
      size_t pending_items = msg.cone_yellow.size();
      for (auto item : msg.cone_yellow) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cone_blue
  {
    if (msg.cone_blue.size() == 0) {
      out << "cone_blue: []";
    } else {
      out << "cone_blue: [";
      size_t pending_items = msg.cone_blue.size();
      for (auto item : msg.cone_blue) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cone_red
  {
    if (msg.cone_red.size() == 0) {
      out << "cone_red: []";
    } else {
      out << "cone_red: [";
      size_t pending_items = msg.cone_red.size();
      for (auto item : msg.cone_red) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cone_unknown
  {
    if (msg.cone_unknown.size() == 0) {
      out << "cone_unknown: []";
    } else {
      out << "cone_unknown: [";
      size_t pending_items = msg.cone_unknown.size();
      for (auto item : msg.cone_unknown) {
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
  const Map & msg,
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

  // member: cone_yellow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cone_yellow.size() == 0) {
      out << "cone_yellow: []\n";
    } else {
      out << "cone_yellow:\n";
      for (auto item : msg.cone_yellow) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cone_blue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cone_blue.size() == 0) {
      out << "cone_blue: []\n";
    } else {
      out << "cone_blue:\n";
      for (auto item : msg.cone_blue) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cone_red
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cone_red.size() == 0) {
      out << "cone_red: []\n";
    } else {
      out << "cone_red:\n";
      for (auto item : msg.cone_red) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cone_unknown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cone_unknown.size() == 0) {
      out << "cone_unknown: []\n";
    } else {
      out << "cone_unknown:\n";
      for (auto item : msg.cone_unknown) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Map & msg, bool use_flow_style = false)
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
  const fsd_common_msgs::msg::Map & msg,
  std::ostream & out, size_t indentation = 0)
{
  fsd_common_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fsd_common_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fsd_common_msgs::msg::Map & msg)
{
  return fsd_common_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fsd_common_msgs::msg::Map>()
{
  return "fsd_common_msgs::msg::Map";
}

template<>
inline const char * name<fsd_common_msgs::msg::Map>()
{
  return "fsd_common_msgs/msg/Map";
}

template<>
struct has_fixed_size<fsd_common_msgs::msg::Map>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fsd_common_msgs::msg::Map>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fsd_common_msgs::msg::Map>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__MAP__TRAITS_HPP_
