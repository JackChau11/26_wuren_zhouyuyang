// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/CarStateDt.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__CAR_STATE_DT__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__CAR_STATE_DT__STRUCT_H_

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
// Member 'car_state_dt'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/CarStateDt in the package fsd_common_msgs.
typedef struct fsd_common_msgs__msg__CarStateDt
{
  std_msgs__msg__Header header;
  /// Velocity in x, y, theta
  geometry_msgs__msg__Pose2D car_state_dt;
} fsd_common_msgs__msg__CarStateDt;

// Struct for a sequence of fsd_common_msgs__msg__CarStateDt.
typedef struct fsd_common_msgs__msg__CarStateDt__Sequence
{
  fsd_common_msgs__msg__CarStateDt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__CarStateDt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__CAR_STATE_DT__STRUCT_H_
