// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__TRACK__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__TRACK__STRUCT_H_

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
// Member 'cones_left'
// Member 'cones_right'
// Member 'cones_orange'
// Member 'cones_orange_big'
// Member 'tk_device_start'
// Member 'tk_device_end'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Track in the package fsd_common_msgs.
typedef struct fsd_common_msgs__msg__Track
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Point__Sequence cones_left;
  geometry_msgs__msg__Point__Sequence cones_right;
  geometry_msgs__msg__Point__Sequence cones_orange;
  geometry_msgs__msg__Point__Sequence cones_orange_big;
  geometry_msgs__msg__Point__Sequence tk_device_start;
  geometry_msgs__msg__Point__Sequence tk_device_end;
} fsd_common_msgs__msg__Track;

// Struct for a sequence of fsd_common_msgs__msg__Track.
typedef struct fsd_common_msgs__msg__Track__Sequence
{
  fsd_common_msgs__msg__Track * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__Track__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__TRACK__STRUCT_H_
