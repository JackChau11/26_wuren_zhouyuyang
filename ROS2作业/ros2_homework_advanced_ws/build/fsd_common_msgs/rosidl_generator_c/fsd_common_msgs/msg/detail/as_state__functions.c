// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fsd_common_msgs:msg/AsState.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/as_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `mission`
#include "rosidl_runtime_c/string_functions.h"

bool
fsd_common_msgs__msg__AsState__init(fsd_common_msgs__msg__AsState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fsd_common_msgs__msg__AsState__fini(msg);
    return false;
  }
  // mission
  if (!rosidl_runtime_c__String__init(&msg->mission)) {
    fsd_common_msgs__msg__AsState__fini(msg);
    return false;
  }
  // which_lap
  // end
  // finished
  // camera_state
  // lidar_state
  // ins_state
  // sensor_state
  // ready
  // count_time
  return true;
}

void
fsd_common_msgs__msg__AsState__fini(fsd_common_msgs__msg__AsState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mission
  rosidl_runtime_c__String__fini(&msg->mission);
  // which_lap
  // end
  // finished
  // camera_state
  // lidar_state
  // ins_state
  // sensor_state
  // ready
  // count_time
}

bool
fsd_common_msgs__msg__AsState__are_equal(const fsd_common_msgs__msg__AsState * lhs, const fsd_common_msgs__msg__AsState * rhs)
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
  // mission
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission), &(rhs->mission)))
  {
    return false;
  }
  // which_lap
  if (lhs->which_lap != rhs->which_lap) {
    return false;
  }
  // end
  if (lhs->end != rhs->end) {
    return false;
  }
  // finished
  if (lhs->finished != rhs->finished) {
    return false;
  }
  // camera_state
  if (lhs->camera_state != rhs->camera_state) {
    return false;
  }
  // lidar_state
  if (lhs->lidar_state != rhs->lidar_state) {
    return false;
  }
  // ins_state
  if (lhs->ins_state != rhs->ins_state) {
    return false;
  }
  // sensor_state
  if (lhs->sensor_state != rhs->sensor_state) {
    return false;
  }
  // ready
  if (lhs->ready != rhs->ready) {
    return false;
  }
  // count_time
  if (lhs->count_time != rhs->count_time) {
    return false;
  }
  return true;
}

bool
fsd_common_msgs__msg__AsState__copy(
  const fsd_common_msgs__msg__AsState * input,
  fsd_common_msgs__msg__AsState * output)
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
  // mission
  if (!rosidl_runtime_c__String__copy(
      &(input->mission), &(output->mission)))
  {
    return false;
  }
  // which_lap
  output->which_lap = input->which_lap;
  // end
  output->end = input->end;
  // finished
  output->finished = input->finished;
  // camera_state
  output->camera_state = input->camera_state;
  // lidar_state
  output->lidar_state = input->lidar_state;
  // ins_state
  output->ins_state = input->ins_state;
  // sensor_state
  output->sensor_state = input->sensor_state;
  // ready
  output->ready = input->ready;
  // count_time
  output->count_time = input->count_time;
  return true;
}

fsd_common_msgs__msg__AsState *
fsd_common_msgs__msg__AsState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__AsState * msg = (fsd_common_msgs__msg__AsState *)allocator.allocate(sizeof(fsd_common_msgs__msg__AsState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fsd_common_msgs__msg__AsState));
  bool success = fsd_common_msgs__msg__AsState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fsd_common_msgs__msg__AsState__destroy(fsd_common_msgs__msg__AsState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fsd_common_msgs__msg__AsState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fsd_common_msgs__msg__AsState__Sequence__init(fsd_common_msgs__msg__AsState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__AsState * data = NULL;

  if (size) {
    data = (fsd_common_msgs__msg__AsState *)allocator.zero_allocate(size, sizeof(fsd_common_msgs__msg__AsState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fsd_common_msgs__msg__AsState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fsd_common_msgs__msg__AsState__fini(&data[i - 1]);
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
fsd_common_msgs__msg__AsState__Sequence__fini(fsd_common_msgs__msg__AsState__Sequence * array)
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
      fsd_common_msgs__msg__AsState__fini(&array->data[i]);
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

fsd_common_msgs__msg__AsState__Sequence *
fsd_common_msgs__msg__AsState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__AsState__Sequence * array = (fsd_common_msgs__msg__AsState__Sequence *)allocator.allocate(sizeof(fsd_common_msgs__msg__AsState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fsd_common_msgs__msg__AsState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fsd_common_msgs__msg__AsState__Sequence__destroy(fsd_common_msgs__msg__AsState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fsd_common_msgs__msg__AsState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fsd_common_msgs__msg__AsState__Sequence__are_equal(const fsd_common_msgs__msg__AsState__Sequence * lhs, const fsd_common_msgs__msg__AsState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fsd_common_msgs__msg__AsState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fsd_common_msgs__msg__AsState__Sequence__copy(
  const fsd_common_msgs__msg__AsState__Sequence * input,
  fsd_common_msgs__msg__AsState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fsd_common_msgs__msg__AsState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fsd_common_msgs__msg__AsState * data =
      (fsd_common_msgs__msg__AsState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fsd_common_msgs__msg__AsState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fsd_common_msgs__msg__AsState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fsd_common_msgs__msg__AsState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
