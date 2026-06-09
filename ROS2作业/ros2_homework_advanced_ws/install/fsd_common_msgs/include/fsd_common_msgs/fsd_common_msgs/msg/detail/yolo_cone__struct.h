// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/YoloCone.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE__STRUCT_H_

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
#include "std_msgs/msg/detail/float32__struct.h"
// Member 'color'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in msg/YoloCone in the package fsd_common_msgs.
typedef struct fsd_common_msgs__msg__YoloCone
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
} fsd_common_msgs__msg__YoloCone;

// Struct for a sequence of fsd_common_msgs__msg__YoloCone.
typedef struct fsd_common_msgs__msg__YoloCone__Sequence
{
  fsd_common_msgs__msg__YoloCone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__YoloCone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE__STRUCT_H_
