// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/Visualization.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__VISUALIZATION__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__VISUALIZATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Visualization in the package fsd_common_msgs.
/**
  * visualization data 
 */
typedef struct fsd_common_msgs__msg__Visualization
{
  /// standard ROS message header
  std_msgs__msg__Header header;
  uint64_t frame_id_num;
  /// error data
  float lat_error_front_axis;
  float lat_error_cog;
  float lat_error_rear_axis;
  float yaw_error_front_axis;
  float yaw_error_cog;
  float yaw_error_rear_axis;
  float yaw_rate_error;
  float steering_error;
  float vx_error;
  float vy_error;
  float sideslip_error;
  float motor_torq_error_lr;
  float motor_torq_error_rr;
  float motor_speed_error_lr;
  float motor_speed_error_rr;
  float error1;
  float error2;
  float error3;
  float error4;
  /// ref visualization
  float yaw_ref;
  float yaw_ref_front_axis;
  float yaw_ref_cog;
  float yaw_ref_rear_axis;
  float curvature_ref;
  float curvature_ref_front_axis;
  float curvature_ref_cog;
  float curvature_ref_rear_axis;
  float vx_ref;
  float vy_ref;
  float ax_ref;
  float ay_ref;
  float ref1;
  float ref2;
  float ref3;
  float ref4;
  /// algorithm data visualization
  float steering_without_compensation;
  float steering_feedback;
  float steering_feedforward;
  float lookforward_length;
  float yaw_rate_pre;
  float turning_radius;
  float adhesion_coefficient_pre;
  float sideslip_pre;
  float slip_angle_pre_fl;
  float slip_angle_pre_fr;
  float slip_angle_pre_rl;
  float slip_angle_pre_rr;
  float norm_force_pre_fl;
  float norm_force_pre_fr;
  float norm_force_pre_rl;
  float norm_force_pre_rr;
  float algorithm1;
  float algorithm2;
  float algorithm3;
  float algorithm4;
} fsd_common_msgs__msg__Visualization;

// Struct for a sequence of fsd_common_msgs__msg__Visualization.
typedef struct fsd_common_msgs__msg__Visualization__Sequence
{
  fsd_common_msgs__msg__Visualization * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__Visualization__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__VISUALIZATION__STRUCT_H_
