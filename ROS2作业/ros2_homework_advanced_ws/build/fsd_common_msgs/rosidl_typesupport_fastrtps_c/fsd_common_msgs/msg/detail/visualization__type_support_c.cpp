// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fsd_common_msgs:msg/Visualization.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/visualization__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fsd_common_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fsd_common_msgs/msg/detail/visualization__struct.h"
#include "fsd_common_msgs/msg/detail/visualization__functions.h"
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


using _Visualization__ros_msg_type = fsd_common_msgs__msg__Visualization;

static bool _Visualization__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Visualization__ros_msg_type * ros_message = static_cast<const _Visualization__ros_msg_type *>(untyped_ros_message);
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

  // Field name: frame_id_num
  {
    cdr << ros_message->frame_id_num;
  }

  // Field name: lat_error_front_axis
  {
    cdr << ros_message->lat_error_front_axis;
  }

  // Field name: lat_error_cog
  {
    cdr << ros_message->lat_error_cog;
  }

  // Field name: lat_error_rear_axis
  {
    cdr << ros_message->lat_error_rear_axis;
  }

  // Field name: yaw_error_front_axis
  {
    cdr << ros_message->yaw_error_front_axis;
  }

  // Field name: yaw_error_cog
  {
    cdr << ros_message->yaw_error_cog;
  }

  // Field name: yaw_error_rear_axis
  {
    cdr << ros_message->yaw_error_rear_axis;
  }

  // Field name: yaw_rate_error
  {
    cdr << ros_message->yaw_rate_error;
  }

  // Field name: steering_error
  {
    cdr << ros_message->steering_error;
  }

  // Field name: vx_error
  {
    cdr << ros_message->vx_error;
  }

  // Field name: vy_error
  {
    cdr << ros_message->vy_error;
  }

  // Field name: sideslip_error
  {
    cdr << ros_message->sideslip_error;
  }

  // Field name: motor_torq_error_lr
  {
    cdr << ros_message->motor_torq_error_lr;
  }

  // Field name: motor_torq_error_rr
  {
    cdr << ros_message->motor_torq_error_rr;
  }

  // Field name: motor_speed_error_lr
  {
    cdr << ros_message->motor_speed_error_lr;
  }

  // Field name: motor_speed_error_rr
  {
    cdr << ros_message->motor_speed_error_rr;
  }

  // Field name: error1
  {
    cdr << ros_message->error1;
  }

  // Field name: error2
  {
    cdr << ros_message->error2;
  }

  // Field name: error3
  {
    cdr << ros_message->error3;
  }

  // Field name: error4
  {
    cdr << ros_message->error4;
  }

  // Field name: yaw_ref
  {
    cdr << ros_message->yaw_ref;
  }

  // Field name: yaw_ref_front_axis
  {
    cdr << ros_message->yaw_ref_front_axis;
  }

  // Field name: yaw_ref_cog
  {
    cdr << ros_message->yaw_ref_cog;
  }

  // Field name: yaw_ref_rear_axis
  {
    cdr << ros_message->yaw_ref_rear_axis;
  }

  // Field name: curvature_ref
  {
    cdr << ros_message->curvature_ref;
  }

  // Field name: curvature_ref_front_axis
  {
    cdr << ros_message->curvature_ref_front_axis;
  }

  // Field name: curvature_ref_cog
  {
    cdr << ros_message->curvature_ref_cog;
  }

  // Field name: curvature_ref_rear_axis
  {
    cdr << ros_message->curvature_ref_rear_axis;
  }

  // Field name: vx_ref
  {
    cdr << ros_message->vx_ref;
  }

  // Field name: vy_ref
  {
    cdr << ros_message->vy_ref;
  }

  // Field name: ax_ref
  {
    cdr << ros_message->ax_ref;
  }

  // Field name: ay_ref
  {
    cdr << ros_message->ay_ref;
  }

  // Field name: ref1
  {
    cdr << ros_message->ref1;
  }

  // Field name: ref2
  {
    cdr << ros_message->ref2;
  }

  // Field name: ref3
  {
    cdr << ros_message->ref3;
  }

  // Field name: ref4
  {
    cdr << ros_message->ref4;
  }

  // Field name: steering_without_compensation
  {
    cdr << ros_message->steering_without_compensation;
  }

  // Field name: steering_feedback
  {
    cdr << ros_message->steering_feedback;
  }

  // Field name: steering_feedforward
  {
    cdr << ros_message->steering_feedforward;
  }

  // Field name: lookforward_length
  {
    cdr << ros_message->lookforward_length;
  }

  // Field name: yaw_rate_pre
  {
    cdr << ros_message->yaw_rate_pre;
  }

  // Field name: turning_radius
  {
    cdr << ros_message->turning_radius;
  }

  // Field name: adhesion_coefficient_pre
  {
    cdr << ros_message->adhesion_coefficient_pre;
  }

  // Field name: sideslip_pre
  {
    cdr << ros_message->sideslip_pre;
  }

  // Field name: slip_angle_pre_fl
  {
    cdr << ros_message->slip_angle_pre_fl;
  }

  // Field name: slip_angle_pre_fr
  {
    cdr << ros_message->slip_angle_pre_fr;
  }

  // Field name: slip_angle_pre_rl
  {
    cdr << ros_message->slip_angle_pre_rl;
  }

  // Field name: slip_angle_pre_rr
  {
    cdr << ros_message->slip_angle_pre_rr;
  }

  // Field name: norm_force_pre_fl
  {
    cdr << ros_message->norm_force_pre_fl;
  }

  // Field name: norm_force_pre_fr
  {
    cdr << ros_message->norm_force_pre_fr;
  }

  // Field name: norm_force_pre_rl
  {
    cdr << ros_message->norm_force_pre_rl;
  }

  // Field name: norm_force_pre_rr
  {
    cdr << ros_message->norm_force_pre_rr;
  }

  // Field name: algorithm1
  {
    cdr << ros_message->algorithm1;
  }

  // Field name: algorithm2
  {
    cdr << ros_message->algorithm2;
  }

  // Field name: algorithm3
  {
    cdr << ros_message->algorithm3;
  }

  // Field name: algorithm4
  {
    cdr << ros_message->algorithm4;
  }

  return true;
}

static bool _Visualization__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Visualization__ros_msg_type * ros_message = static_cast<_Visualization__ros_msg_type *>(untyped_ros_message);
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

  // Field name: frame_id_num
  {
    cdr >> ros_message->frame_id_num;
  }

  // Field name: lat_error_front_axis
  {
    cdr >> ros_message->lat_error_front_axis;
  }

  // Field name: lat_error_cog
  {
    cdr >> ros_message->lat_error_cog;
  }

  // Field name: lat_error_rear_axis
  {
    cdr >> ros_message->lat_error_rear_axis;
  }

  // Field name: yaw_error_front_axis
  {
    cdr >> ros_message->yaw_error_front_axis;
  }

  // Field name: yaw_error_cog
  {
    cdr >> ros_message->yaw_error_cog;
  }

  // Field name: yaw_error_rear_axis
  {
    cdr >> ros_message->yaw_error_rear_axis;
  }

  // Field name: yaw_rate_error
  {
    cdr >> ros_message->yaw_rate_error;
  }

  // Field name: steering_error
  {
    cdr >> ros_message->steering_error;
  }

  // Field name: vx_error
  {
    cdr >> ros_message->vx_error;
  }

  // Field name: vy_error
  {
    cdr >> ros_message->vy_error;
  }

  // Field name: sideslip_error
  {
    cdr >> ros_message->sideslip_error;
  }

  // Field name: motor_torq_error_lr
  {
    cdr >> ros_message->motor_torq_error_lr;
  }

  // Field name: motor_torq_error_rr
  {
    cdr >> ros_message->motor_torq_error_rr;
  }

  // Field name: motor_speed_error_lr
  {
    cdr >> ros_message->motor_speed_error_lr;
  }

  // Field name: motor_speed_error_rr
  {
    cdr >> ros_message->motor_speed_error_rr;
  }

  // Field name: error1
  {
    cdr >> ros_message->error1;
  }

  // Field name: error2
  {
    cdr >> ros_message->error2;
  }

  // Field name: error3
  {
    cdr >> ros_message->error3;
  }

  // Field name: error4
  {
    cdr >> ros_message->error4;
  }

  // Field name: yaw_ref
  {
    cdr >> ros_message->yaw_ref;
  }

  // Field name: yaw_ref_front_axis
  {
    cdr >> ros_message->yaw_ref_front_axis;
  }

  // Field name: yaw_ref_cog
  {
    cdr >> ros_message->yaw_ref_cog;
  }

  // Field name: yaw_ref_rear_axis
  {
    cdr >> ros_message->yaw_ref_rear_axis;
  }

  // Field name: curvature_ref
  {
    cdr >> ros_message->curvature_ref;
  }

  // Field name: curvature_ref_front_axis
  {
    cdr >> ros_message->curvature_ref_front_axis;
  }

  // Field name: curvature_ref_cog
  {
    cdr >> ros_message->curvature_ref_cog;
  }

  // Field name: curvature_ref_rear_axis
  {
    cdr >> ros_message->curvature_ref_rear_axis;
  }

  // Field name: vx_ref
  {
    cdr >> ros_message->vx_ref;
  }

  // Field name: vy_ref
  {
    cdr >> ros_message->vy_ref;
  }

  // Field name: ax_ref
  {
    cdr >> ros_message->ax_ref;
  }

  // Field name: ay_ref
  {
    cdr >> ros_message->ay_ref;
  }

  // Field name: ref1
  {
    cdr >> ros_message->ref1;
  }

  // Field name: ref2
  {
    cdr >> ros_message->ref2;
  }

  // Field name: ref3
  {
    cdr >> ros_message->ref3;
  }

  // Field name: ref4
  {
    cdr >> ros_message->ref4;
  }

  // Field name: steering_without_compensation
  {
    cdr >> ros_message->steering_without_compensation;
  }

  // Field name: steering_feedback
  {
    cdr >> ros_message->steering_feedback;
  }

  // Field name: steering_feedforward
  {
    cdr >> ros_message->steering_feedforward;
  }

  // Field name: lookforward_length
  {
    cdr >> ros_message->lookforward_length;
  }

  // Field name: yaw_rate_pre
  {
    cdr >> ros_message->yaw_rate_pre;
  }

  // Field name: turning_radius
  {
    cdr >> ros_message->turning_radius;
  }

  // Field name: adhesion_coefficient_pre
  {
    cdr >> ros_message->adhesion_coefficient_pre;
  }

  // Field name: sideslip_pre
  {
    cdr >> ros_message->sideslip_pre;
  }

  // Field name: slip_angle_pre_fl
  {
    cdr >> ros_message->slip_angle_pre_fl;
  }

  // Field name: slip_angle_pre_fr
  {
    cdr >> ros_message->slip_angle_pre_fr;
  }

  // Field name: slip_angle_pre_rl
  {
    cdr >> ros_message->slip_angle_pre_rl;
  }

  // Field name: slip_angle_pre_rr
  {
    cdr >> ros_message->slip_angle_pre_rr;
  }

  // Field name: norm_force_pre_fl
  {
    cdr >> ros_message->norm_force_pre_fl;
  }

  // Field name: norm_force_pre_fr
  {
    cdr >> ros_message->norm_force_pre_fr;
  }

  // Field name: norm_force_pre_rl
  {
    cdr >> ros_message->norm_force_pre_rl;
  }

  // Field name: norm_force_pre_rr
  {
    cdr >> ros_message->norm_force_pre_rr;
  }

  // Field name: algorithm1
  {
    cdr >> ros_message->algorithm1;
  }

  // Field name: algorithm2
  {
    cdr >> ros_message->algorithm2;
  }

  // Field name: algorithm3
  {
    cdr >> ros_message->algorithm3;
  }

  // Field name: algorithm4
  {
    cdr >> ros_message->algorithm4;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fsd_common_msgs
size_t get_serialized_size_fsd_common_msgs__msg__Visualization(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Visualization__ros_msg_type * ros_message = static_cast<const _Visualization__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name frame_id_num
  {
    size_t item_size = sizeof(ros_message->frame_id_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_error_front_axis
  {
    size_t item_size = sizeof(ros_message->lat_error_front_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_error_cog
  {
    size_t item_size = sizeof(ros_message->lat_error_cog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_error_rear_axis
  {
    size_t item_size = sizeof(ros_message->lat_error_rear_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_error_front_axis
  {
    size_t item_size = sizeof(ros_message->yaw_error_front_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_error_cog
  {
    size_t item_size = sizeof(ros_message->yaw_error_cog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_error_rear_axis
  {
    size_t item_size = sizeof(ros_message->yaw_error_rear_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate_error
  {
    size_t item_size = sizeof(ros_message->yaw_rate_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_error
  {
    size_t item_size = sizeof(ros_message->steering_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vx_error
  {
    size_t item_size = sizeof(ros_message->vx_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vy_error
  {
    size_t item_size = sizeof(ros_message->vy_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sideslip_error
  {
    size_t item_size = sizeof(ros_message->sideslip_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_torq_error_lr
  {
    size_t item_size = sizeof(ros_message->motor_torq_error_lr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_torq_error_rr
  {
    size_t item_size = sizeof(ros_message->motor_torq_error_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_speed_error_lr
  {
    size_t item_size = sizeof(ros_message->motor_speed_error_lr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_speed_error_rr
  {
    size_t item_size = sizeof(ros_message->motor_speed_error_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error1
  {
    size_t item_size = sizeof(ros_message->error1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error2
  {
    size_t item_size = sizeof(ros_message->error2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error3
  {
    size_t item_size = sizeof(ros_message->error3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error4
  {
    size_t item_size = sizeof(ros_message->error4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_ref
  {
    size_t item_size = sizeof(ros_message->yaw_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_ref_front_axis
  {
    size_t item_size = sizeof(ros_message->yaw_ref_front_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_ref_cog
  {
    size_t item_size = sizeof(ros_message->yaw_ref_cog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_ref_rear_axis
  {
    size_t item_size = sizeof(ros_message->yaw_ref_rear_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curvature_ref
  {
    size_t item_size = sizeof(ros_message->curvature_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curvature_ref_front_axis
  {
    size_t item_size = sizeof(ros_message->curvature_ref_front_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curvature_ref_cog
  {
    size_t item_size = sizeof(ros_message->curvature_ref_cog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curvature_ref_rear_axis
  {
    size_t item_size = sizeof(ros_message->curvature_ref_rear_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vx_ref
  {
    size_t item_size = sizeof(ros_message->vx_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vy_ref
  {
    size_t item_size = sizeof(ros_message->vy_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ax_ref
  {
    size_t item_size = sizeof(ros_message->ax_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ay_ref
  {
    size_t item_size = sizeof(ros_message->ay_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref1
  {
    size_t item_size = sizeof(ros_message->ref1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref2
  {
    size_t item_size = sizeof(ros_message->ref2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref3
  {
    size_t item_size = sizeof(ros_message->ref3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref4
  {
    size_t item_size = sizeof(ros_message->ref4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_without_compensation
  {
    size_t item_size = sizeof(ros_message->steering_without_compensation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_feedback
  {
    size_t item_size = sizeof(ros_message->steering_feedback);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_feedforward
  {
    size_t item_size = sizeof(ros_message->steering_feedforward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lookforward_length
  {
    size_t item_size = sizeof(ros_message->lookforward_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate_pre
  {
    size_t item_size = sizeof(ros_message->yaw_rate_pre);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turning_radius
  {
    size_t item_size = sizeof(ros_message->turning_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name adhesion_coefficient_pre
  {
    size_t item_size = sizeof(ros_message->adhesion_coefficient_pre);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sideslip_pre
  {
    size_t item_size = sizeof(ros_message->sideslip_pre);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slip_angle_pre_fl
  {
    size_t item_size = sizeof(ros_message->slip_angle_pre_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slip_angle_pre_fr
  {
    size_t item_size = sizeof(ros_message->slip_angle_pre_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slip_angle_pre_rl
  {
    size_t item_size = sizeof(ros_message->slip_angle_pre_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name slip_angle_pre_rr
  {
    size_t item_size = sizeof(ros_message->slip_angle_pre_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name norm_force_pre_fl
  {
    size_t item_size = sizeof(ros_message->norm_force_pre_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name norm_force_pre_fr
  {
    size_t item_size = sizeof(ros_message->norm_force_pre_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name norm_force_pre_rl
  {
    size_t item_size = sizeof(ros_message->norm_force_pre_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name norm_force_pre_rr
  {
    size_t item_size = sizeof(ros_message->norm_force_pre_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name algorithm1
  {
    size_t item_size = sizeof(ros_message->algorithm1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name algorithm2
  {
    size_t item_size = sizeof(ros_message->algorithm2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name algorithm3
  {
    size_t item_size = sizeof(ros_message->algorithm3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name algorithm4
  {
    size_t item_size = sizeof(ros_message->algorithm4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Visualization__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fsd_common_msgs__msg__Visualization(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fsd_common_msgs
size_t max_serialized_size_fsd_common_msgs__msg__Visualization(
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
  // member: frame_id_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lat_error_front_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lat_error_cog
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lat_error_rear_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_error_front_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_error_cog
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_error_rear_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_rate_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vx_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vy_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sideslip_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_torq_error_lr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_torq_error_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_speed_error_lr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_speed_error_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: error1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: error2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: error3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: error4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_ref_front_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_ref_cog
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_ref_rear_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: curvature_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: curvature_ref_front_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: curvature_ref_cog
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: curvature_ref_rear_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vx_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vy_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ax_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ay_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ref1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ref2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ref3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ref4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_without_compensation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_feedback
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: steering_feedforward
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lookforward_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_rate_pre
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: turning_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: adhesion_coefficient_pre
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sideslip_pre
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: slip_angle_pre_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: slip_angle_pre_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: slip_angle_pre_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: slip_angle_pre_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: norm_force_pre_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: norm_force_pre_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: norm_force_pre_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: norm_force_pre_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: algorithm1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: algorithm2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: algorithm3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: algorithm4
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
    using DataType = fsd_common_msgs__msg__Visualization;
    is_plain =
      (
      offsetof(DataType, algorithm4) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Visualization__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_fsd_common_msgs__msg__Visualization(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Visualization = {
  "fsd_common_msgs::msg",
  "Visualization",
  _Visualization__cdr_serialize,
  _Visualization__cdr_deserialize,
  _Visualization__get_serialized_size,
  _Visualization__max_serialized_size
};

static rosidl_message_type_support_t _Visualization__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Visualization,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fsd_common_msgs, msg, Visualization)() {
  return &_Visualization__type_support;
}

#if defined(__cplusplus)
}
#endif
