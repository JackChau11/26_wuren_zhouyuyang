// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fsd_common_msgs:msg/Time.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/time__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fsd_common_msgs/msg/detail/time__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace fsd_common_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fsd_common_msgs
cdr_serialize(
  const fsd_common_msgs::msg::Time & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: frame_id_num
  cdr << ros_message.frame_id_num;
  // Member: sum_compute_time
  cdr << ros_message.sum_compute_time;
  // Member: control_compute_time
  cdr << ros_message.control_compute_time;
  // Member: boundary_detector_compute_time
  cdr << ros_message.boundary_detector_compute_time;
  // Member: line_detector_compute_time
  cdr << ros_message.line_detector_compute_time;
  // Member: skidpad_detector_compute_time
  cdr << ros_message.skidpad_detector_compute_time;
  // Member: lidar_detection_compute_time
  cdr << ros_message.lidar_detection_compute_time;
  // Member: camera_detection_compute_time
  cdr << ros_message.camera_detection_compute_time;
  // Member: fusion_detection_compute_time
  cdr << ros_message.fusion_detection_compute_time;
  // Member: time2
  cdr << ros_message.time2;
  // Member: time3
  cdr << ros_message.time3;
  // Member: time4
  cdr << ros_message.time4;
  // Member: time5
  cdr << ros_message.time5;
  // Member: time6
  cdr << ros_message.time6;
  // Member: time7
  cdr << ros_message.time7;
  // Member: time8
  cdr << ros_message.time8;
  // Member: time9
  cdr << ros_message.time9;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fsd_common_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fsd_common_msgs::msg::Time & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: frame_id_num
  cdr >> ros_message.frame_id_num;

  // Member: sum_compute_time
  cdr >> ros_message.sum_compute_time;

  // Member: control_compute_time
  cdr >> ros_message.control_compute_time;

  // Member: boundary_detector_compute_time
  cdr >> ros_message.boundary_detector_compute_time;

  // Member: line_detector_compute_time
  cdr >> ros_message.line_detector_compute_time;

  // Member: skidpad_detector_compute_time
  cdr >> ros_message.skidpad_detector_compute_time;

  // Member: lidar_detection_compute_time
  cdr >> ros_message.lidar_detection_compute_time;

  // Member: camera_detection_compute_time
  cdr >> ros_message.camera_detection_compute_time;

  // Member: fusion_detection_compute_time
  cdr >> ros_message.fusion_detection_compute_time;

  // Member: time2
  cdr >> ros_message.time2;

  // Member: time3
  cdr >> ros_message.time3;

  // Member: time4
  cdr >> ros_message.time4;

  // Member: time5
  cdr >> ros_message.time5;

  // Member: time6
  cdr >> ros_message.time6;

  // Member: time7
  cdr >> ros_message.time7;

  // Member: time8
  cdr >> ros_message.time8;

  // Member: time9
  cdr >> ros_message.time9;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fsd_common_msgs
get_serialized_size(
  const fsd_common_msgs::msg::Time & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: frame_id_num
  {
    size_t item_size = sizeof(ros_message.frame_id_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sum_compute_time
  {
    size_t item_size = sizeof(ros_message.sum_compute_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: control_compute_time
  {
    size_t item_size = sizeof(ros_message.control_compute_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: boundary_detector_compute_time
  {
    size_t item_size = sizeof(ros_message.boundary_detector_compute_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: line_detector_compute_time
  {
    size_t item_size = sizeof(ros_message.line_detector_compute_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: skidpad_detector_compute_time
  {
    size_t item_size = sizeof(ros_message.skidpad_detector_compute_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lidar_detection_compute_time
  {
    size_t item_size = sizeof(ros_message.lidar_detection_compute_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: camera_detection_compute_time
  {
    size_t item_size = sizeof(ros_message.camera_detection_compute_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fusion_detection_compute_time
  {
    size_t item_size = sizeof(ros_message.fusion_detection_compute_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time2
  {
    size_t item_size = sizeof(ros_message.time2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time3
  {
    size_t item_size = sizeof(ros_message.time3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time4
  {
    size_t item_size = sizeof(ros_message.time4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time5
  {
    size_t item_size = sizeof(ros_message.time5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time6
  {
    size_t item_size = sizeof(ros_message.time6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time7
  {
    size_t item_size = sizeof(ros_message.time7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time8
  {
    size_t item_size = sizeof(ros_message.time8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time9
  {
    size_t item_size = sizeof(ros_message.time9);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fsd_common_msgs
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: frame_id_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: sum_compute_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: control_compute_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: boundary_detector_compute_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: line_detector_compute_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: skidpad_detector_compute_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lidar_detection_compute_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: camera_detection_compute_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fusion_detection_compute_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time9
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = fsd_common_msgs::msg::Time;
    is_plain =
      (
      offsetof(DataType, time9) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Time__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fsd_common_msgs::msg::Time *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Time__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fsd_common_msgs::msg::Time *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Time__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fsd_common_msgs::msg::Time *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Time__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Time(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Time__callbacks = {
  "fsd_common_msgs::msg",
  "Time",
  _Time__cdr_serialize,
  _Time__cdr_deserialize,
  _Time__get_serialized_size,
  _Time__max_serialized_size
};

static rosidl_message_type_support_t _Time__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Time__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fsd_common_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_fsd_common_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<fsd_common_msgs::msg::Time>()
{
  return &fsd_common_msgs::msg::typesupport_fastrtps_cpp::_Time__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fsd_common_msgs, msg, Time)() {
  return &fsd_common_msgs::msg::typesupport_fastrtps_cpp::_Time__handle;
}

#ifdef __cplusplus
}
#endif
