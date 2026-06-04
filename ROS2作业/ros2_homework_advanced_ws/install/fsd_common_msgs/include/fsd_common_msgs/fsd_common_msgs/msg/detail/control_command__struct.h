// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/ControlCommand.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_

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
// Member 'throttle'
// Member 'steering_angle'
#include "std_msgs/msg/detail/float32__struct.h"

/// Struct defined in msg/ControlCommand in the package fsd_common_msgs.
typedef struct fsd_common_msgs__msg__ControlCommand
{
  std_msgs__msg__Header header;
  /// Throttle value between [-1, 1]
  std_msgs__msg__Float32 throttle;
  /// Steering angle value between [-1, 1], where left < 0, right > 0
  std_msgs__msg__Float32 steering_angle;
} fsd_common_msgs__msg__ControlCommand;

// Struct for a sequence of fsd_common_msgs__msg__ControlCommand.
typedef struct fsd_common_msgs__msg__ControlCommand__Sequence
{
  fsd_common_msgs__msg__ControlCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__ControlCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__CONTROL_COMMAND__STRUCT_H_
