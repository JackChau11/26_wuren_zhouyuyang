// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_

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
// Member 'trajectory_point'
#include "fsd_common_msgs/msg/detail/car_state__struct.h"

/// Struct defined in msg/TrajectoryPoint in the package fsd_common_msgs.
typedef struct fsd_common_msgs__msg__TrajectoryPoint
{
  std_msgs__msg__Header header;
  /// Velocities
  fsd_common_msgs__msg__CarState__Sequence trajectory_point;
} fsd_common_msgs__msg__TrajectoryPoint;

// Struct for a sequence of fsd_common_msgs__msg__TrajectoryPoint.
typedef struct fsd_common_msgs__msg__TrajectoryPoint__Sequence
{
  fsd_common_msgs__msg__TrajectoryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__TrajectoryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__TRAJECTORY_POINT__STRUCT_H_
