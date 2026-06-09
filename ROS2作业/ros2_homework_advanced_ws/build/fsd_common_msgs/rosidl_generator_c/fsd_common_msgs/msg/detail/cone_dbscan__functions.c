// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fsd_common_msgs:msg/ConeDbscan.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/cone_dbscan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `color`
#include "std_msgs/msg/detail/string__functions.h"
// Member `pose_confidence`
// Member `color_confidence`
#include "std_msgs/msg/detail/float32__functions.h"
// Member `corepts`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
fsd_common_msgs__msg__ConeDbscan__init(fsd_common_msgs__msg__ConeDbscan * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    fsd_common_msgs__msg__ConeDbscan__fini(msg);
    return false;
  }
  // color
  if (!std_msgs__msg__String__init(&msg->color)) {
    fsd_common_msgs__msg__ConeDbscan__fini(msg);
    return false;
  }
  // pose_confidence
  if (!std_msgs__msg__Float32__init(&msg->pose_confidence)) {
    fsd_common_msgs__msg__ConeDbscan__fini(msg);
    return false;
  }
  // color_confidence
  if (!std_msgs__msg__Float32__init(&msg->color_confidence)) {
    fsd_common_msgs__msg__ConeDbscan__fini(msg);
    return false;
  }
  // cluster
  // point_type
  // pts
  // visited
  // corepts
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->corepts, 0)) {
    fsd_common_msgs__msg__ConeDbscan__fini(msg);
    return false;
  }
  return true;
}

void
fsd_common_msgs__msg__ConeDbscan__fini(fsd_common_msgs__msg__ConeDbscan * msg)
{
  if (!msg) {
    return;
  }
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // color
  std_msgs__msg__String__fini(&msg->color);
  // pose_confidence
  std_msgs__msg__Float32__fini(&msg->pose_confidence);
  // color_confidence
  std_msgs__msg__Float32__fini(&msg->color_confidence);
  // cluster
  // point_type
  // pts
  // visited
  // corepts
  rosidl_runtime_c__uint8__Sequence__fini(&msg->corepts);
}

bool
fsd_common_msgs__msg__ConeDbscan__are_equal(const fsd_common_msgs__msg__ConeDbscan * lhs, const fsd_common_msgs__msg__ConeDbscan * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // color
  if (!std_msgs__msg__String__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // pose_confidence
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->pose_confidence), &(rhs->pose_confidence)))
  {
    return false;
  }
  // color_confidence
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->color_confidence), &(rhs->color_confidence)))
  {
    return false;
  }
  // cluster
  if (lhs->cluster != rhs->cluster) {
    return false;
  }
  // point_type
  if (lhs->point_type != rhs->point_type) {
    return false;
  }
  // pts
  if (lhs->pts != rhs->pts) {
    return false;
  }
  // visited
  if (lhs->visited != rhs->visited) {
    return false;
  }
  // corepts
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->corepts), &(rhs->corepts)))
  {
    return false;
  }
  return true;
}

bool
fsd_common_msgs__msg__ConeDbscan__copy(
  const fsd_common_msgs__msg__ConeDbscan * input,
  fsd_common_msgs__msg__ConeDbscan * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // color
  if (!std_msgs__msg__String__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // pose_confidence
  if (!std_msgs__msg__Float32__copy(
      &(input->pose_confidence), &(output->pose_confidence)))
  {
    return false;
  }
  // color_confidence
  if (!std_msgs__msg__Float32__copy(
      &(input->color_confidence), &(output->color_confidence)))
  {
    return false;
  }
  // cluster
  output->cluster = input->cluster;
  // point_type
  output->point_type = input->point_type;
  // pts
  output->pts = input->pts;
  // visited
  output->visited = input->visited;
  // corepts
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->corepts), &(output->corepts)))
  {
    return false;
  }
  return true;
}

fsd_common_msgs__msg__ConeDbscan *
fsd_common_msgs__msg__ConeDbscan__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__ConeDbscan * msg = (fsd_common_msgs__msg__ConeDbscan *)allocator.allocate(sizeof(fsd_common_msgs__msg__ConeDbscan), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fsd_common_msgs__msg__ConeDbscan));
  bool success = fsd_common_msgs__msg__ConeDbscan__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fsd_common_msgs__msg__ConeDbscan__destroy(fsd_common_msgs__msg__ConeDbscan * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fsd_common_msgs__msg__ConeDbscan__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fsd_common_msgs__msg__ConeDbscan__Sequence__init(fsd_common_msgs__msg__ConeDbscan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__ConeDbscan * data = NULL;

  if (size) {
    data = (fsd_common_msgs__msg__ConeDbscan *)allocator.zero_allocate(size, sizeof(fsd_common_msgs__msg__ConeDbscan), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fsd_common_msgs__msg__ConeDbscan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fsd_common_msgs__msg__ConeDbscan__fini(&data[i - 1]);
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
fsd_common_msgs__msg__ConeDbscan__Sequence__fini(fsd_common_msgs__msg__ConeDbscan__Sequence * array)
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
      fsd_common_msgs__msg__ConeDbscan__fini(&array->data[i]);
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

fsd_common_msgs__msg__ConeDbscan__Sequence *
fsd_common_msgs__msg__ConeDbscan__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__ConeDbscan__Sequence * array = (fsd_common_msgs__msg__ConeDbscan__Sequence *)allocator.allocate(sizeof(fsd_common_msgs__msg__ConeDbscan__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fsd_common_msgs__msg__ConeDbscan__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fsd_common_msgs__msg__ConeDbscan__Sequence__destroy(fsd_common_msgs__msg__ConeDbscan__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fsd_common_msgs__msg__ConeDbscan__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fsd_common_msgs__msg__ConeDbscan__Sequence__are_equal(const fsd_common_msgs__msg__ConeDbscan__Sequence * lhs, const fsd_common_msgs__msg__ConeDbscan__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fsd_common_msgs__msg__ConeDbscan__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fsd_common_msgs__msg__ConeDbscan__Sequence__copy(
  const fsd_common_msgs__msg__ConeDbscan__Sequence * input,
  fsd_common_msgs__msg__ConeDbscan__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fsd_common_msgs__msg__ConeDbscan);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fsd_common_msgs__msg__ConeDbscan * data =
      (fsd_common_msgs__msg__ConeDbscan *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fsd_common_msgs__msg__ConeDbscan__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fsd_common_msgs__msg__ConeDbscan__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fsd_common_msgs__msg__ConeDbscan__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
