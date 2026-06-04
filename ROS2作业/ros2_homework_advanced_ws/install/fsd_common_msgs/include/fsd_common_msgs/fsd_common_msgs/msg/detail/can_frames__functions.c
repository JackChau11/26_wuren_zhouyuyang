// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fsd_common_msgs:msg/CanFrames.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/can_frames__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `frames`
#include "can_msgs/msg/detail/frame__functions.h"

bool
fsd_common_msgs__msg__CanFrames__init(fsd_common_msgs__msg__CanFrames * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fsd_common_msgs__msg__CanFrames__fini(msg);
    return false;
  }
  // frames
  if (!can_msgs__msg__Frame__Sequence__init(&msg->frames, 0)) {
    fsd_common_msgs__msg__CanFrames__fini(msg);
    return false;
  }
  return true;
}

void
fsd_common_msgs__msg__CanFrames__fini(fsd_common_msgs__msg__CanFrames * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // frames
  can_msgs__msg__Frame__Sequence__fini(&msg->frames);
}

bool
fsd_common_msgs__msg__CanFrames__are_equal(const fsd_common_msgs__msg__CanFrames * lhs, const fsd_common_msgs__msg__CanFrames * rhs)
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
  // frames
  if (!can_msgs__msg__Frame__Sequence__are_equal(
      &(lhs->frames), &(rhs->frames)))
  {
    return false;
  }
  return true;
}

bool
fsd_common_msgs__msg__CanFrames__copy(
  const fsd_common_msgs__msg__CanFrames * input,
  fsd_common_msgs__msg__CanFrames * output)
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
  // frames
  if (!can_msgs__msg__Frame__Sequence__copy(
      &(input->frames), &(output->frames)))
  {
    return false;
  }
  return true;
}

fsd_common_msgs__msg__CanFrames *
fsd_common_msgs__msg__CanFrames__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__CanFrames * msg = (fsd_common_msgs__msg__CanFrames *)allocator.allocate(sizeof(fsd_common_msgs__msg__CanFrames), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fsd_common_msgs__msg__CanFrames));
  bool success = fsd_common_msgs__msg__CanFrames__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fsd_common_msgs__msg__CanFrames__destroy(fsd_common_msgs__msg__CanFrames * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fsd_common_msgs__msg__CanFrames__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fsd_common_msgs__msg__CanFrames__Sequence__init(fsd_common_msgs__msg__CanFrames__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__CanFrames * data = NULL;

  if (size) {
    data = (fsd_common_msgs__msg__CanFrames *)allocator.zero_allocate(size, sizeof(fsd_common_msgs__msg__CanFrames), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fsd_common_msgs__msg__CanFrames__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fsd_common_msgs__msg__CanFrames__fini(&data[i - 1]);
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
fsd_common_msgs__msg__CanFrames__Sequence__fini(fsd_common_msgs__msg__CanFrames__Sequence * array)
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
      fsd_common_msgs__msg__CanFrames__fini(&array->data[i]);
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

fsd_common_msgs__msg__CanFrames__Sequence *
fsd_common_msgs__msg__CanFrames__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__CanFrames__Sequence * array = (fsd_common_msgs__msg__CanFrames__Sequence *)allocator.allocate(sizeof(fsd_common_msgs__msg__CanFrames__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fsd_common_msgs__msg__CanFrames__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fsd_common_msgs__msg__CanFrames__Sequence__destroy(fsd_common_msgs__msg__CanFrames__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fsd_common_msgs__msg__CanFrames__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fsd_common_msgs__msg__CanFrames__Sequence__are_equal(const fsd_common_msgs__msg__CanFrames__Sequence * lhs, const fsd_common_msgs__msg__CanFrames__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fsd_common_msgs__msg__CanFrames__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fsd_common_msgs__msg__CanFrames__Sequence__copy(
  const fsd_common_msgs__msg__CanFrames__Sequence * input,
  fsd_common_msgs__msg__CanFrames__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fsd_common_msgs__msg__CanFrames);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fsd_common_msgs__msg__CanFrames * data =
      (fsd_common_msgs__msg__CanFrames *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fsd_common_msgs__msg__CanFrames__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fsd_common_msgs__msg__CanFrames__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fsd_common_msgs__msg__CanFrames__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
