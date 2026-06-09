// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/Map.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__MAP__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__MAP__STRUCT_H_

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
// Member 'cone_yellow'
// Member 'cone_blue'
// Member 'cone_red'
// Member 'cone_unknown'
#include "fsd_common_msgs/msg/detail/cone__struct.h"

/// Struct defined in msg/Map in the package fsd_common_msgs.
typedef struct fsd_common_msgs__msg__Map
{
  std_msgs__msg__Header header;
  fsd_common_msgs__msg__Cone__Sequence cone_yellow;
  fsd_common_msgs__msg__Cone__Sequence cone_blue;
  fsd_common_msgs__msg__Cone__Sequence cone_red;
  fsd_common_msgs__msg__Cone__Sequence cone_unknown;
} fsd_common_msgs__msg__Map;

// Struct for a sequence of fsd_common_msgs__msg__Map.
typedef struct fsd_common_msgs__msg__Map__Sequence
{
  fsd_common_msgs__msg__Map * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__Map__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__MAP__STRUCT_H_
