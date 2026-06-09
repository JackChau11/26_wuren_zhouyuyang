// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fsd_common_msgs:msg/CarStateDt.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/car_state_dt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `car_state_dt`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
fsd_common_msgs__msg__CarStateDt__init(fsd_common_msgs__msg__CarStateDt * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fsd_common_msgs__msg__CarStateDt__fini(msg);
    return false;
  }
  // car_state_dt
  if (!geometry_msgs__msg__Pose2D__init(&msg->car_state_dt)) {
    fsd_common_msgs__msg__CarStateDt__fini(msg);
    return false;
  }
  return true;
}

void
fsd_common_msgs__msg__CarStateDt__fini(fsd_common_msgs__msg__CarStateDt * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // car_state_dt
  geometry_msgs__msg__Pose2D__fini(&msg->car_state_dt);
}

bool
fsd_common_msgs__msg__CarStateDt__are_equal(const fsd_common_msgs__msg__CarStateDt * lhs, const fsd_common_msgs__msg__CarStateDt * rhs)
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
  // car_state_dt
  if (!geometry_msgs__msg__Pose2D__are_equal(
      &(lhs->car_state_dt), &(rhs->car_state_dt)))
  {
    return false;
  }
  return true;
}

bool
fsd_common_msgs__msg__CarStateDt__copy(
  const fsd_common_msgs__msg__CarStateDt * input,
  fsd_common_msgs__msg__CarStateDt * output)
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
  // car_state_dt
  if (!geometry_msgs__msg__Pose2D__copy(
      &(input->car_state_dt), &(output->car_state_dt)))
  {
    return false;
  }
  return true;
}

fsd_common_msgs__msg__CarStateDt *
fsd_common_msgs__msg__CarStateDt__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__CarStateDt * msg = (fsd_common_msgs__msg__CarStateDt *)allocator.allocate(sizeof(fsd_common_msgs__msg__CarStateDt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fsd_common_msgs__msg__CarStateDt));
  bool success = fsd_common_msgs__msg__CarStateDt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fsd_common_msgs__msg__CarStateDt__destroy(fsd_common_msgs__msg__CarStateDt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fsd_common_msgs__msg__CarStateDt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fsd_common_msgs__msg__CarStateDt__Sequence__init(fsd_common_msgs__msg__CarStateDt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__CarStateDt * data = NULL;

  if (size) {
    data = (fsd_common_msgs__msg__CarStateDt *)allocator.zero_allocate(size, sizeof(fsd_common_msgs__msg__CarStateDt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fsd_common_msgs__msg__CarStateDt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fsd_common_msgs__msg__CarStateDt__fini(&data[i - 1]);
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
fsd_common_msgs__msg__CarStateDt__Sequence__fini(fsd_common_msgs__msg__CarStateDt__Sequence * array)
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
      fsd_common_msgs__msg__CarStateDt__fini(&array->data[i]);
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

fsd_common_msgs__msg__CarStateDt__Sequence *
fsd_common_msgs__msg__CarStateDt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__CarStateDt__Sequence * array = (fsd_common_msgs__msg__CarStateDt__Sequence *)allocator.allocate(sizeof(fsd_common_msgs__msg__CarStateDt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fsd_common_msgs__msg__CarStateDt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fsd_common_msgs__msg__CarStateDt__Sequence__destroy(fsd_common_msgs__msg__CarStateDt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fsd_common_msgs__msg__CarStateDt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fsd_common_msgs__msg__CarStateDt__Sequence__are_equal(const fsd_common_msgs__msg__CarStateDt__Sequence * lhs, const fsd_common_msgs__msg__CarStateDt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fsd_common_msgs__msg__CarStateDt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fsd_common_msgs__msg__CarStateDt__Sequence__copy(
  const fsd_common_msgs__msg__CarStateDt__Sequence * input,
  fsd_common_msgs__msg__CarStateDt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fsd_common_msgs__msg__CarStateDt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fsd_common_msgs__msg__CarStateDt * data =
      (fsd_common_msgs__msg__CarStateDt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fsd_common_msgs__msg__CarStateDt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fsd_common_msgs__msg__CarStateDt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fsd_common_msgs__msg__CarStateDt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
