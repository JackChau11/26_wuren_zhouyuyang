// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fsd_common_msgs:msg/EchievMessage.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/echiev_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
fsd_common_msgs__msg__EchievMessage__init(fsd_common_msgs__msg__EchievMessage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fsd_common_msgs__msg__EchievMessage__fini(msg);
    return false;
  }
  // frame_id_num
  // ull_timestamp
  // lat
  // lon
  // h
  // vn
  // ve
  // vh
  // roll
  // pitch
  // yaw
  // acc_x
  // acc_y
  // acc_z
  // gyro_x
  // gyro_y
  // gyro_z
  // state
  // gps_state
  return true;
}

void
fsd_common_msgs__msg__EchievMessage__fini(fsd_common_msgs__msg__EchievMessage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // frame_id_num
  // ull_timestamp
  // lat
  // lon
  // h
  // vn
  // ve
  // vh
  // roll
  // pitch
  // yaw
  // acc_x
  // acc_y
  // acc_z
  // gyro_x
  // gyro_y
  // gyro_z
  // state
  // gps_state
}

bool
fsd_common_msgs__msg__EchievMessage__are_equal(const fsd_common_msgs__msg__EchievMessage * lhs, const fsd_common_msgs__msg__EchievMessage * rhs)
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
  // ull_timestamp
  if (lhs->ull_timestamp != rhs->ull_timestamp) {
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
  // yaw
  if (lhs->yaw != rhs->yaw) {
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
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // gps_state
  if (lhs->gps_state != rhs->gps_state) {
    return false;
  }
  return true;
}

bool
fsd_common_msgs__msg__EchievMessage__copy(
  const fsd_common_msgs__msg__EchievMessage * input,
  fsd_common_msgs__msg__EchievMessage * output)
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
  // ull_timestamp
  output->ull_timestamp = input->ull_timestamp;
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
  // yaw
  output->yaw = input->yaw;
  // acc_x
  output->acc_x = input->acc_x;
  // acc_y
  output->acc_y = input->acc_y;
  // acc_z
  output->acc_z = input->acc_z;
  // gyro_x
  output->gyro_x = input->gyro_x;
  // gyro_y
  output->gyro_y = input->gyro_y;
  // gyro_z
  output->gyro_z = input->gyro_z;
  // state
  output->state = input->state;
  // gps_state
  output->gps_state = input->gps_state;
  return true;
}

fsd_common_msgs__msg__EchievMessage *
fsd_common_msgs__msg__EchievMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__EchievMessage * msg = (fsd_common_msgs__msg__EchievMessage *)allocator.allocate(sizeof(fsd_common_msgs__msg__EchievMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fsd_common_msgs__msg__EchievMessage));
  bool success = fsd_common_msgs__msg__EchievMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fsd_common_msgs__msg__EchievMessage__destroy(fsd_common_msgs__msg__EchievMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fsd_common_msgs__msg__EchievMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fsd_common_msgs__msg__EchievMessage__Sequence__init(fsd_common_msgs__msg__EchievMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__EchievMessage * data = NULL;

  if (size) {
    data = (fsd_common_msgs__msg__EchievMessage *)allocator.zero_allocate(size, sizeof(fsd_common_msgs__msg__EchievMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fsd_common_msgs__msg__EchievMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fsd_common_msgs__msg__EchievMessage__fini(&data[i - 1]);
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
fsd_common_msgs__msg__EchievMessage__Sequence__fini(fsd_common_msgs__msg__EchievMessage__Sequence * array)
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
      fsd_common_msgs__msg__EchievMessage__fini(&array->data[i]);
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

fsd_common_msgs__msg__EchievMessage__Sequence *
fsd_common_msgs__msg__EchievMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__EchievMessage__Sequence * array = (fsd_common_msgs__msg__EchievMessage__Sequence *)allocator.allocate(sizeof(fsd_common_msgs__msg__EchievMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fsd_common_msgs__msg__EchievMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fsd_common_msgs__msg__EchievMessage__Sequence__destroy(fsd_common_msgs__msg__EchievMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fsd_common_msgs__msg__EchievMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fsd_common_msgs__msg__EchievMessage__Sequence__are_equal(const fsd_common_msgs__msg__EchievMessage__Sequence * lhs, const fsd_common_msgs__msg__EchievMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fsd_common_msgs__msg__EchievMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fsd_common_msgs__msg__EchievMessage__Sequence__copy(
  const fsd_common_msgs__msg__EchievMessage__Sequence * input,
  fsd_common_msgs__msg__EchievMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fsd_common_msgs__msg__EchievMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fsd_common_msgs__msg__EchievMessage * data =
      (fsd_common_msgs__msg__EchievMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fsd_common_msgs__msg__EchievMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fsd_common_msgs__msg__EchievMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fsd_common_msgs__msg__EchievMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
