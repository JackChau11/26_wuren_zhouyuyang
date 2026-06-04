// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fsd_common_msgs:msg/Time.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
fsd_common_msgs__msg__Time__init(fsd_common_msgs__msg__Time * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fsd_common_msgs__msg__Time__fini(msg);
    return false;
  }
  // frame_id_num
  // sum_compute_time
  // control_compute_time
  // boundary_detector_compute_time
  // line_detector_compute_time
  // skidpad_detector_compute_time
  // lidar_detection_compute_time
  // camera_detection_compute_time
  // fusion_detection_compute_time
  // time2
  // time3
  // time4
  // time5
  // time6
  // time7
  // time8
  // time9
  return true;
}

void
fsd_common_msgs__msg__Time__fini(fsd_common_msgs__msg__Time * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // frame_id_num
  // sum_compute_time
  // control_compute_time
  // boundary_detector_compute_time
  // line_detector_compute_time
  // skidpad_detector_compute_time
  // lidar_detection_compute_time
  // camera_detection_compute_time
  // fusion_detection_compute_time
  // time2
  // time3
  // time4
  // time5
  // time6
  // time7
  // time8
  // time9
}

bool
fsd_common_msgs__msg__Time__are_equal(const fsd_common_msgs__msg__Time * lhs, const fsd_common_msgs__msg__Time * rhs)
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
  // sum_compute_time
  if (lhs->sum_compute_time != rhs->sum_compute_time) {
    return false;
  }
  // control_compute_time
  if (lhs->control_compute_time != rhs->control_compute_time) {
    return false;
  }
  // boundary_detector_compute_time
  if (lhs->boundary_detector_compute_time != rhs->boundary_detector_compute_time) {
    return false;
  }
  // line_detector_compute_time
  if (lhs->line_detector_compute_time != rhs->line_detector_compute_time) {
    return false;
  }
  // skidpad_detector_compute_time
  if (lhs->skidpad_detector_compute_time != rhs->skidpad_detector_compute_time) {
    return false;
  }
  // lidar_detection_compute_time
  if (lhs->lidar_detection_compute_time != rhs->lidar_detection_compute_time) {
    return false;
  }
  // camera_detection_compute_time
  if (lhs->camera_detection_compute_time != rhs->camera_detection_compute_time) {
    return false;
  }
  // fusion_detection_compute_time
  if (lhs->fusion_detection_compute_time != rhs->fusion_detection_compute_time) {
    return false;
  }
  // time2
  if (lhs->time2 != rhs->time2) {
    return false;
  }
  // time3
  if (lhs->time3 != rhs->time3) {
    return false;
  }
  // time4
  if (lhs->time4 != rhs->time4) {
    return false;
  }
  // time5
  if (lhs->time5 != rhs->time5) {
    return false;
  }
  // time6
  if (lhs->time6 != rhs->time6) {
    return false;
  }
  // time7
  if (lhs->time7 != rhs->time7) {
    return false;
  }
  // time8
  if (lhs->time8 != rhs->time8) {
    return false;
  }
  // time9
  if (lhs->time9 != rhs->time9) {
    return false;
  }
  return true;
}

bool
fsd_common_msgs__msg__Time__copy(
  const fsd_common_msgs__msg__Time * input,
  fsd_common_msgs__msg__Time * output)
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
  // sum_compute_time
  output->sum_compute_time = input->sum_compute_time;
  // control_compute_time
  output->control_compute_time = input->control_compute_time;
  // boundary_detector_compute_time
  output->boundary_detector_compute_time = input->boundary_detector_compute_time;
  // line_detector_compute_time
  output->line_detector_compute_time = input->line_detector_compute_time;
  // skidpad_detector_compute_time
  output->skidpad_detector_compute_time = input->skidpad_detector_compute_time;
  // lidar_detection_compute_time
  output->lidar_detection_compute_time = input->lidar_detection_compute_time;
  // camera_detection_compute_time
  output->camera_detection_compute_time = input->camera_detection_compute_time;
  // fusion_detection_compute_time
  output->fusion_detection_compute_time = input->fusion_detection_compute_time;
  // time2
  output->time2 = input->time2;
  // time3
  output->time3 = input->time3;
  // time4
  output->time4 = input->time4;
  // time5
  output->time5 = input->time5;
  // time6
  output->time6 = input->time6;
  // time7
  output->time7 = input->time7;
  // time8
  output->time8 = input->time8;
  // time9
  output->time9 = input->time9;
  return true;
}

fsd_common_msgs__msg__Time *
fsd_common_msgs__msg__Time__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__Time * msg = (fsd_common_msgs__msg__Time *)allocator.allocate(sizeof(fsd_common_msgs__msg__Time), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fsd_common_msgs__msg__Time));
  bool success = fsd_common_msgs__msg__Time__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fsd_common_msgs__msg__Time__destroy(fsd_common_msgs__msg__Time * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fsd_common_msgs__msg__Time__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fsd_common_msgs__msg__Time__Sequence__init(fsd_common_msgs__msg__Time__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__Time * data = NULL;

  if (size) {
    data = (fsd_common_msgs__msg__Time *)allocator.zero_allocate(size, sizeof(fsd_common_msgs__msg__Time), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fsd_common_msgs__msg__Time__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fsd_common_msgs__msg__Time__fini(&data[i - 1]);
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
fsd_common_msgs__msg__Time__Sequence__fini(fsd_common_msgs__msg__Time__Sequence * array)
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
      fsd_common_msgs__msg__Time__fini(&array->data[i]);
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

fsd_common_msgs__msg__Time__Sequence *
fsd_common_msgs__msg__Time__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__Time__Sequence * array = (fsd_common_msgs__msg__Time__Sequence *)allocator.allocate(sizeof(fsd_common_msgs__msg__Time__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fsd_common_msgs__msg__Time__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fsd_common_msgs__msg__Time__Sequence__destroy(fsd_common_msgs__msg__Time__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fsd_common_msgs__msg__Time__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fsd_common_msgs__msg__Time__Sequence__are_equal(const fsd_common_msgs__msg__Time__Sequence * lhs, const fsd_common_msgs__msg__Time__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fsd_common_msgs__msg__Time__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fsd_common_msgs__msg__Time__Sequence__copy(
  const fsd_common_msgs__msg__Time__Sequence * input,
  fsd_common_msgs__msg__Time__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fsd_common_msgs__msg__Time);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fsd_common_msgs__msg__Time * data =
      (fsd_common_msgs__msg__Time *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fsd_common_msgs__msg__Time__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fsd_common_msgs__msg__Time__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fsd_common_msgs__msg__Time__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
