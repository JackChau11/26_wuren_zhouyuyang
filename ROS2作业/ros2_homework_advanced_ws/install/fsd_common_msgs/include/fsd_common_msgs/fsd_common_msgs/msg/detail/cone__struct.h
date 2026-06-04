// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/Cone.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__CONE__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__CONE__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Cone in the package fsd_common_msgs.
typedef struct fsd_common_msgs__msg__Cone
{
  geometry_msgs__msg__Point position;
  rosidl_runtime_c__String color;
  double pose_confidence;
  double color_confidence;
} fsd_common_msgs__msg__Cone;

// Struct for a sequence of fsd_common_msgs__msg__Cone.
typedef struct fsd_common_msgs__msg__Cone__Sequence
{
  fsd_common_msgs__msg__Cone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__Cone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__CONE__STRUCT_H_
