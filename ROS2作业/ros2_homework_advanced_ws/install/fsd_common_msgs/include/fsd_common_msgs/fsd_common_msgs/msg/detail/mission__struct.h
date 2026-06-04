// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/Mission.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__MISSION__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__MISSION__STRUCT_H_

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
// Member 'mission'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Mission in the package fsd_common_msgs.
/**
  * Header
 */
typedef struct fsd_common_msgs__msg__Mission
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String mission;
  bool finished;
} fsd_common_msgs__msg__Mission;

// Struct for a sequence of fsd_common_msgs__msg__Mission.
typedef struct fsd_common_msgs__msg__Mission__Sequence
{
  fsd_common_msgs__msg__Mission * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__Mission__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__MISSION__STRUCT_H_
