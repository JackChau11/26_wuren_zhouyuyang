// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fsd_common_msgs:msg/SkidpadGlobalCenterLine.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/skidpad_global_center_line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `global_path`
#include "nav_msgs/msg/detail/path__functions.h"

bool
fsd_common_msgs__msg__SkidpadGlobalCenterLine__init(fsd_common_msgs__msg__SkidpadGlobalCenterLine * msg)
{
  if (!msg) {
    return false;
  }
  // global_path
  if (!nav_msgs__msg__Path__init(&msg->global_path)) {
    fsd_common_msgs__msg__SkidpadGlobalCenterLine__fini(msg);
    return false;
  }
  // is_reach_mid
  return true;
}

void
fsd_common_msgs__msg__SkidpadGlobalCenterLine__fini(fsd_common_msgs__msg__SkidpadGlobalCenterLine * msg)
{
  if (!msg) {
    return;
  }
  // global_path
  nav_msgs__msg__Path__fini(&msg->global_path);
  // is_reach_mid
}

bool
fsd_common_msgs__msg__SkidpadGlobalCenterLine__are_equal(const fsd_common_msgs__msg__SkidpadGlobalCenterLine * lhs, const fsd_common_msgs__msg__SkidpadGlobalCenterLine * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // global_path
  if (!nav_msgs__msg__Path__are_equal(
      &(lhs->global_path), &(rhs->global_path)))
  {
    return false;
  }
  // is_reach_mid
  if (lhs->is_reach_mid != rhs->is_reach_mid) {
    return false;
  }
  return true;
}

bool
fsd_common_msgs__msg__SkidpadGlobalCenterLine__copy(
  const fsd_common_msgs__msg__SkidpadGlobalCenterLine * input,
  fsd_common_msgs__msg__SkidpadGlobalCenterLine * output)
{
  if (!input || !output) {
    return false;
  }
  // global_path
  if (!nav_msgs__msg__Path__copy(
      &(input->global_path), &(output->global_path)))
  {
    return false;
  }
  // is_reach_mid
  output->is_reach_mid = input->is_reach_mid;
  return true;
}

fsd_common_msgs__msg__SkidpadGlobalCenterLine *
fsd_common_msgs__msg__SkidpadGlobalCenterLine__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__SkidpadGlobalCenterLine * msg = (fsd_common_msgs__msg__SkidpadGlobalCenterLine *)allocator.allocate(sizeof(fsd_common_msgs__msg__SkidpadGlobalCenterLine), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fsd_common_msgs__msg__SkidpadGlobalCenterLine));
  bool success = fsd_common_msgs__msg__SkidpadGlobalCenterLine__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fsd_common_msgs__msg__SkidpadGlobalCenterLine__destroy(fsd_common_msgs__msg__SkidpadGlobalCenterLine * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fsd_common_msgs__msg__SkidpadGlobalCenterLine__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence__init(fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__SkidpadGlobalCenterLine * data = NULL;

  if (size) {
    data = (fsd_common_msgs__msg__SkidpadGlobalCenterLine *)allocator.zero_allocate(size, sizeof(fsd_common_msgs__msg__SkidpadGlobalCenterLine), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fsd_common_msgs__msg__SkidpadGlobalCenterLine__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fsd_common_msgs__msg__SkidpadGlobalCenterLine__fini(&data[i - 1]);
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
fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence__fini(fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence * array)
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
      fsd_common_msgs__msg__SkidpadGlobalCenterLine__fini(&array->data[i]);
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

fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence *
fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence * array = (fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence *)allocator.allocate(sizeof(fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence__destroy(fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence__are_equal(const fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence * lhs, const fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fsd_common_msgs__msg__SkidpadGlobalCenterLine__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence__copy(
  const fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence * input,
  fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fsd_common_msgs__msg__SkidpadGlobalCenterLine);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fsd_common_msgs__msg__SkidpadGlobalCenterLine * data =
      (fsd_common_msgs__msg__SkidpadGlobalCenterLine *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fsd_common_msgs__msg__SkidpadGlobalCenterLine__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fsd_common_msgs__msg__SkidpadGlobalCenterLine__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fsd_common_msgs__msg__SkidpadGlobalCenterLine__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
