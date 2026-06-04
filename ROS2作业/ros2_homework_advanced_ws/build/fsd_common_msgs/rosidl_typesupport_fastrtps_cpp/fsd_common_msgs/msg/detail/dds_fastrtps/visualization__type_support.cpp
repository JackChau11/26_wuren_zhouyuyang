// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from fsd_common_msgs:msg/Visualization.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/visualization__rosidl_typesupport_fastrtps_cpp.hpp"
#include "fsd_common_msgs/msg/detail/visualization__struct.hpp"

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
  const fsd_common_msgs::msg::Visualization & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: frame_id_num
  cdr << ros_message.frame_id_num;
  // Member: lat_error_front_axis
  cdr << ros_message.lat_error_front_axis;
  // Member: lat_error_cog
  cdr << ros_message.lat_error_cog;
  // Member: lat_error_rear_axis
  cdr << ros_message.lat_error_rear_axis;
  // Member: yaw_error_front_axis
  cdr << ros_message.yaw_error_front_axis;
  // Member: yaw_error_cog
  cdr << ros_message.yaw_error_cog;
  // Member: yaw_error_rear_axis
  cdr << ros_message.yaw_error_rear_axis;
  // Member: yaw_rate_error
  cdr << ros_message.yaw_rate_error;
  // Member: steering_error
  cdr << ros_message.steering_error;
  // Member: vx_error
  cdr << ros_message.vx_error;
  // Member: vy_error
  cdr << ros_message.vy_error;
  // Member: sideslip_error
  cdr << ros_message.sideslip_error;
  // Member: motor_torq_error_lr
  cdr << ros_message.motor_torq_error_lr;
  // Member: motor_torq_error_rr
  cdr << ros_message.motor_torq_error_rr;
  // Member: motor_speed_error_lr
  cdr << ros_message.motor_speed_error_lr;
  // Member: motor_speed_error_rr
  cdr << ros_message.motor_speed_error_rr;
  // Member: error1
  cdr << ros_message.error1;
  // Member: error2
  cdr << ros_message.error2;
  // Member: error3
  cdr << ros_message.error3;
  // Member: error4
  cdr << ros_message.error4;
  // Member: yaw_ref
  cdr << ros_message.yaw_ref;
  // Member: yaw_ref_front_axis
  cdr << ros_message.yaw_ref_front_axis;
  // Member: yaw_ref_cog
  cdr << ros_message.yaw_ref_cog;
  // Member: yaw_ref_rear_axis
  cdr << ros_message.yaw_ref_rear_axis;
  // Member: curvature_ref
  cdr << ros_message.curvature_ref;
  // Member: curvature_ref_front_axis
  cdr << ros_message.curvature_ref_front_axis;
  // Member: curvature_ref_cog
  cdr << ros_message.curvature_ref_cog;
  // Member: curvature_ref_rear_axis
  cdr << ros_message.curvature_ref_rear_axis;
  // Member: vx_ref
  cdr << ros_message.vx_ref;
  // Member: vy_ref
  cdr << ros_message.vy_ref;
  // Member: ax_ref
  cdr << ros_message.ax_ref;
  // Member: ay_ref
  cdr << ros_message.ay_ref;
  // Member: ref1
  cdr << ros_message.ref1;
  // Member: ref2
  cdr << ros_message.ref2;
  // Member: ref3
  cdr << ros_message.ref3;
  // Member: ref4
  cdr << ros_message.ref4;
  // Member: steering_without_compensation
  cdr << ros_message.steering_without_compensation;
  // Member: steering_feedback
  cdr << ros_message.steering_feedback;
  // Member: steering_feedforward
  cdr << ros_message.steering_feedforward;
  // Member: lookforward_length
  cdr << ros_message.lookforward_length;
  // Member: yaw_rate_pre
  cdr << ros_message.yaw_rate_pre;
  // Member: turning_radius
  cdr << ros_message.turning_radius;
  // Member: adhesion_coefficient_pre
  cdr << ros_message.adhesion_coefficient_pre;
  // Member: sideslip_pre
  cdr << ros_message.sideslip_pre;
  // Member: slip_angle_pre_fl
  cdr << ros_message.slip_angle_pre_fl;
  // Member: slip_angle_pre_fr
  cdr << ros_message.slip_angle_pre_fr;
  // Member: slip_angle_pre_rl
  cdr << ros_message.slip_angle_pre_rl;
  // Member: slip_angle_pre_rr
  cdr << ros_message.slip_angle_pre_rr;
  // Member: norm_force_pre_fl
  cdr << ros_message.norm_force_pre_fl;
  // Member: norm_force_pre_fr
  cdr << ros_message.norm_force_pre_fr;
  // Member: norm_force_pre_rl
  cdr << ros_message.norm_force_pre_rl;
  // Member: norm_force_pre_rr
  cdr << ros_message.norm_force_pre_rr;
  // Member: algorithm1
  cdr << ros_message.algorithm1;
  // Member: algorithm2
  cdr << ros_message.algorithm2;
  // Member: algorithm3
  cdr << ros_message.algorithm3;
  // Member: algorithm4
  cdr << ros_message.algorithm4;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fsd_common_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fsd_common_msgs::msg::Visualization & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: frame_id_num
  cdr >> ros_message.frame_id_num;

  // Member: lat_error_front_axis
  cdr >> ros_message.lat_error_front_axis;

  // Member: lat_error_cog
  cdr >> ros_message.lat_error_cog;

  // Member: lat_error_rear_axis
  cdr >> ros_message.lat_error_rear_axis;

  // Member: yaw_error_front_axis
  cdr >> ros_message.yaw_error_front_axis;

  // Member: yaw_error_cog
  cdr >> ros_message.yaw_error_cog;

  // Member: yaw_error_rear_axis
  cdr >> ros_message.yaw_error_rear_axis;

  // Member: yaw_rate_error
  cdr >> ros_message.yaw_rate_error;

  // Member: steering_error
  cdr >> ros_message.steering_error;

  // Member: vx_error
  cdr >> ros_message.vx_error;

  // Member: vy_error
  cdr >> ros_message.vy_error;

  // Member: sideslip_error
  cdr >> ros_message.sideslip_error;

  // Member: motor_torq_error_lr
  cdr >> ros_message.motor_torq_error_lr;

  // Member: motor_torq_error_rr
  cdr >> ros_message.motor_torq_error_rr;

  // Member: motor_speed_error_lr
  cdr >> ros_message.motor_speed_error_lr;

  // Member: motor_speed_error_rr
  cdr >> ros_message.motor_speed_error_rr;

  // Member: error1
  cdr >> ros_message.error1;

  // Member: error2
  cdr >> ros_message.error2;

  // Member: error3
  cdr >> ros_message.error3;

  // Member: error4
  cdr >> ros_message.error4;

  // Member: yaw_ref
  cdr >> ros_message.yaw_ref;

  // Member: yaw_ref_front_axis
  cdr >> ros_message.yaw_ref_front_axis;

  // Member: yaw_ref_cog
  cdr >> ros_message.yaw_ref_cog;

  // Member: yaw_ref_rear_axis
  cdr >> ros_message.yaw_ref_rear_axis;

  // Member: curvature_ref
  cdr >> ros_message.curvature_ref;

  // Member: curvature_ref_front_axis
  cdr >> ros_message.curvature_ref_front_axis;

  // Member: curvature_ref_cog
  cdr >> ros_message.curvature_ref_cog;

  // Member: curvature_ref_rear_axis
  cdr >> ros_message.curvature_ref_rear_axis;

  // Member: vx_ref
  cdr >> ros_message.vx_ref;

  // Member: vy_ref
  cdr >> ros_message.vy_ref;

  // Member: ax_ref
  cdr >> ros_message.ax_ref;

  // Member: ay_ref
  cdr >> ros_message.ay_ref;

  // Member: ref1
  cdr >> ros_message.ref1;

  // Member: ref2
  cdr >> ros_message.ref2;

  // Member: ref3
  cdr >> ros_message.ref3;

  // Member: ref4
  cdr >> ros_message.ref4;

  // Member: steering_without_compensation
  cdr >> ros_message.steering_without_compensation;

  // Member: steering_feedback
  cdr >> ros_message.steering_feedback;

  // Member: steering_feedforward
  cdr >> ros_message.steering_feedforward;

  // Member: lookforward_length
  cdr >> ros_message.lookforward_length;

  // Member: yaw_rate_pre
  cdr >> ros_message.yaw_rate_pre;

  // Member: turning_radius
  cdr >> ros_message.turning_radius;

  // Member: adhesion_coefficient_pre
  cdr >> ros_message.adhesion_coefficient_pre;

  // Member: sideslip_pre
  cdr >> ros_message.sideslip_pre;

  // Member: slip_angle_pre_fl
  cdr >> ros_message.slip_angle_pre_fl;

  // Member: slip_angle_pre_fr
  cdr >> ros_message.slip_angle_pre_fr;

  // Member: slip_angle_pre_rl
  cdr >> ros_message.slip_angle_pre_rl;

  // Member: slip_angle_pre_rr
  cdr >> ros_message.slip_angle_pre_rr;

  // Member: norm_force_pre_fl
  cdr >> ros_message.norm_force_pre_fl;

  // Member: norm_force_pre_fr
  cdr >> ros_message.norm_force_pre_fr;

  // Member: norm_force_pre_rl
  cdr >> ros_message.norm_force_pre_rl;

  // Member: norm_force_pre_rr
  cdr >> ros_message.norm_force_pre_rr;

  // Member: algorithm1
  cdr >> ros_message.algorithm1;

  // Member: algorithm2
  cdr >> ros_message.algorithm2;

  // Member: algorithm3
  cdr >> ros_message.algorithm3;

  // Member: algorithm4
  cdr >> ros_message.algorithm4;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fsd_common_msgs
get_serialized_size(
  const fsd_common_msgs::msg::Visualization & ros_message,
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
  // Member: lat_error_front_axis
  {
    size_t item_size = sizeof(ros_message.lat_error_front_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lat_error_cog
  {
    size_t item_size = sizeof(ros_message.lat_error_cog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lat_error_rear_axis
  {
    size_t item_size = sizeof(ros_message.lat_error_rear_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_error_front_axis
  {
    size_t item_size = sizeof(ros_message.yaw_error_front_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_error_cog
  {
    size_t item_size = sizeof(ros_message.yaw_error_cog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_error_rear_axis
  {
    size_t item_size = sizeof(ros_message.yaw_error_rear_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_rate_error
  {
    size_t item_size = sizeof(ros_message.yaw_rate_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_error
  {
    size_t item_size = sizeof(ros_message.steering_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vx_error
  {
    size_t item_size = sizeof(ros_message.vx_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vy_error
  {
    size_t item_size = sizeof(ros_message.vy_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sideslip_error
  {
    size_t item_size = sizeof(ros_message.sideslip_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_torq_error_lr
  {
    size_t item_size = sizeof(ros_message.motor_torq_error_lr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_torq_error_rr
  {
    size_t item_size = sizeof(ros_message.motor_torq_error_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_speed_error_lr
  {
    size_t item_size = sizeof(ros_message.motor_speed_error_lr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_speed_error_rr
  {
    size_t item_size = sizeof(ros_message.motor_speed_error_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error1
  {
    size_t item_size = sizeof(ros_message.error1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error2
  {
    size_t item_size = sizeof(ros_message.error2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error3
  {
    size_t item_size = sizeof(ros_message.error3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error4
  {
    size_t item_size = sizeof(ros_message.error4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_ref
  {
    size_t item_size = sizeof(ros_message.yaw_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_ref_front_axis
  {
    size_t item_size = sizeof(ros_message.yaw_ref_front_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_ref_cog
  {
    size_t item_size = sizeof(ros_message.yaw_ref_cog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_ref_rear_axis
  {
    size_t item_size = sizeof(ros_message.yaw_ref_rear_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curvature_ref
  {
    size_t item_size = sizeof(ros_message.curvature_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curvature_ref_front_axis
  {
    size_t item_size = sizeof(ros_message.curvature_ref_front_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curvature_ref_cog
  {
    size_t item_size = sizeof(ros_message.curvature_ref_cog);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curvature_ref_rear_axis
  {
    size_t item_size = sizeof(ros_message.curvature_ref_rear_axis);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vx_ref
  {
    size_t item_size = sizeof(ros_message.vx_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vy_ref
  {
    size_t item_size = sizeof(ros_message.vy_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ax_ref
  {
    size_t item_size = sizeof(ros_message.ax_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ay_ref
  {
    size_t item_size = sizeof(ros_message.ay_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ref1
  {
    size_t item_size = sizeof(ros_message.ref1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ref2
  {
    size_t item_size = sizeof(ros_message.ref2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ref3
  {
    size_t item_size = sizeof(ros_message.ref3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ref4
  {
    size_t item_size = sizeof(ros_message.ref4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_without_compensation
  {
    size_t item_size = sizeof(ros_message.steering_without_compensation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_feedback
  {
    size_t item_size = sizeof(ros_message.steering_feedback);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steering_feedforward
  {
    size_t item_size = sizeof(ros_message.steering_feedforward);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lookforward_length
  {
    size_t item_size = sizeof(ros_message.lookforward_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_rate_pre
  {
    size_t item_size = sizeof(ros_message.yaw_rate_pre);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turning_radius
  {
    size_t item_size = sizeof(ros_message.turning_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: adhesion_coefficient_pre
  {
    size_t item_size = sizeof(ros_message.adhesion_coefficient_pre);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sideslip_pre
  {
    size_t item_size = sizeof(ros_message.sideslip_pre);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: slip_angle_pre_fl
  {
    size_t item_size = sizeof(ros_message.slip_angle_pre_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: slip_angle_pre_fr
  {
    size_t item_size = sizeof(ros_message.slip_angle_pre_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: slip_angle_pre_rl
  {
    size_t item_size = sizeof(ros_message.slip_angle_pre_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: slip_angle_pre_rr
  {
    size_t item_size = sizeof(ros_message.slip_angle_pre_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: norm_force_pre_fl
  {
    size_t item_size = sizeof(ros_message.norm_force_pre_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: norm_force_pre_fr
  {
    size_t item_size = sizeof(ros_message.norm_force_pre_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: norm_force_pre_rl
  {
    size_t item_size = sizeof(ros_message.norm_force_pre_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: norm_force_pre_rr
  {
    size_t item_size = sizeof(ros_message.norm_force_pre_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: algorithm1
  {
    size_t item_size = sizeof(ros_message.algorithm1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: algorithm2
  {
    size_t item_size = sizeof(ros_message.algorithm2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: algorithm3
  {
    size_t item_size = sizeof(ros_message.algorithm3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: algorithm4
  {
    size_t item_size = sizeof(ros_message.algorithm4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fsd_common_msgs
max_serialized_size_Visualization(
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

  // Member: lat_error_front_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lat_error_cog
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lat_error_rear_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_error_front_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_error_cog
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_error_rear_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_rate_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vx_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vy_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sideslip_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor_torq_error_lr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor_torq_error_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor_speed_error_lr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor_speed_error_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: error1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: error2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: error3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: error4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_ref_front_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_ref_cog
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_ref_rear_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: curvature_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: curvature_ref_front_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: curvature_ref_cog
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: curvature_ref_rear_axis
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vx_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vy_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ax_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ay_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ref1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ref2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ref3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ref4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_without_compensation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_feedback
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steering_feedforward
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lookforward_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_rate_pre
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: turning_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: adhesion_coefficient_pre
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sideslip_pre
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: slip_angle_pre_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: slip_angle_pre_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: slip_angle_pre_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: slip_angle_pre_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: norm_force_pre_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: norm_force_pre_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: norm_force_pre_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: norm_force_pre_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: algorithm1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: algorithm2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: algorithm3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: algorithm4
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
    using DataType = fsd_common_msgs::msg::Visualization;
    is_plain =
      (
      offsetof(DataType, algorithm4) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Visualization__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const fsd_common_msgs::msg::Visualization *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Visualization__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<fsd_common_msgs::msg::Visualization *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Visualization__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const fsd_common_msgs::msg::Visualization *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Visualization__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Visualization(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Visualization__callbacks = {
  "fsd_common_msgs::msg",
  "Visualization",
  _Visualization__cdr_serialize,
  _Visualization__cdr_deserialize,
  _Visualization__get_serialized_size,
  _Visualization__max_serialized_size
};

static rosidl_message_type_support_t _Visualization__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Visualization__callbacks,
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
get_message_type_support_handle<fsd_common_msgs::msg::Visualization>()
{
  return &fsd_common_msgs::msg::typesupport_fastrtps_cpp::_Visualization__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fsd_common_msgs, msg, Visualization)() {
  return &fsd_common_msgs::msg::typesupport_fastrtps_cpp::_Visualization__handle;
}

#ifdef __cplusplus
}
#endif
