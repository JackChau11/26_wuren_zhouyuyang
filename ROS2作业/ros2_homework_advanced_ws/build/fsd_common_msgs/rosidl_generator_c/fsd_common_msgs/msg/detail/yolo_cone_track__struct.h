// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/YoloConeTrack.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_TRACK__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_TRACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'width'
// Member 'height'
// Member 'color_confidence'
// Member 'pose_confidence'
#include "std_msgs/msg/detail/float32__struct.h"
// Member 'color'
// Member 'tracking_state'
#include "std_msgs/msg/detail/string__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'tracking_id'
// Member 'missing_frams'
#include "std_msgs/msg/detail/u_int8__struct.h"

/// Struct defined in msg/YoloConeTrack in the package fsd_common_msgs.
typedef struct fsd_common_msgs__msg__YoloConeTrack
{
  /// center x
  std_msgs__msg__Float32 x;
  /// center y
  std_msgs__msg__Float32 y;
  /// width
  std_msgs__msg__Float32 width;
  /// height
  std_msgs__msg__Float32 height;
  /// color of cone, 'r' = red, 'b' = blue, 'y' = yellow
  std_msgs__msg__String color;
  /// confidence of cone detect
  std_msgs__msg__Float32 color_confidence;
  /// 3d position with (x,y,z)
  geometry_msgs__msg__Point position;
  std_msgs__msg__Float32 pose_confidence;
  std_msgs__msg__UInt8 tracking_id;
  /// OFF, OK, SEARCHING, TERMINATE
  std_msgs__msg__String tracking_state;
  std_msgs__msg__UInt8 missing_frams;
} fsd_common_msgs__msg__YoloConeTrack;

// Struct for a sequence of fsd_common_msgs__msg__YoloConeTrack.
typedef struct fsd_common_msgs__msg__YoloConeTrack__Sequence
{
  fsd_common_msgs__msg__YoloConeTrack * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__YoloConeTrack__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_TRACK__STRUCT_H_
