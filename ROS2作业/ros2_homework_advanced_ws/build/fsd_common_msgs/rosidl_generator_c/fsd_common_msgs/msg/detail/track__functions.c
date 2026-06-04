// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fsd_common_msgs:msg/Track.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/track__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `cones_left`
// Member `cones_right`
// Member `cones_orange`
// Member `cones_orange_big`
// Member `tk_device_start`
// Member `tk_device_end`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
fsd_common_msgs__msg__Track__init(fsd_common_msgs__msg__Track * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fsd_common_msgs__msg__Track__fini(msg);
    return false;
  }
  // cones_left
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->cones_left, 0)) {
    fsd_common_msgs__msg__Track__fini(msg);
    return false;
  }
  // cones_right
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->cones_right, 0)) {
    fsd_common_msgs__msg__Track__fini(msg);
    return false;
  }
  // cones_orange
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->cones_orange, 0)) {
    fsd_common_msgs__msg__Track__fini(msg);
    return false;
  }
  // cones_orange_big
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->cones_orange_big, 0)) {
    fsd_common_msgs__msg__Track__fini(msg);
    return false;
  }
  // tk_device_start
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->tk_device_start, 0)) {
    fsd_common_msgs__msg__Track__fini(msg);
    return false;
  }
  // tk_device_end
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->tk_device_end, 0)) {
    fsd_common_msgs__msg__Track__fini(msg);
    return false;
  }
  return true;
}

void
fsd_common_msgs__msg__Track__fini(fsd_common_msgs__msg__Track * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // cones_left
  geometry_msgs__msg__Point__Sequence__fini(&msg->cones_left);
  // cones_right
  geometry_msgs__msg__Point__Sequence__fini(&msg->cones_right);
  // cones_orange
  geometry_msgs__msg__Point__Sequence__fini(&msg->cones_orange);
  // cones_orange_big
  geometry_msgs__msg__Point__Sequence__fini(&msg->cones_orange_big);
  // tk_device_start
  geometry_msgs__msg__Point__Sequence__fini(&msg->tk_device_start);
  // tk_device_end
  geometry_msgs__msg__Point__Sequence__fini(&msg->tk_device_end);
}

bool
fsd_common_msgs__msg__Track__are_equal(const fsd_common_msgs__msg__Track * lhs, const fsd_common_msgs__msg__Track * rhs)
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
  // cones_left
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->cones_left), &(rhs->cones_left)))
  {
    return false;
  }
  // cones_right
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->cones_right), &(rhs->cones_right)))
  {
    return false;
  }
  // cones_orange
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->cones_orange), &(rhs->cones_orange)))
  {
    return false;
  }
  // cones_orange_big
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->cones_orange_big), &(rhs->cones_orange_big)))
  {
    return false;
  }
  // tk_device_start
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->tk_device_start), &(rhs->tk_device_start)))
  {
    return false;
  }
  // tk_device_end
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->tk_device_end), &(rhs->tk_device_end)))
  {
    return false;
  }
  return true;
}

bool
fsd_common_msgs__msg__Track__copy(
  const fsd_common_msgs__msg__Track * input,
  fsd_common_msgs__msg__Track * output)
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
  // cones_left
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->cones_left), &(output->cones_left)))
  {
    return false;
  }
  // cones_right
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->cones_right), &(output->cones_right)))
  {
    return false;
  }
  // cones_orange
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->cones_orange), &(output->cones_orange)))
  {
    return false;
  }
  // cones_orange_big
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->cones_orange_big), &(output->cones_orange_big)))
  {
    return false;
  }
  // tk_device_start
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->tk_device_start), &(output->tk_device_start)))
  {
    return false;
  }
  // tk_device_end
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->tk_device_end), &(output->tk_device_end)))
  {
    return false;
  }
  return true;
}

fsd_common_msgs__msg__Track *
fsd_common_msgs__msg__Track__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__Track * msg = (fsd_common_msgs__msg__Track *)allocator.allocate(sizeof(fsd_common_msgs__msg__Track), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fsd_common_msgs__msg__Track));
  bool success = fsd_common_msgs__msg__Track__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fsd_common_msgs__msg__Track__destroy(fsd_common_msgs__msg__Track * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fsd_common_msgs__msg__Track__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fsd_common_msgs__msg__Track__Sequence__init(fsd_common_msgs__msg__Track__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__Track * data = NULL;

  if (size) {
    data = (fsd_common_msgs__msg__Track *)allocator.zero_allocate(size, sizeof(fsd_common_msgs__msg__Track), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fsd_common_msgs__msg__Track__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fsd_common_msgs__msg__Track__fini(&data[i - 1]);
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
fsd_common_msgs__msg__Track__Sequence__fini(fsd_common_msgs__msg__Track__Sequence * array)
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
      fsd_common_msgs__msg__Track__fini(&array->data[i]);
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

fsd_common_msgs__msg__Track__Sequence *
fsd_common_msgs__msg__Track__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__Track__Sequence * array = (fsd_common_msgs__msg__Track__Sequence *)allocator.allocate(sizeof(fsd_common_msgs__msg__Track__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fsd_common_msgs__msg__Track__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fsd_common_msgs__msg__Track__Sequence__destroy(fsd_common_msgs__msg__Track__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fsd_common_msgs__msg__Track__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fsd_common_msgs__msg__Track__Sequence__are_equal(const fsd_common_msgs__msg__Track__Sequence * lhs, const fsd_common_msgs__msg__Track__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fsd_common_msgs__msg__Track__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fsd_common_msgs__msg__Track__Sequence__copy(
  const fsd_common_msgs__msg__Track__Sequence * input,
  fsd_common_msgs__msg__Track__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fsd_common_msgs__msg__Track);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fsd_common_msgs__msg__Track * data =
      (fsd_common_msgs__msg__Track *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fsd_common_msgs__msg__Track__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fsd_common_msgs__msg__Track__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fsd_common_msgs__msg__Track__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
