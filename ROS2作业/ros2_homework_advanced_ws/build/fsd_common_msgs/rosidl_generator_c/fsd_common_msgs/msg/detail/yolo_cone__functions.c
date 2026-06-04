// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fsd_common_msgs:msg/YoloCone.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/yolo_cone__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `width`
// Member `height`
// Member `color_confidence`
#include "std_msgs/msg/detail/float32__functions.h"
// Member `color`
#include "std_msgs/msg/detail/string__functions.h"

bool
fsd_common_msgs__msg__YoloCone__init(fsd_common_msgs__msg__YoloCone * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!std_msgs__msg__Float32__init(&msg->x)) {
    fsd_common_msgs__msg__YoloCone__fini(msg);
    return false;
  }
  // y
  if (!std_msgs__msg__Float32__init(&msg->y)) {
    fsd_common_msgs__msg__YoloCone__fini(msg);
    return false;
  }
  // width
  if (!std_msgs__msg__Float32__init(&msg->width)) {
    fsd_common_msgs__msg__YoloCone__fini(msg);
    return false;
  }
  // height
  if (!std_msgs__msg__Float32__init(&msg->height)) {
    fsd_common_msgs__msg__YoloCone__fini(msg);
    return false;
  }
  // color
  if (!std_msgs__msg__String__init(&msg->color)) {
    fsd_common_msgs__msg__YoloCone__fini(msg);
    return false;
  }
  // color_confidence
  if (!std_msgs__msg__Float32__init(&msg->color_confidence)) {
    fsd_common_msgs__msg__YoloCone__fini(msg);
    return false;
  }
  return true;
}

void
fsd_common_msgs__msg__YoloCone__fini(fsd_common_msgs__msg__YoloCone * msg)
{
  if (!msg) {
    return;
  }
  // x
  std_msgs__msg__Float32__fini(&msg->x);
  // y
  std_msgs__msg__Float32__fini(&msg->y);
  // width
  std_msgs__msg__Float32__fini(&msg->width);
  // height
  std_msgs__msg__Float32__fini(&msg->height);
  // color
  std_msgs__msg__String__fini(&msg->color);
  // color_confidence
  std_msgs__msg__Float32__fini(&msg->color_confidence);
}

bool
fsd_common_msgs__msg__YoloCone__are_equal(const fsd_common_msgs__msg__YoloCone * lhs, const fsd_common_msgs__msg__YoloCone * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // width
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->width), &(rhs->width)))
  {
    return false;
  }
  // height
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->height), &(rhs->height)))
  {
    return false;
  }
  // color
  if (!std_msgs__msg__String__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // color_confidence
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->color_confidence), &(rhs->color_confidence)))
  {
    return false;
  }
  return true;
}

bool
fsd_common_msgs__msg__YoloCone__copy(
  const fsd_common_msgs__msg__YoloCone * input,
  fsd_common_msgs__msg__YoloCone * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  if (!std_msgs__msg__Float32__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!std_msgs__msg__Float32__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // width
  if (!std_msgs__msg__Float32__copy(
      &(input->width), &(output->width)))
  {
    return false;
  }
  // height
  if (!std_msgs__msg__Float32__copy(
      &(input->height), &(output->height)))
  {
    return false;
  }
  // color
  if (!std_msgs__msg__String__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // color_confidence
  if (!std_msgs__msg__Float32__copy(
      &(input->color_confidence), &(output->color_confidence)))
  {
    return false;
  }
  return true;
}

fsd_common_msgs__msg__YoloCone *
fsd_common_msgs__msg__YoloCone__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__YoloCone * msg = (fsd_common_msgs__msg__YoloCone *)allocator.allocate(sizeof(fsd_common_msgs__msg__YoloCone), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fsd_common_msgs__msg__YoloCone));
  bool success = fsd_common_msgs__msg__YoloCone__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fsd_common_msgs__msg__YoloCone__destroy(fsd_common_msgs__msg__YoloCone * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fsd_common_msgs__msg__YoloCone__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fsd_common_msgs__msg__YoloCone__Sequence__init(fsd_common_msgs__msg__YoloCone__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__YoloCone * data = NULL;

  if (size) {
    data = (fsd_common_msgs__msg__YoloCone *)allocator.zero_allocate(size, sizeof(fsd_common_msgs__msg__YoloCone), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fsd_common_msgs__msg__YoloCone__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fsd_common_msgs__msg__YoloCone__fini(&data[i - 1]);
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
fsd_common_msgs__msg__YoloCone__Sequence__fini(fsd_common_msgs__msg__YoloCone__Sequence * array)
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
      fsd_common_msgs__msg__YoloCone__fini(&array->data[i]);
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

fsd_common_msgs__msg__YoloCone__Sequence *
fsd_common_msgs__msg__YoloCone__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__YoloCone__Sequence * array = (fsd_common_msgs__msg__YoloCone__Sequence *)allocator.allocate(sizeof(fsd_common_msgs__msg__YoloCone__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fsd_common_msgs__msg__YoloCone__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fsd_common_msgs__msg__YoloCone__Sequence__destroy(fsd_common_msgs__msg__YoloCone__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fsd_common_msgs__msg__YoloCone__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fsd_common_msgs__msg__YoloCone__Sequence__are_equal(const fsd_common_msgs__msg__YoloCone__Sequence * lhs, const fsd_common_msgs__msg__YoloCone__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fsd_common_msgs__msg__YoloCone__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fsd_common_msgs__msg__YoloCone__Sequence__copy(
  const fsd_common_msgs__msg__YoloCone__Sequence * input,
  fsd_common_msgs__msg__YoloCone__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fsd_common_msgs__msg__YoloCone);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fsd_common_msgs__msg__YoloCone * data =
      (fsd_common_msgs__msg__YoloCone *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fsd_common_msgs__msg__YoloCone__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fsd_common_msgs__msg__YoloCone__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fsd_common_msgs__msg__YoloCone__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
