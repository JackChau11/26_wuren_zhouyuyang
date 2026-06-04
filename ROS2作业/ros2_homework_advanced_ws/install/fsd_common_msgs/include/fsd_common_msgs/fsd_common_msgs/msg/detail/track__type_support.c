// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fsd_common_msgs:msg/Track.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fsd_common_msgs/msg/detail/track__rosidl_typesupport_introspection_c.h"
#include "fsd_common_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fsd_common_msgs/msg/detail/track__functions.h"
#include "fsd_common_msgs/msg/detail/track__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `cones_left`
// Member `cones_right`
// Member `cones_orange`
// Member `cones_orange_big`
// Member `tk_device_start`
// Member `tk_device_end`
#include "geometry_msgs/msg/point.h"
// Member `cones_left`
// Member `cones_right`
// Member `cones_orange`
// Member `cones_orange_big`
// Member `tk_device_start`
// Member `tk_device_end`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fsd_common_msgs__msg__Track__init(message_memory);
}

void fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_fini_function(void * message_memory)
{
  fsd_common_msgs__msg__Track__fini(message_memory);
}

size_t fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__cones_left(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__cones_left(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__cones_left(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__cones_left(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__cones_left(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__cones_left(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__cones_left(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__resize_function__Track__cones_left(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__cones_right(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__cones_right(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__cones_right(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__cones_right(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__cones_right(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__cones_right(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__cones_right(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__resize_function__Track__cones_right(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__cones_orange(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__cones_orange(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__cones_orange(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__cones_orange(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__cones_orange(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__cones_orange(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__cones_orange(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__resize_function__Track__cones_orange(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__cones_orange_big(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__cones_orange_big(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__cones_orange_big(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__cones_orange_big(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__cones_orange_big(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__cones_orange_big(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__cones_orange_big(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__resize_function__Track__cones_orange_big(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__tk_device_start(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__tk_device_start(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__tk_device_start(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__tk_device_start(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__tk_device_start(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__tk_device_start(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__tk_device_start(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__resize_function__Track__tk_device_start(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__tk_device_end(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__tk_device_end(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__tk_device_end(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__tk_device_end(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__tk_device_end(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__tk_device_end(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__tk_device_end(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__resize_function__Track__tk_device_end(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__Track, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cones_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__Track, cones_left),  // bytes offset in struct
    NULL,  // default value
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__cones_left,  // size() function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__cones_left,  // get_const(index) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__cones_left,  // get(index) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__cones_left,  // fetch(index, &value) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__cones_left,  // assign(index, value) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__resize_function__Track__cones_left  // resize(index) function pointer
  },
  {
    "cones_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__Track, cones_right),  // bytes offset in struct
    NULL,  // default value
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__cones_right,  // size() function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__cones_right,  // get_const(index) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__cones_right,  // get(index) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__cones_right,  // fetch(index, &value) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__cones_right,  // assign(index, value) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__resize_function__Track__cones_right  // resize(index) function pointer
  },
  {
    "cones_orange",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__Track, cones_orange),  // bytes offset in struct
    NULL,  // default value
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__cones_orange,  // size() function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__cones_orange,  // get_const(index) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__cones_orange,  // get(index) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__cones_orange,  // fetch(index, &value) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__cones_orange,  // assign(index, value) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__resize_function__Track__cones_orange  // resize(index) function pointer
  },
  {
    "cones_orange_big",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__Track, cones_orange_big),  // bytes offset in struct
    NULL,  // default value
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__cones_orange_big,  // size() function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__cones_orange_big,  // get_const(index) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__cones_orange_big,  // get(index) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__cones_orange_big,  // fetch(index, &value) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__cones_orange_big,  // assign(index, value) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__resize_function__Track__cones_orange_big  // resize(index) function pointer
  },
  {
    "tk_device_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__Track, tk_device_start),  // bytes offset in struct
    NULL,  // default value
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__tk_device_start,  // size() function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__tk_device_start,  // get_const(index) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__tk_device_start,  // get(index) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__tk_device_start,  // fetch(index, &value) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__tk_device_start,  // assign(index, value) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__resize_function__Track__tk_device_start  // resize(index) function pointer
  },
  {
    "tk_device_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__Track, tk_device_end),  // bytes offset in struct
    NULL,  // default value
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__size_function__Track__tk_device_end,  // size() function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_const_function__Track__tk_device_end,  // get_const(index) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__get_function__Track__tk_device_end,  // get(index) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__fetch_function__Track__tk_device_end,  // fetch(index, &value) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__assign_function__Track__tk_device_end,  // assign(index, value) function pointer
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__resize_function__Track__tk_device_end  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_members = {
  "fsd_common_msgs__msg",  // message namespace
  "Track",  // message name
  7,  // number of fields
  sizeof(fsd_common_msgs__msg__Track),
  fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array,  // message members
  fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_init_function,  // function to initialize message memory (memory has to be allocated)
  fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle = {
  0,
  &fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fsd_common_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fsd_common_msgs, msg, Track)() {
  fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle.typesupport_identifier) {
    fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fsd_common_msgs__msg__Track__rosidl_typesupport_introspection_c__Track_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
