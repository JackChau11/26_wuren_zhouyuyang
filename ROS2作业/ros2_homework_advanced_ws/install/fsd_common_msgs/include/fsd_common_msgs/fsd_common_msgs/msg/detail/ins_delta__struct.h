// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/InsDelta.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__INS_DELTA__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__INS_DELTA__STRUCT_H_

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

/// Struct defined in msg/InsDelta in the package fsd_common_msgs.
typedef struct fsd_common_msgs__msg__InsDelta
{
  std_msgs__msg__Header header;
  float total_omega;
  float total_distance_x;
  float total_distance_y;
} fsd_common_msgs__msg__InsDelta;

// Struct for a sequence of fsd_common_msgs__msg__InsDelta.
typedef struct fsd_common_msgs__msg__InsDelta__Sequence
{
  fsd_common_msgs__msg__InsDelta * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__InsDelta__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__INS_DELTA__STRUCT_H_
