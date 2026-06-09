// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fsd_common_msgs:msg/AsensingMessage.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__ASENSING_MESSAGE__STRUCT_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__ASENSING_MESSAGE__STRUCT_H_

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

/// Struct defined in msg/AsensingMessage in the package fsd_common_msgs.
/**
  * # message of Asensing perception result.It is INS data. 
  * Header header         # standard ROS message header
  * uint64 frame_id_num  
  * float32 acc_x
  * float32 acc_y
  * float32 acc_z
  * float32 gyro_x
  * float32 gyro_y
  * float32 gyro_z
  * float32 pitch
  * float32 roll
  * float32 heading_angle
  * float32 h
  * uint64 ull_timestamp
  * float64 lat
  * float64 lon
  * float32 vn
  * float32 ve
  * float32 vh
  * uint32 gps_flag_pos
  * uint32 num_sv
  * uint32 gps_flag_heading
  * uint64 gps_age
  * uint32 car_status
  * uint32 status
  * float32 std_lat
  * float32 std_lon
  * float32 std_local_height
  * float32 std_heading
  * float32 utc_year
  * float32 utc_month
  * float32 utc_day
  * float32 utc_hour
  * float32 utc_min
  * float32 utc_sec
  * float64 utc_msec
 */
typedef struct fsd_common_msgs__msg__AsensingMessage
{
  /// message of Asensing perception result.It is INS data.
  /// standard ROS message header
  std_msgs__msg__Header header;
  uint64_t frame_id_num;
  double lat;
  double lon;
  double h;
  double vn;
  double ve;
  double vh;
  double roll;
  double pitch;
  double heading_angle;
  double gyro_x;
  double gyro_y;
  double gyro_z;
  double acc_x;
  double acc_y;
  double acc_z;
  float std_lat;
  float std_lon;
  float std_local_height;
  float north_velocity_std;
  float east_velocity_std;
  float ground_velocity_std;
  float roll_std;
  float pitch_std;
  float std_heading;
  uint32_t status;
  uint32_t gps_flag_pos;
  double gps_week_number;
  double ull_timestamp;
  float temperature;
  uint32_t car_status;
  uint32_t gps_flag_heading;
  uint32_t num_sv;
} fsd_common_msgs__msg__AsensingMessage;

// Struct for a sequence of fsd_common_msgs__msg__AsensingMessage.
typedef struct fsd_common_msgs__msg__AsensingMessage__Sequence
{
  fsd_common_msgs__msg__AsensingMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fsd_common_msgs__msg__AsensingMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__ASENSING_MESSAGE__STRUCT_H_
