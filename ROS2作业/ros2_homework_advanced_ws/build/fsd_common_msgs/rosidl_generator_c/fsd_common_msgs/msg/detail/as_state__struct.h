// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/AsState.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__AS_STATE__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__AS_STATE__STRUCT_H_

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

/// Struct defined in msg/AsState in the package fsd_common_msgs.
/**
  * Header
 */
typedef struct fsd_common_msgs__msg__AsState
{
  std_msgs__msg__Header header;
  /// 指示当前任务
  rosidl_runtime_c__String mission;
  /// 进行记圈，指示当前的圈数
  uint8_t which_lap;
  /// 指示达到指定停车位置。0表示未到达，1表示到达。随后速度设为0，同时刹车
  uint8_t end;
  /// uint8 stop#指示是否停车。1表示停车，随后通过气瓶进行制动
  /// 指示任务完成。0表示未完成，1为任务完成
  uint8_t finished;
  /// 指示相机状态。0为正常，1为断线或异常
  uint8_t camera_state;
  /// 指示激光雷达状态。0为正常，1为断线或异常
  uint8_t lidar_state;
  /// 指示组合惯导状态。0为正常，1为断线或异常
  uint8_t ins_state;
  /// 指示相机、激光雷达、组合惯导状态，同时正常即为0，有一个传感器断线即为1
  uint8_t sensor_state;
  /// 指示目前无人系统是否准备好，即能否正常接受并处理所有传感器的数据，并正确输出控制指令。0代表正常
  uint8_t ready;
  /// 接收到go信号后开始计时
  float count_time;
} fsd_common_msgs__msg__AsState;

// Struct for a sequence of fsd_common_msgs__msg__AsState.
typedef struct fsd_common_msgs__msg__AsState__Sequence
{
  fsd_common_msgs__msg__AsState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__AsState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__AS_STATE__STRUCT_H_
