// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__TIME__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__TIME__STRUCT_H_

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

/// Struct defined in msg/Time in the package fsd_common_msgs.
/**
  * message of Asensing perception result.It is INS data. 
 */
typedef struct fsd_common_msgs__msg__Time
{
  /// standard ROS message header
  std_msgs__msg__Header header;
  uint64_t frame_id_num;
  float sum_compute_time;
  float control_compute_time;
  float boundary_detector_compute_time;
  float line_detector_compute_time;
  float skidpad_detector_compute_time;
  float lidar_detection_compute_time;
  float camera_detection_compute_time;
  float fusion_detection_compute_time;
  float time2;
  float time3;
  float time4;
  float time5;
  float time6;
  float time7;
  float time8;
  float time9;
} fsd_common_msgs__msg__Time;

// Struct for a sequence of fsd_common_msgs__msg__Time.
typedef struct fsd_common_msgs__msg__Time__Sequence
{
  fsd_common_msgs__msg__Time * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__Time__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__TIME__STRUCT_H_
