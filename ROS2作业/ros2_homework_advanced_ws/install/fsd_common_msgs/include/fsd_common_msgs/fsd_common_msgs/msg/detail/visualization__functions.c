// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fsd_common_msgs:msg/Visualization.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/visualization__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
fsd_common_msgs__msg__Visualization__init(fsd_common_msgs__msg__Visualization * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fsd_common_msgs__msg__Visualization__fini(msg);
    return false;
  }
  // frame_id_num
  // lat_error_front_axis
  // lat_error_cog
  // lat_error_rear_axis
  // yaw_error_front_axis
  // yaw_error_cog
  // yaw_error_rear_axis
  // yaw_rate_error
  // steering_error
  // vx_error
  // vy_error
  // sideslip_error
  // motor_torq_error_lr
  // motor_torq_error_rr
  // motor_speed_error_lr
  // motor_speed_error_rr
  // error1
  // error2
  // error3
  // error4
  // yaw_ref
  // yaw_ref_front_axis
  // yaw_ref_cog
  // yaw_ref_rear_axis
  // curvature_ref
  // curvature_ref_front_axis
  // curvature_ref_cog
  // curvature_ref_rear_axis
  // vx_ref
  // vy_ref
  // ax_ref
  // ay_ref
  // ref1
  // ref2
  // ref3
  // ref4
  // steering_without_compensation
  // steering_feedback
  // steering_feedforward
  // lookforward_length
  // yaw_rate_pre
  // turning_radius
  // adhesion_coefficient_pre
  // sideslip_pre
  // slip_angle_pre_fl
  // slip_angle_pre_fr
  // slip_angle_pre_rl
  // slip_angle_pre_rr
  // norm_force_pre_fl
  // norm_force_pre_fr
  // norm_force_pre_rl
  // norm_force_pre_rr
  // algorithm1
  // algorithm2
  // algorithm3
  // algorithm4
  return true;
}

void
fsd_common_msgs__msg__Visualization__fini(fsd_common_msgs__msg__Visualization * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // frame_id_num
  // lat_error_front_axis
  // lat_error_cog
  // lat_error_rear_axis
  // yaw_error_front_axis
  // yaw_error_cog
  // yaw_error_rear_axis
  // yaw_rate_error
  // steering_error
  // vx_error
  // vy_error
  // sideslip_error
  // motor_torq_error_lr
  // motor_torq_error_rr
  // motor_speed_error_lr
  // motor_speed_error_rr
  // error1
  // error2
  // error3
  // error4
  // yaw_ref
  // yaw_ref_front_axis
  // yaw_ref_cog
  // yaw_ref_rear_axis
  // curvature_ref
  // curvature_ref_front_axis
  // curvature_ref_cog
  // curvature_ref_rear_axis
  // vx_ref
  // vy_ref
  // ax_ref
  // ay_ref
  // ref1
  // ref2
  // ref3
  // ref4
  // steering_without_compensation
  // steering_feedback
  // steering_feedforward
  // lookforward_length
  // yaw_rate_pre
  // turning_radius
  // adhesion_coefficient_pre
  // sideslip_pre
  // slip_angle_pre_fl
  // slip_angle_pre_fr
  // slip_angle_pre_rl
  // slip_angle_pre_rr
  // norm_force_pre_fl
  // norm_force_pre_fr
  // norm_force_pre_rl
  // norm_force_pre_rr
  // algorithm1
  // algorithm2
  // algorithm3
  // algorithm4
}

bool
fsd_common_msgs__msg__Visualization__are_equal(const fsd_common_msgs__msg__Visualization * lhs, const fsd_common_msgs__msg__Visualization * rhs)
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
  // lat_error_front_axis
  if (lhs->lat_error_front_axis != rhs->lat_error_front_axis) {
    return false;
  }
  // lat_error_cog
  if (lhs->lat_error_cog != rhs->lat_error_cog) {
    return false;
  }
  // lat_error_rear_axis
  if (lhs->lat_error_rear_axis != rhs->lat_error_rear_axis) {
    return false;
  }
  // yaw_error_front_axis
  if (lhs->yaw_error_front_axis != rhs->yaw_error_front_axis) {
    return false;
  }
  // yaw_error_cog
  if (lhs->yaw_error_cog != rhs->yaw_error_cog) {
    return false;
  }
  // yaw_error_rear_axis
  if (lhs->yaw_error_rear_axis != rhs->yaw_error_rear_axis) {
    return false;
  }
  // yaw_rate_error
  if (lhs->yaw_rate_error != rhs->yaw_rate_error) {
    return false;
  }
  // steering_error
  if (lhs->steering_error != rhs->steering_error) {
    return false;
  }
  // vx_error
  if (lhs->vx_error != rhs->vx_error) {
    return false;
  }
  // vy_error
  if (lhs->vy_error != rhs->vy_error) {
    return false;
  }
  // sideslip_error
  if (lhs->sideslip_error != rhs->sideslip_error) {
    return false;
  }
  // motor_torq_error_lr
  if (lhs->motor_torq_error_lr != rhs->motor_torq_error_lr) {
    return false;
  }
  // motor_torq_error_rr
  if (lhs->motor_torq_error_rr != rhs->motor_torq_error_rr) {
    return false;
  }
  // motor_speed_error_lr
  if (lhs->motor_speed_error_lr != rhs->motor_speed_error_lr) {
    return false;
  }
  // motor_speed_error_rr
  if (lhs->motor_speed_error_rr != rhs->motor_speed_error_rr) {
    return false;
  }
  // error1
  if (lhs->error1 != rhs->error1) {
    return false;
  }
  // error2
  if (lhs->error2 != rhs->error2) {
    return false;
  }
  // error3
  if (lhs->error3 != rhs->error3) {
    return false;
  }
  // error4
  if (lhs->error4 != rhs->error4) {
    return false;
  }
  // yaw_ref
  if (lhs->yaw_ref != rhs->yaw_ref) {
    return false;
  }
  // yaw_ref_front_axis
  if (lhs->yaw_ref_front_axis != rhs->yaw_ref_front_axis) {
    return false;
  }
  // yaw_ref_cog
  if (lhs->yaw_ref_cog != rhs->yaw_ref_cog) {
    return false;
  }
  // yaw_ref_rear_axis
  if (lhs->yaw_ref_rear_axis != rhs->yaw_ref_rear_axis) {
    return false;
  }
  // curvature_ref
  if (lhs->curvature_ref != rhs->curvature_ref) {
    return false;
  }
  // curvature_ref_front_axis
  if (lhs->curvature_ref_front_axis != rhs->curvature_ref_front_axis) {
    return false;
  }
  // curvature_ref_cog
  if (lhs->curvature_ref_cog != rhs->curvature_ref_cog) {
    return false;
  }
  // curvature_ref_rear_axis
  if (lhs->curvature_ref_rear_axis != rhs->curvature_ref_rear_axis) {
    return false;
  }
  // vx_ref
  if (lhs->vx_ref != rhs->vx_ref) {
    return false;
  }
  // vy_ref
  if (lhs->vy_ref != rhs->vy_ref) {
    return false;
  }
  // ax_ref
  if (lhs->ax_ref != rhs->ax_ref) {
    return false;
  }
  // ay_ref
  if (lhs->ay_ref != rhs->ay_ref) {
    return false;
  }
  // ref1
  if (lhs->ref1 != rhs->ref1) {
    return false;
  }
  // ref2
  if (lhs->ref2 != rhs->ref2) {
    return false;
  }
  // ref3
  if (lhs->ref3 != rhs->ref3) {
    return false;
  }
  // ref4
  if (lhs->ref4 != rhs->ref4) {
    return false;
  }
  // steering_without_compensation
  if (lhs->steering_without_compensation != rhs->steering_without_compensation) {
    return false;
  }
  // steering_feedback
  if (lhs->steering_feedback != rhs->steering_feedback) {
    return false;
  }
  // steering_feedforward
  if (lhs->steering_feedforward != rhs->steering_feedforward) {
    return false;
  }
  // lookforward_length
  if (lhs->lookforward_length != rhs->lookforward_length) {
    return false;
  }
  // yaw_rate_pre
  if (lhs->yaw_rate_pre != rhs->yaw_rate_pre) {
    return false;
  }
  // turning_radius
  if (lhs->turning_radius != rhs->turning_radius) {
    return false;
  }
  // adhesion_coefficient_pre
  if (lhs->adhesion_coefficient_pre != rhs->adhesion_coefficient_pre) {
    return false;
  }
  // sideslip_pre
  if (lhs->sideslip_pre != rhs->sideslip_pre) {
    return false;
  }
  // slip_angle_pre_fl
  if (lhs->slip_angle_pre_fl != rhs->slip_angle_pre_fl) {
    return false;
  }
  // slip_angle_pre_fr
  if (lhs->slip_angle_pre_fr != rhs->slip_angle_pre_fr) {
    return false;
  }
  // slip_angle_pre_rl
  if (lhs->slip_angle_pre_rl != rhs->slip_angle_pre_rl) {
    return false;
  }
  // slip_angle_pre_rr
  if (lhs->slip_angle_pre_rr != rhs->slip_angle_pre_rr) {
    return false;
  }
  // norm_force_pre_fl
  if (lhs->norm_force_pre_fl != rhs->norm_force_pre_fl) {
    return false;
  }
  // norm_force_pre_fr
  if (lhs->norm_force_pre_fr != rhs->norm_force_pre_fr) {
    return false;
  }
  // norm_force_pre_rl
  if (lhs->norm_force_pre_rl != rhs->norm_force_pre_rl) {
    return false;
  }
  // norm_force_pre_rr
  if (lhs->norm_force_pre_rr != rhs->norm_force_pre_rr) {
    return false;
  }
  // algorithm1
  if (lhs->algorithm1 != rhs->algorithm1) {
    return false;
  }
  // algorithm2
  if (lhs->algorithm2 != rhs->algorithm2) {
    return false;
  }
  // algorithm3
  if (lhs->algorithm3 != rhs->algorithm3) {
    return false;
  }
  // algorithm4
  if (lhs->algorithm4 != rhs->algorithm4) {
    return false;
  }
  return true;
}

bool
fsd_common_msgs__msg__Visualization__copy(
  const fsd_common_msgs__msg__Visualization * input,
  fsd_common_msgs__msg__Visualization * output)
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
  // lat_error_front_axis
  output->lat_error_front_axis = input->lat_error_front_axis;
  // lat_error_cog
  output->lat_error_cog = input->lat_error_cog;
  // lat_error_rear_axis
  output->lat_error_rear_axis = input->lat_error_rear_axis;
  // yaw_error_front_axis
  output->yaw_error_front_axis = input->yaw_error_front_axis;
  // yaw_error_cog
  output->yaw_error_cog = input->yaw_error_cog;
  // yaw_error_rear_axis
  output->yaw_error_rear_axis = input->yaw_error_rear_axis;
  // yaw_rate_error
  output->yaw_rate_error = input->yaw_rate_error;
  // steering_error
  output->steering_error = input->steering_error;
  // vx_error
  output->vx_error = input->vx_error;
  // vy_error
  output->vy_error = input->vy_error;
  // sideslip_error
  output->sideslip_error = input->sideslip_error;
  // motor_torq_error_lr
  output->motor_torq_error_lr = input->motor_torq_error_lr;
  // motor_torq_error_rr
  output->motor_torq_error_rr = input->motor_torq_error_rr;
  // motor_speed_error_lr
  output->motor_speed_error_lr = input->motor_speed_error_lr;
  // motor_speed_error_rr
  output->motor_speed_error_rr = input->motor_speed_error_rr;
  // error1
  output->error1 = input->error1;
  // error2
  output->error2 = input->error2;
  // error3
  output->error3 = input->error3;
  // error4
  output->error4 = input->error4;
  // yaw_ref
  output->yaw_ref = input->yaw_ref;
  // yaw_ref_front_axis
  output->yaw_ref_front_axis = input->yaw_ref_front_axis;
  // yaw_ref_cog
  output->yaw_ref_cog = input->yaw_ref_cog;
  // yaw_ref_rear_axis
  output->yaw_ref_rear_axis = input->yaw_ref_rear_axis;
  // curvature_ref
  output->curvature_ref = input->curvature_ref;
  // curvature_ref_front_axis
  output->curvature_ref_front_axis = input->curvature_ref_front_axis;
  // curvature_ref_cog
  output->curvature_ref_cog = input->curvature_ref_cog;
  // curvature_ref_rear_axis
  output->curvature_ref_rear_axis = input->curvature_ref_rear_axis;
  // vx_ref
  output->vx_ref = input->vx_ref;
  // vy_ref
  output->vy_ref = input->vy_ref;
  // ax_ref
  output->ax_ref = input->ax_ref;
  // ay_ref
  output->ay_ref = input->ay_ref;
  // ref1
  output->ref1 = input->ref1;
  // ref2
  output->ref2 = input->ref2;
  // ref3
  output->ref3 = input->ref3;
  // ref4
  output->ref4 = input->ref4;
  // steering_without_compensation
  output->steering_without_compensation = input->steering_without_compensation;
  // steering_feedback
  output->steering_feedback = input->steering_feedback;
  // steering_feedforward
  output->steering_feedforward = input->steering_feedforward;
  // lookforward_length
  output->lookforward_length = input->lookforward_length;
  // yaw_rate_pre
  output->yaw_rate_pre = input->yaw_rate_pre;
  // turning_radius
  output->turning_radius = input->turning_radius;
  // adhesion_coefficient_pre
  output->adhesion_coefficient_pre = input->adhesion_coefficient_pre;
  // sideslip_pre
  output->sideslip_pre = input->sideslip_pre;
  // slip_angle_pre_fl
  output->slip_angle_pre_fl = input->slip_angle_pre_fl;
  // slip_angle_pre_fr
  output->slip_angle_pre_fr = input->slip_angle_pre_fr;
  // slip_angle_pre_rl
  output->slip_angle_pre_rl = input->slip_angle_pre_rl;
  // slip_angle_pre_rr
  output->slip_angle_pre_rr = input->slip_angle_pre_rr;
  // norm_force_pre_fl
  output->norm_force_pre_fl = input->norm_force_pre_fl;
  // norm_force_pre_fr
  output->norm_force_pre_fr = input->norm_force_pre_fr;
  // norm_force_pre_rl
  output->norm_force_pre_rl = input->norm_force_pre_rl;
  // norm_force_pre_rr
  output->norm_force_pre_rr = input->norm_force_pre_rr;
  // algorithm1
  output->algorithm1 = input->algorithm1;
  // algorithm2
  output->algorithm2 = input->algorithm2;
  // algorithm3
  output->algorithm3 = input->algorithm3;
  // algorithm4
  output->algorithm4 = input->algorithm4;
  return true;
}

fsd_common_msgs__msg__Visualization *
fsd_common_msgs__msg__Visualization__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__Visualization * msg = (fsd_common_msgs__msg__Visualization *)allocator.allocate(sizeof(fsd_common_msgs__msg__Visualization), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fsd_common_msgs__msg__Visualization));
  bool success = fsd_common_msgs__msg__Visualization__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fsd_common_msgs__msg__Visualization__destroy(fsd_common_msgs__msg__Visualization * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fsd_common_msgs__msg__Visualization__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fsd_common_msgs__msg__Visualization__Sequence__init(fsd_common_msgs__msg__Visualization__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__Visualization * data = NULL;

  if (size) {
    data = (fsd_common_msgs__msg__Visualization *)allocator.zero_allocate(size, sizeof(fsd_common_msgs__msg__Visualization), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fsd_common_msgs__msg__Visualization__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fsd_common_msgs__msg__Visualization__fini(&data[i - 1]);
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
fsd_common_msgs__msg__Visualization__Sequence__fini(fsd_common_msgs__msg__Visualization__Sequence * array)
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
      fsd_common_msgs__msg__Visualization__fini(&array->data[i]);
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

fsd_common_msgs__msg__Visualization__Sequence *
fsd_common_msgs__msg__Visualization__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fsd_common_msgs__msg__Visualization__Sequence * array = (fsd_common_msgs__msg__Visualization__Sequence *)allocator.allocate(sizeof(fsd_common_msgs__msg__Visualization__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fsd_common_msgs__msg__Visualization__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fsd_common_msgs__msg__Visualization__Sequence__destroy(fsd_common_msgs__msg__Visualization__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fsd_common_msgs__msg__Visualization__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fsd_common_msgs__msg__Visualization__Sequence__are_equal(const fsd_common_msgs__msg__Visualization__Sequence * lhs, const fsd_common_msgs__msg__Visualization__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fsd_common_msgs__msg__Visualization__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fsd_common_msgs__msg__Visualization__Sequence__copy(
  const fsd_common_msgs__msg__Visualization__Sequence * input,
  fsd_common_msgs__msg__Visualization__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fsd_common_msgs__msg__Visualization);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fsd_common_msgs__msg__Visualization * data =
      (fsd_common_msgs__msg__Visualization *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fsd_common_msgs__msg__Visualization__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fsd_common_msgs__msg__Visualization__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fsd_common_msgs__msg__Visualization__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
