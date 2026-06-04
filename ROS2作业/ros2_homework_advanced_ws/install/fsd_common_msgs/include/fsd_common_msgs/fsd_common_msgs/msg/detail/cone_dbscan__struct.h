// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/ConeDbscan.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__CONE_DBSCAN__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__CONE_DBSCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'color'
#include "std_msgs/msg/detail/string__struct.h"
// Member 'pose_confidence'
// Member 'color_confidence'
#include "std_msgs/msg/detail/float32__struct.h"
// Member 'corepts'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ConeDbscan in the package fsd_common_msgs.
typedef struct fsd_common_msgs__msg__ConeDbscan
{
  /// coordinate of cone in [x, y]
  geometry_msgs__msg__Point position;
  /// color of cone, 'b' = blue, 'y' = yellow, 'o' = orange
  std_msgs__msg__String color;
  /// confidence of cone detect
  std_msgs__msg__Float32 pose_confidence;
  /// confidence of cone detect
  std_msgs__msg__Float32 color_confidence;
  uint8_t cluster;
  uint8_t point_type;
  uint8_t pts;
  uint8_t visited;
  rosidl_runtime_c__uint8__Sequence corepts;
} fsd_common_msgs__msg__ConeDbscan;

// Struct for a sequence of fsd_common_msgs__msg__ConeDbscan.
typedef struct fsd_common_msgs__msg__ConeDbscan__Sequence
{
  fsd_common_msgs__msg__ConeDbscan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__ConeDbscan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__CONE_DBSCAN__STRUCT_H_
