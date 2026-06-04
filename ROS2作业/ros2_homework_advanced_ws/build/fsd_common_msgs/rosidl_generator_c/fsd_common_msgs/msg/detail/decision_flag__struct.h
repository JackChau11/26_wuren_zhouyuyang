// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/DecisionFlag.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__DECISION_FLAG__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__DECISION_FLAG__STRUCT_H_

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

/// Struct defined in msg/DecisionFlag in the package fsd_common_msgs.
typedef struct fsd_common_msgs__msg__DecisionFlag
{
  std_msgs__msg__Header header;
  /// 该msg用于紧急切换控制策略目前仅作设想，未实装#################
  /// 0为正常，1为规划模块异常--->触发EBS
  uint8_t lap1_state;
  /// 0为正常，1为规划模块异常、SLAM正常--->跟踪首圈轨迹/Ribbon
  ///         2为规划模块异常、SLAM异常(给不出图或者给的图不好)--->触发EBS
  ///         3为规划模块正常、SLAM正常--->但选用Ribbon
  uint8_t lap2_state;
  /// 0表示第二圈根据lap2_state选择控制策略，1表示一直用局部，此flag优先级应高于lap2_state
  uint8_t map_state;
} fsd_common_msgs__msg__DecisionFlag;

// Struct for a sequence of fsd_common_msgs__msg__DecisionFlag.
typedef struct fsd_common_msgs__msg__DecisionFlag__Sequence
{
  fsd_common_msgs__msg__DecisionFlag * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__DecisionFlag__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__DECISION_FLAG__STRUCT_H_
