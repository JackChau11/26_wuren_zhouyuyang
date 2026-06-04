// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fsd_common_msgs:msg/AsensingMessage.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/asensing_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
fsd_common_msgs__msg__AsensingMessage__init(fsd_common_msgs__msg__AsensingMessage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fsd_common_msgs__msg__AsensingMessage__fini(msg);
    return false;
  }
  // frame_id_num
  // lat
  // lon
  // h
  // vn
  // ve
  // vh
  // roll
  // pitch
  // heading_angle
  // gyro_x
  // gyro_y
  // gyro_z
  // acc_x
  // acc_y
  // acc_z
  // std_lat
  // std_lon
  // std_local_height
  // north_velocity_std
  // east_velocity_std
  // ground_velocity_std
  // roll_std
  // pitch_std
  // std_heading
  // status
  // gps_flag_pos
  // gps_week_number
  // ull_timestamp
  // temperature
  // car_status
  // gps_flag_heading
  // num_sv
  return true;
}

void
fsd_common_msgs__msg__AsensingMessage__fini(fsd_common_msgs__msg__AsensingMessage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // frame_id_num
  // lat
  // lon
  // h
  // vn
  // ve
  // vh
  // roll
  // pitch
  // heading_angle
  // gyro_x
  // gyro_y
  // gyro_z
  // acc_x
  // acc_y
  // acc_z
  // std_lat
  // std_lon
  // std_local_height
  // north_velocity_std
  // east_velocity_std
  // ground_velocity_std
  // roll_std
  // pitch_std
  // std_heading
  // status
  // gps_flag_pos
  // gps_week_number
  // ull_timestamp
  // temperature
  // car_status
  // gps_flag_heading
  // num_sv
}

bool
fsd_common_msgs__msg__AsensingMessage__are_equal(const fsd_common_msgs__msg__AsensingMessage * lhs, const fsd_common_msgs__msg__AsensingMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // frame_id_num
  if (lhs->frame_id_num != rhs->frame_id_num) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // h
  if (lhs->h != rhs->h) {
    return false;
  }
  // vn
  if (lhs->vn != rhs->vn) {
    return false;
  }
  // ve
  if (lhs->ve != rhs->ve) {
    return false;
  }
  // vh
  if (lhs->vh != rhs->vh) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // heading_angle
  if (lhs->heading_angle != rhs->heading_angle) {
    return false;
  }
  // gyro_x
  if (lhs->gyro_x != rhs->gyro_x) {
    return false;
  }
  // gyro_y
  if (lhs->gyro_y != rhs->gyro_y) {
    return false;
  }
  // gyro_z
  if (lhs->gyro_z != rhs->gyro_z) {
    return false;
  }
  // acc_x
  if (lhs->acc_x != rhs->acc_x) {
    return false;
  }
  // acc_y
  if (lhs->acc_y != rhs->acc_y) {
    return false;
  }
  // acc_z
  if (lhs->acc_z != rhs->acc_z) {
    return false;
  }
  // std_lat
  if (lhs->std_lat != rhs->std_lat) {
    return false;
  }
  // std_lon
  if (lhs->std_lon != rhs->std_lon) {
    return false;
  }
  // std_local_height
  if (lhs->std_local_height != rhs->std_local_height) {
    return false;
  }
  // north_velocity_std
  if (lhs->north_velocity_std != rhs->north_velocity_std) {
    return false;
  }
  // east_velocity_std
  if (lhs->east_velocity_std != rhs->east_velocity_std) {
    return false;
  }
  // ground_velocity_std
  if (lhs->ground_velocity_std != rhs->ground_velocity_std) {
    return false;
  }
  // roll_std
  if (lhs->roll_std != rhs->roll_std) {
    return false;
  }
  // pitch_std
  if (lhs->pitch_std != rhs->pitch_std) {
    return false;
  }
  // std_heading
  if (lhs->std_heading != rhs->std_heading) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // gps_flag_pos
  if (lhs->gps_flag_pos != rhs->gps_flag_pos) {
    return false;
  }
  // gps_week_number
  if (lhs->gps_week_number != rhs->gps_week_number) {
    return false;
  }
  // ull_timestamp
  if (lhs->ull_timestamp != rhs->ull_timestamp) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // car_status
  if (lhs->car_status != rhs->car_status) {
    return false;
  }
  // gps_flag_heading
  if (lhs->gps_flag_heading != rhs->gps_flag_heading) {
    return false;
  }
  // num_sv
  if (lhs->num_sv != rhs->num_sv) {
    return false;
  }
  return true;
}

bool
fsd_common_msgs__msg__AsensingMessage__copy(
  const fsd_common_msgs__msg__AsensingMessage * input,
  fsd_common_msgs__msg__AsensingMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // frame_id_num
  output->frame_id_num = input->frame_id_num;
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // h
  output->h = input->h;
  // vn
  output->vn = input->vn;
  // ve
  output->ve = input->ve;
  // vh
  output->vh = input->vh;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // heading_angle
  output->heading_angle = input->heading_angle;
  // gyro_x
  output->gyro_x = input->gyro_x;
  // gyro_y
  output->gyro_y = input->gyro_y;
  // gyro_z
  output->gyro_z = input->gyro_z;
  // acc_x
  output->acc_x = input->acc_x;
  // acc_y
  output->acc_y = input->acc_y;
  // acc_z
  output->acc_z = input->acc_z;
  // std_lat
  output->std_lat = input->std_lat;
  // std_lon
  output->std_lon = input->std_lon;
  // std_local_height
  output->std_local_height = input->std_local_height;
  // north_velocity_std
  output->north_velocity_std = input->north_velocity_std;
  // east_velocity_std
  output->east_velocity_std = input->east_velocity_std;
  // ground_velocity_std
  output->ground_velocity_std = input->ground_velocity_std;
  // roll_std
  output->roll_std = input->roll_std;
  // pitch_std
  output->pitch_std = input->pitch_std;
  // std_heading
  output->std_heading = input->std_heading;
  // status
  output->status = input->status;
  // gps_flag_pos
  output->gps_flag_pos = input->gps_flag_pos;
  // gps_week_number
  output->gps_week_number = input->gps_week_number;
  // ull_timestamp
  output->ull_timestamp = input->ull_timestamp;
  // temperature
  output->temperature = input->temperature;
  // car_status
  output->car_status = input->car_status;
  // gps_flag_heading
  output->gps_flag_heading = input->gps_flag_heading;
  // num_sv
  output->num_sv = input->num_sv;
  return true;
}

fsd_common_msgs__msg__AsensingMessage *
fsd_common_msgs__msg__AsensingMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__AsensingMessage * msg = (fsd_common_msgs__msg__AsensingMessage *)allocator.allocate(sizeof(fsd_common_msgs__msg__AsensingMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fsd_common_msgs__msg__AsensingMessage));
  bool success = fsd_common_msgs__msg__AsensingMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fsd_common_msgs__msg__AsensingMessage__destroy(fsd_common_msgs__msg__AsensingMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fsd_common_msgs__msg__AsensingMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fsd_common_msgs__msg__AsensingMessage__Sequence__init(fsd_common_msgs__msg__AsensingMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__AsensingMessage * data = NULL;

  if (size) {
    data = (fsd_common_msgs__msg__AsensingMessage *)allocator.zero_allocate(size, sizeof(fsd_common_msgs__msg__AsensingMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fsd_common_msgs__msg__AsensingMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fsd_common_msgs__msg__AsensingMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fsd_common_msgs__msg__AsensingMessage__Sequence__fini(fsd_common_msgs__msg__AsensingMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fsd_common_msgs__msg__AsensingMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fsd_common_msgs__msg__AsensingMessage__Sequence *
fsd_common_msgs__msg__AsensingMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__AsensingMessage__Sequence * array = (fsd_common_msgs__msg__AsensingMessage__Sequence *)allocator.allocate(sizeof(fsd_common_msgs__msg__AsensingMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fsd_common_msgs__msg__AsensingMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fsd_common_msgs__msg__AsensingMessage__Sequence__destroy(fsd_common_msgs__msg__AsensingMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fsd_common_msgs__msg__AsensingMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fsd_common_msgs__msg__AsensingMessage__Sequence__are_equal(const fsd_common_msgs__msg__AsensingMessage__Sequence * lhs, const fsd_common_msgs__msg__AsensingMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fsd_common_msgs__msg__AsensingMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fsd_common_msgs__msg__AsensingMessage__Sequence__copy(
  const fsd_common_msgs__msg__AsensingMessage__Sequence * input,
  fsd_common_msgs__msg__AsensingMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fsd_common_msgs__msg__AsensingMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fsd_common_msgs__msg__AsensingMessage * data =
      (fsd_common_msgs__msg__AsensingMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fsd_common_msgs__msg__AsensingMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fsd_common_msgs__msg__AsensingMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fsd_common_msgs__msg__AsensingMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
