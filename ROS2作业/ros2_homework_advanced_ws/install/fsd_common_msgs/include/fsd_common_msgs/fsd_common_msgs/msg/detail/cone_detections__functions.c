// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fsd_common_msgs:msg/ConeDetections.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/cone_detections__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `cone_detections`
#include "fsd_common_msgs/msg/detail/cone__functions.h"

bool
fsd_common_msgs__msg__ConeDetections__init(fsd_common_msgs__msg__ConeDetections * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fsd_common_msgs__msg__ConeDetections__fini(msg);
    return false;
  }
  // cone_detections
  if (!fsd_common_msgs__msg__Cone__Sequence__init(&msg->cone_detections, 0)) {
    fsd_common_msgs__msg__ConeDetections__fini(msg);
    return false;
  }
  return true;
}

void
fsd_common_msgs__msg__ConeDetections__fini(fsd_common_msgs__msg__ConeDetections * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // cone_detections
  fsd_common_msgs__msg__Cone__Sequence__fini(&msg->cone_detections);
}

bool
fsd_common_msgs__msg__ConeDetections__are_equal(const fsd_common_msgs__msg__ConeDetections * lhs, const fsd_common_msgs__msg__ConeDetections * rhs)
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
  // cone_detections
  if (!fsd_common_msgs__msg__Cone__Sequence__are_equal(
      &(lhs->cone_detections), &(rhs->cone_detections)))
  {
    return false;
  }
  return true;
}

bool
fsd_common_msgs__msg__ConeDetections__copy(
  const fsd_common_msgs__msg__ConeDetections * input,
  fsd_common_msgs__msg__ConeDetections * output)
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
  // cone_detections
  if (!fsd_common_msgs__msg__Cone__Sequence__copy(
      &(input->cone_detections), &(output->cone_detections)))
  {
    return false;
  }
  return true;
}

fsd_common_msgs__msg__ConeDetections *
fsd_common_msgs__msg__ConeDetections__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__ConeDetections * msg = (fsd_common_msgs__msg__ConeDetections *)allocator.allocate(sizeof(fsd_common_msgs__msg__ConeDetections), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fsd_common_msgs__msg__ConeDetections));
  bool success = fsd_common_msgs__msg__ConeDetections__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fsd_common_msgs__msg__ConeDetections__destroy(fsd_common_msgs__msg__ConeDetections * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fsd_common_msgs__msg__ConeDetections__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fsd_common_msgs__msg__ConeDetections__Sequence__init(fsd_common_msgs__msg__ConeDetections__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__ConeDetections * data = NULL;

  if (size) {
    data = (fsd_common_msgs__msg__ConeDetections *)allocator.zero_allocate(size, sizeof(fsd_common_msgs__msg__ConeDetections), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fsd_common_msgs__msg__ConeDetections__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fsd_common_msgs__msg__ConeDetections__fini(&data[i - 1]);
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
fsd_common_msgs__msg__ConeDetections__Sequence__fini(fsd_common_msgs__msg__ConeDetections__Sequence * array)
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
      fsd_common_msgs__msg__ConeDetections__fini(&array->data[i]);
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

fsd_common_msgs__msg__ConeDetections__Sequence *
fsd_common_msgs__msg__ConeDetections__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__ConeDetections__Sequence * array = (fsd_common_msgs__msg__ConeDetections__Sequence *)allocator.allocate(sizeof(fsd_common_msgs__msg__ConeDetections__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fsd_common_msgs__msg__ConeDetections__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fsd_common_msgs__msg__ConeDetections__Sequence__destroy(fsd_common_msgs__msg__ConeDetections__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fsd_common_msgs__msg__ConeDetections__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fsd_common_msgs__msg__ConeDetections__Sequence__are_equal(const fsd_common_msgs__msg__ConeDetections__Sequence * lhs, const fsd_common_msgs__msg__ConeDetections__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fsd_common_msgs__msg__ConeDetections__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fsd_common_msgs__msg__ConeDetections__Sequence__copy(
  const fsd_common_msgs__msg__ConeDetections__Sequence * input,
  fsd_common_msgs__msg__ConeDetections__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fsd_common_msgs__msg__ConeDetections);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fsd_common_msgs__msg__ConeDetections * data =
      (fsd_common_msgs__msg__ConeDetections *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fsd_common_msgs__msg__ConeDetections__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fsd_common_msgs__msg__ConeDetections__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fsd_common_msgs__msg__ConeDetections__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
