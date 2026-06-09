// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/EchievMessage.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__ECHIEV_MESSAGE__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__ECHIEV_MESSAGE__STRUCT_H_

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

/// Struct defined in msg/EchievMessage in the package fsd_common_msgs.
/**
  * echiev_perception ,message of echiev perception result 
 */
typedef struct fsd_common_msgs__msg__EchievMessage
{
  /// standard ROS message header
  std_msgs__msg__Header header;
  uint64_t frame_id_num;
  uint64_t ull_timestamp;
  double lat;
  double lon;
  float h;
  float vn;
  float ve;
  float vh;
  float roll;
  float pitch;
  float yaw;
  float acc_x;
  float acc_y;
  float acc_z;
  float gyro_x;
  float gyro_y;
  float gyro_z;
  uint8_t state;
  uint8_t gps_state;
} fsd_common_msgs__msg__EchievMessage;

// Struct for a sequence of fsd_common_msgs__msg__EchievMessage.
typedef struct fsd_common_msgs__msg__EchievMessage__Sequence
{
  fsd_common_msgs__msg__EchievMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__EchievMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__ECHIEV_MESSAGE__STRUCT_H_
