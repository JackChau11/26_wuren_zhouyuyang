// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/SkidpadGlobalCenterLine.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__SKIDPAD_GLOBAL_CENTER_LINE__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__SKIDPAD_GLOBAL_CENTER_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'global_path'
#include "nav_msgs/msg/detail/path__struct.h"

/// Struct defined in msg/SkidpadGlobalCenterLine in the package fsd_common_msgs.
typedef struct fsd_common_msgs__msg__SkidpadGlobalCenterLine
{
  nav_msgs__msg__Path global_path;
  bool is_reach_mid;
} fsd_common_msgs__msg__SkidpadGlobalCenterLine;

// Struct for a sequence of fsd_common_msgs__msg__SkidpadGlobalCenterLine.
typedef struct fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence
{
  fsd_common_msgs__msg__SkidpadGlobalCenterLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__SKIDPAD_GLOBAL_CENTER_LINE__STRUCT_H_
