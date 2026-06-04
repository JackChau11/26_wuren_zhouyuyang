// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fsd_common_msgs:msg/Feedback.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
fsd_common_msgs__msg__Feedback__init(fsd_common_msgs__msg__Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fsd_common_msgs__msg__Feedback__fini(msg);
    return false;
  }
  // frame_id_num
  // wheel_speed_fl
  // wheel_speed_fr
  // wheel_speed_rl
  // wheel_speed_rr
  // motor_command_speed_rl
  // motor_command_speed_rr
  // motor_return_speed_rl
  // motor_return_speed_rr
  // motor_command_torq_rl
  // motor_command_torq_rr
  // motor_return_torq_rl
  // motor_return_torq_rr
  return true;
}

void
fsd_common_msgs__msg__Feedback__fini(fsd_common_msgs__msg__Feedback * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // frame_id_num
  // wheel_speed_fl
  // wheel_speed_fr
  // wheel_speed_rl
  // wheel_speed_rr
  // motor_command_speed_rl
  // motor_command_speed_rr
  // motor_return_speed_rl
  // motor_return_speed_rr
  // motor_command_torq_rl
  // motor_command_torq_rr
  // motor_return_torq_rl
  // motor_return_torq_rr
}

bool
fsd_common_msgs__msg__Feedback__are_equal(const fsd_common_msgs__msg__Feedback * lhs, const fsd_common_msgs__msg__Feedback * rhs)
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
  // wheel_speed_fl
  if (lhs->wheel_speed_fl != rhs->wheel_speed_fl) {
    return false;
  }
  // wheel_speed_fr
  if (lhs->wheel_speed_fr != rhs->wheel_speed_fr) {
    return false;
  }
  // wheel_speed_rl
  if (lhs->wheel_speed_rl != rhs->wheel_speed_rl) {
    return false;
  }
  // wheel_speed_rr
  if (lhs->wheel_speed_rr != rhs->wheel_speed_rr) {
    return false;
  }
  // motor_command_speed_rl
  if (lhs->motor_command_speed_rl != rhs->motor_command_speed_rl) {
    return false;
  }
  // motor_command_speed_rr
  if (lhs->motor_command_speed_rr != rhs->motor_command_speed_rr) {
    return false;
  }
  // motor_return_speed_rl
  if (lhs->motor_return_speed_rl != rhs->motor_return_speed_rl) {
    return false;
  }
  // motor_return_speed_rr
  if (lhs->motor_return_speed_rr != rhs->motor_return_speed_rr) {
    return false;
  }
  // motor_command_torq_rl
  if (lhs->motor_command_torq_rl != rhs->motor_command_torq_rl) {
    return false;
  }
  // motor_command_torq_rr
  if (lhs->motor_command_torq_rr != rhs->motor_command_torq_rr) {
    return false;
  }
  // motor_return_torq_rl
  if (lhs->motor_return_torq_rl != rhs->motor_return_torq_rl) {
    return false;
  }
  // motor_return_torq_rr
  if (lhs->motor_return_torq_rr != rhs->motor_return_torq_rr) {
    return false;
  }
  return true;
}

bool
fsd_common_msgs__msg__Feedback__copy(
  const fsd_common_msgs__msg__Feedback * input,
  fsd_common_msgs__msg__Feedback * output)
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
  // wheel_speed_fl
  output->wheel_speed_fl = input->wheel_speed_fl;
  // wheel_speed_fr
  output->wheel_speed_fr = input->wheel_speed_fr;
  // wheel_speed_rl
  output->wheel_speed_rl = input->wheel_speed_rl;
  // wheel_speed_rr
  output->wheel_speed_rr = input->wheel_speed_rr;
  // motor_command_speed_rl
  output->motor_command_speed_rl = input->motor_command_speed_rl;
  // motor_command_speed_rr
  output->motor_command_speed_rr = input->motor_command_speed_rr;
  // motor_return_speed_rl
  output->motor_return_speed_rl = input->motor_return_speed_rl;
  // motor_return_speed_rr
  output->motor_return_speed_rr = input->motor_return_speed_rr;
  // motor_command_torq_rl
  output->motor_command_torq_rl = input->motor_command_torq_rl;
  // motor_command_torq_rr
  output->motor_command_torq_rr = input->motor_command_torq_rr;
  // motor_return_torq_rl
  output->motor_return_torq_rl = input->motor_return_torq_rl;
  // motor_return_torq_rr
  output->motor_return_torq_rr = input->motor_return_torq_rr;
  return true;
}

fsd_common_msgs__msg__Feedback *
fsd_common_msgs__msg__Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__Feedback * msg = (fsd_common_msgs__msg__Feedback *)allocator.allocate(sizeof(fsd_common_msgs__msg__Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fsd_common_msgs__msg__Feedback));
  bool success = fsd_common_msgs__msg__Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fsd_common_msgs__msg__Feedback__destroy(fsd_common_msgs__msg__Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fsd_common_msgs__msg__Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fsd_common_msgs__msg__Feedback__Sequence__init(fsd_common_msgs__msg__Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__Feedback * data = NULL;

  if (size) {
    data = (fsd_common_msgs__msg__Feedback *)allocator.zero_allocate(size, sizeof(fsd_common_msgs__msg__Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fsd_common_msgs__msg__Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fsd_common_msgs__msg__Feedback__fini(&data[i - 1]);
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
fsd_common_msgs__msg__Feedback__Sequence__fini(fsd_common_msgs__msg__Feedback__Sequence * array)
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
      fsd_common_msgs__msg__Feedback__fini(&array->data[i]);
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

fsd_common_msgs__msg__Feedback__Sequence *
fsd_common_msgs__msg__Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__Feedback__Sequence * array = (fsd_common_msgs__msg__Feedback__Sequence *)allocator.allocate(sizeof(fsd_common_msgs__msg__Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fsd_common_msgs__msg__Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fsd_common_msgs__msg__Feedback__Sequence__destroy(fsd_common_msgs__msg__Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fsd_common_msgs__msg__Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fsd_common_msgs__msg__Feedback__Sequence__are_equal(const fsd_common_msgs__msg__Feedback__Sequence * lhs, const fsd_common_msgs__msg__Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fsd_common_msgs__msg__Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fsd_common_msgs__msg__Feedback__Sequence__copy(
  const fsd_common_msgs__msg__Feedback__Sequence * input,
  fsd_common_msgs__msg__Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fsd_common_msgs__msg__Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fsd_common_msgs__msg__Feedback * data =
      (fsd_common_msgs__msg__Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fsd_common_msgs__msg__Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fsd_common_msgs__msg__Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fsd_common_msgs__msg__Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
