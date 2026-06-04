// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/DrivingDynamics.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__DRIVING_DYNAMICS__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__DRIVING_DYNAMICS__STRUCT_H_

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

/// Struct defined in msg/DrivingDynamics in the package fsd_common_msgs.
typedef struct fsd_common_msgs__msg__DrivingDynamics
{
  std_msgs__msg__Header header;
  /// 此msg用来发送特定数据给CAN_send节点，再发到canB总线
  float speed_target;
  float speed_actual;
  float steering_angle_target;
  float steering_angle_actual;
  float brake_hydr_target;
  float brake_hydr_actual;
  float motor_moment_target;
  float motor_moment_actual;
  float acceleration_longitudinal;
  float acceleration_lateral;
  float yaw_rate;
} fsd_common_msgs__msg__DrivingDynamics;

// Struct for a sequence of fsd_common_msgs__msg__DrivingDynamics.
typedef struct fsd_common_msgs__msg__DrivingDynamics__Sequence
{
  fsd_common_msgs__msg__DrivingDynamics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__DrivingDynamics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__DRIVING_DYNAMICS__STRUCT_H_
