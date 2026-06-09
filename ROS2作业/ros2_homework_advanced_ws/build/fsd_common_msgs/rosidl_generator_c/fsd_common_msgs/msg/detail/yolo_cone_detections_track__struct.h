// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/YoloConeDetectionsTrack.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_DETECTIONS_TRACK__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_DETECTIONS_TRACK__STRUCT_H_

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
#include "fsd_common_msgs/msg/detail/yolo_cone_track__struct.h"

/// Struct defined in msg/YoloConeDetectionsTrack in the package fsd_common_msgs.
typedef struct fsd_common_msgs__msg__YoloConeDetectionsTrack
{
  std_msgs__msg__Header header;
  fsd_common_msgs__msg__YoloConeTrack__Sequence cone_detections;
} fsd_common_msgs__msg__YoloConeDetectionsTrack;

// Struct for a sequence of fsd_common_msgs__msg__YoloConeDetectionsTrack.
typedef struct fsd_common_msgs__msg__YoloConeDetectionsTrack__Sequence
{
  fsd_common_msgs__msg__YoloConeDetectionsTrack * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__YoloConeDetectionsTrack__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__YOLO_CONE_DETECTIONS_TRACK__STRUCT_H_
