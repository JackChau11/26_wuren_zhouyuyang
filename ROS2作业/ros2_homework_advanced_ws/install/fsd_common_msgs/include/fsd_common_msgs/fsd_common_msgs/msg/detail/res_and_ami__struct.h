// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/ResAndAmi.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__RES_AND_AMI__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__RES_AND_AMI__STRUCT_H_

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

/// Struct defined in msg/ResAndAmi in the package fsd_common_msgs.
/**
  * Header
 */
typedef struct fsd_common_msgs__msg__ResAndAmi
{
  std_msgs__msg__Header header;
  /// 指示res状态，1代表“go”信号
  uint8_t res_state;
  /// 指示AMI选择的无人驾驶任务。0.inspection;1.ebs_test;2.acceleration;3.skidpad;4.trackdrive
  rosidl_runtime_c__String mission;
} fsd_common_msgs__msg__ResAndAmi;

// Struct for a sequence of fsd_common_msgs__msg__ResAndAmi.
typedef struct fsd_common_msgs__msg__ResAndAmi__Sequence
{
  fsd_common_msgs__msg__ResAndAmi * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__ResAndAmi__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__RES_AND_AMI__STRUCT_H_
