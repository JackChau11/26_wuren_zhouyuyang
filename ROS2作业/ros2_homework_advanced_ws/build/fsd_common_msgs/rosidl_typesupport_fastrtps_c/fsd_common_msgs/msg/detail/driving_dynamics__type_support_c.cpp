// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fsd_common_msgs:msg/DrivingDynamics.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/driving_dynamics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fsd_common_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fsd_common_msgs/msg/detail/driving_dynamics__struct.h"
#include "fsd_common_msgs/msg/detail/driving_dynamics__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _DrivingDynamics__ros_msg_type = fsd_common_msgs__msg__DrivingDynamics;

static bool _DrivingDynamics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DrivingDynamics__ros_msg_type * ros_message = static_cast<const _DrivingDynamics__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: speed_target
  {
    cdr << ros_message->speed_target;
  }

  // Field name: speed_actual
  {
    cdr << ros_message->speed_actual;
  }

  // Field name: steering_angle_target
  {
    cdr << ros_message->steering_angle_target;
  }

  // Field name: steering_angle_actual
  {
    cdr << ros_message->steering_angle_actual;
  }

  // Field name: brake_hydr_target
  {
    cdr << ros_message->brake_hydr_target;
  }

  // Field name: brake_hydr_actual
  {
    cdr << ros_message->brake_hydr_actual;
  }

  // Field name: motor_moment_target
  {
    cdr << ros_message->motor_moment_target;
  }

  // Field name: motor_moment_actual
  {
    cdr << ros_message->motor_moment_actual;
  }

  // Field name: acceleration_longitudinal
  {
    cdr << ros_message->acceleration_longitudinal;
  }

  // Field name: acceleration_lateral
  {
    cdr << ros_message->acceleration_lateral;
  }

  // Field name: yaw_rate
  {
    cdr << ros_message->yaw_rate;
  }

  return true;
}

static bool _DrivingDynamics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DrivingDynamics__ros_msg_type * ros_message = static_cast<_DrivingDynamics__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: speed_target
  {
    cdr >> ros_message->speed_target;
  }

  // Field name: speed_actual
  {
    cdr >> ros_message->speed_actual;
  }

  // Field name: steering_angle_target
  {
    cdr >> ros_message->steering_angle_target;
  }

  // Field name: steering_angle_actual
  {
    cdr >> ros_message->steering_angle_actual;
  }

  // Field name: brake_hydr_target
  {
    cdr >> ros_message->brake_hydr_target;
  }

  // Field name: brake_hydr_actual
  {
    cdr >> ros_message->brake_hydr_actual;
  }

  // Field name: motor_moment_target
  {
    cdr >> ros_message->motor_moment_target;
  }

  // Field name: motor_moment_actual
  {
    cdr >> ros_message->motor_moment_actual;
  }

  // Field name: acceleration_longitudinal
  {
    cdr >> ros_message->acceleration_longitudinal;
  }

  // Field name: acceleration_lateral
  {
    cdr >> ros_message->acceleration_lateral;
  }

  // Field name: yaw_rate
  {
    cdr >> ros_message->yaw_rate;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fsd_common_msgs
size_t get_serialized_size_fsd_common_msgs__msg__DrivingDynamics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DrivingDynamics__ros_msg_type * ros_message = static_cast<const _DrivingDynamics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name speed_target
  {
    size_t item_size = sizeof(ros_message->speed_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_actual
  {
    size_t item_size = sizeof(ros_message->speed_actual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_angle_target
  {
    size_t item_size = sizeof(ros_message->steering_angle_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_angle_actual
  {
    size_t item_size = sizeof(ros_message->steering_angle_actual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_hydr_target
  {
    size_t item_size = sizeof(ros_message->brake_hydr_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_hydr_actual
  {
    size_t item_size = sizeof(ros_message->brake_hydr_actual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_moment_target
  {
    size_t item_size = sizeof(ros_message->motor_moment_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_moment_actual
  {
    size_t item_size = sizeof(ros_message->motor_moment_actual);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration_longitudinal
  {
    size_t item_size = sizeof(ros_message->acceleration_longitudinal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration_lateral
  {
    size_t item_size = sizeof(ros_message->acceleration_lateral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate
  {
    size_t item_size = sizeof(ros_message->yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DrivingDynamics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fsd_common_msgs__msg__DrivingDynamics(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fsd_common_msgs
size_t max_serialized_size_fsd_common_msgs__msg__DrivingDynamics(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: speed_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_actual
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_angle_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_angle_actual
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_hydr_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_hydr_actual
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_moment_target
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_moment_actual
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acceleration_longitudinal
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acceleration_lateral
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_rate
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
    using DataType = fsd_common_msgs__msg__DrivingDynamics;
    is_plain =
      (
      offsetof(DataType, yaw_rate) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DrivingDynamics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_fsd_common_msgs__msg__DrivingDynamics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DrivingDynamics = {
  "fsd_common_msgs::msg",
  "DrivingDynamics",
  _DrivingDynamics__cdr_serialize,
  _DrivingDynamics__cdr_deserialize,
  _DrivingDynamics__get_serialized_size,
  _DrivingDynamics__max_serialized_size
};

static rosidl_message_type_support_t _DrivingDynamics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DrivingDynamics,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fsd_common_msgs, msg, DrivingDynamics)() {
  return &_DrivingDynamics__type_support;
}

#if defined(__cplusplus)
}
#endif
