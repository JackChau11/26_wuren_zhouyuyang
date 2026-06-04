// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/ConeDetectionsDbscan.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__CONE_DETECTIONS_DBSCAN__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__CONE_DETECTIONS_DBSCAN__STRUCT_H_

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
// Member 'cone_detections'
#include "fsd_common_msgs/msg/detail/cone_dbscan__struct.h"

/// Struct defined in msg/ConeDetectionsDbscan in the package fsd_common_msgs.
typedef struct fsd_common_msgs__msg__ConeDetectionsDbscan
{
  std_msgs__msg__Header header;
  fsd_common_msgs__msg__ConeDbscan__Sequence cone_detections;
} fsd_common_msgs__msg__ConeDetectionsDbscan;

// Struct for a sequence of fsd_common_msgs__msg__ConeDetectionsDbscan.
typedef struct fsd_common_msgs__msg__ConeDetectionsDbscan__Sequence
{
  fsd_common_msgs__msg__ConeDetectionsDbscan * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__ConeDetectionsDbscan__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__CONE_DETECTIONS_DBSCAN__STRUCT_H_
