// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fsd_common_msgs:msg/DrivingDynamics.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/driving_dynamics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
fsd_common_msgs__msg__DrivingDynamics__init(fsd_common_msgs__msg__DrivingDynamics * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fsd_common_msgs__msg__DrivingDynamics__fini(msg);
    return false;
  }
  // speed_target
  // speed_actual
  // steering_angle_target
  // steering_angle_actual
  // brake_hydr_target
  // brake_hydr_actual
  // motor_moment_target
  // motor_moment_actual
  // acceleration_longitudinal
  // acceleration_lateral
  // yaw_rate
  return true;
}

void
fsd_common_msgs__msg__DrivingDynamics__fini(fsd_common_msgs__msg__DrivingDynamics * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // speed_target
  // speed_actual
  // steering_angle_target
  // steering_angle_actual
  // brake_hydr_target
  // brake_hydr_actual
  // motor_moment_target
  // motor_moment_actual
  // acceleration_longitudinal
  // acceleration_lateral
  // yaw_rate
}

bool
fsd_common_msgs__msg__DrivingDynamics__are_equal(const fsd_common_msgs__msg__DrivingDynamics * lhs, const fsd_common_msgs__msg__DrivingDynamics * rhs)
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
  // speed_target
  if (lhs->speed_target != rhs->speed_target) {
    return false;
  }
  // speed_actual
  if (lhs->speed_actual != rhs->speed_actual) {
    return false;
  }
  // steering_angle_target
  if (lhs->steering_angle_target != rhs->steering_angle_target) {
    return false;
  }
  // steering_angle_actual
  if (lhs->steering_angle_actual != rhs->steering_angle_actual) {
    return false;
  }
  // brake_hydr_target
  if (lhs->brake_hydr_target != rhs->brake_hydr_target) {
    return false;
  }
  // brake_hydr_actual
  if (lhs->brake_hydr_actual != rhs->brake_hydr_actual) {
    return false;
  }
  // motor_moment_target
  if (lhs->motor_moment_target != rhs->motor_moment_target) {
    return false;
  }
  // motor_moment_actual
  if (lhs->motor_moment_actual != rhs->motor_moment_actual) {
    return false;
  }
  // acceleration_longitudinal
  if (lhs->acceleration_longitudinal != rhs->acceleration_longitudinal) {
    return false;
  }
  // acceleration_lateral
  if (lhs->acceleration_lateral != rhs->acceleration_lateral) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  return true;
}

bool
fsd_common_msgs__msg__DrivingDynamics__copy(
  const fsd_common_msgs__msg__DrivingDynamics * input,
  fsd_common_msgs__msg__DrivingDynamics * output)
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
  // speed_target
  output->speed_target = input->speed_target;
  // speed_actual
  output->speed_actual = input->speed_actual;
  // steering_angle_target
  output->steering_angle_target = input->steering_angle_target;
  // steering_angle_actual
  output->steering_angle_actual = input->steering_angle_actual;
  // brake_hydr_target
  output->brake_hydr_target = input->brake_hydr_target;
  // brake_hydr_actual
  output->brake_hydr_actual = input->brake_hydr_actual;
  // motor_moment_target
  output->motor_moment_target = input->motor_moment_target;
  // motor_moment_actual
  output->motor_moment_actual = input->motor_moment_actual;
  // acceleration_longitudinal
  output->acceleration_longitudinal = input->acceleration_longitudinal;
  // acceleration_lateral
  output->acceleration_lateral = input->acceleration_lateral;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  return true;
}

fsd_common_msgs__msg__DrivingDynamics *
fsd_common_msgs__msg__DrivingDynamics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__DrivingDynamics * msg = (fsd_common_msgs__msg__DrivingDynamics *)allocator.allocate(sizeof(fsd_common_msgs__msg__DrivingDynamics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fsd_common_msgs__msg__DrivingDynamics));
  bool success = fsd_common_msgs__msg__DrivingDynamics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fsd_common_msgs__msg__DrivingDynamics__destroy(fsd_common_msgs__msg__DrivingDynamics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fsd_common_msgs__msg__DrivingDynamics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fsd_common_msgs__msg__DrivingDynamics__Sequence__init(fsd_common_msgs__msg__DrivingDynamics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__DrivingDynamics * data = NULL;

  if (size) {
    data = (fsd_common_msgs__msg__DrivingDynamics *)allocator.zero_allocate(size, sizeof(fsd_common_msgs__msg__DrivingDynamics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fsd_common_msgs__msg__DrivingDynamics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fsd_common_msgs__msg__DrivingDynamics__fini(&data[i - 1]);
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
fsd_common_msgs__msg__DrivingDynamics__Sequence__fini(fsd_common_msgs__msg__DrivingDynamics__Sequence * array)
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
      fsd_common_msgs__msg__DrivingDynamics__fini(&array->data[i]);
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

fsd_common_msgs__msg__DrivingDynamics__Sequence *
fsd_common_msgs__msg__DrivingDynamics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__DrivingDynamics__Sequence * array = (fsd_common_msgs__msg__DrivingDynamics__Sequence *)allocator.allocate(sizeof(fsd_common_msgs__msg__DrivingDynamics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fsd_common_msgs__msg__DrivingDynamics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fsd_common_msgs__msg__DrivingDynamics__Sequence__destroy(fsd_common_msgs__msg__DrivingDynamics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fsd_common_msgs__msg__DrivingDynamics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fsd_common_msgs__msg__DrivingDynamics__Sequence__are_equal(const fsd_common_msgs__msg__DrivingDynamics__Sequence * lhs, const fsd_common_msgs__msg__DrivingDynamics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fsd_common_msgs__msg__DrivingDynamics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fsd_common_msgs__msg__DrivingDynamics__Sequence__copy(
  const fsd_common_msgs__msg__DrivingDynamics__Sequence * input,
  fsd_common_msgs__msg__DrivingDynamics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fsd_common_msgs__msg__DrivingDynamics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fsd_common_msgs__msg__DrivingDynamics * data =
      (fsd_common_msgs__msg__DrivingDynamics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fsd_common_msgs__msg__DrivingDynamics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fsd_common_msgs__msg__DrivingDynamics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fsd_common_msgs__msg__DrivingDynamics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
