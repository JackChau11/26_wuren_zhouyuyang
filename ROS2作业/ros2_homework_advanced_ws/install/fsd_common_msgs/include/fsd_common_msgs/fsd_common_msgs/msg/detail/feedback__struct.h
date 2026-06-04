// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_

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

/// Struct defined in msg/Feedback in the package fsd_common_msgs.
/**
  * car feedback data. 
 */
typedef struct fsd_common_msgs__msg__Feedback
{
  /// standard ROS message header
  std_msgs__msg__Header header;
  uint64_t frame_id_num;
  float wheel_speed_fl;
  float wheel_speed_fr;
  float wheel_speed_rl;
  float wheel_speed_rr;
  float motor_command_speed_rl;
  float motor_command_speed_rr;
  float motor_return_speed_rl;
  float motor_return_speed_rr;
  float motor_command_torq_rl;
  float motor_command_torq_rr;
  float motor_return_torq_rl;
  float motor_return_torq_rr;
} fsd_common_msgs__msg__Feedback;

// Struct for a sequence of fsd_common_msgs__msg__Feedback.
typedef struct fsd_common_msgs__msg__Feedback__Sequence
{
  fsd_common_msgs__msg__Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__Feedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__FEEDBACK__STRUCT_H_
