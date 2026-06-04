// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fsd_common_msgs:msg/ConeDbscan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fsd_common_msgs/msg/detail/cone_dbscan__rosidl_typesupport_introspection_c.h"
#include "fsd_common_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fsd_common_msgs/msg/detail/cone_dbscan__functions.h"
#include "fsd_common_msgs/msg/detail/cone_dbscan__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `color`
#include "std_msgs/msg/string.h"
// Member `color`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"
// Member `pose_confidence`
// Member `color_confidence`
#include "std_msgs/msg/float32.h"
// Member `pose_confidence`
// Member `color_confidence`
#include "std_msgs/msg/detail/float32__rosidl_typesupport_introspection_c.h"
// Member `corepts`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fsd_common_msgs__msg__ConeDbscan__init(message_memory);
}

void fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_fini_function(void * message_memory)
{
  fsd_common_msgs__msg__ConeDbscan__fini(message_memory);
}

size_t fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__size_function__ConeDbscan__corepts(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__get_const_function__ConeDbscan__corepts(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__get_function__ConeDbscan__corepts(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__fetch_function__ConeDbscan__corepts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__get_const_function__ConeDbscan__corepts(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__assign_function__ConeDbscan__corepts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__get_function__ConeDbscan__corepts(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__resize_function__ConeDbscan__corepts(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_message_member_array[9] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__ConeDbscan, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__ConeDbscan, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__ConeDbscan, pose_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "color_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__ConeDbscan, color_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cluster",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__ConeDbscan, cluster),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__ConeDbscan, point_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__ConeDbscan, pts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "visited",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__ConeDbscan, visited),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "corepts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__ConeDbscan, corepts),  // bytes offset in struct
    NULL,  // default value
    fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__size_function__ConeDbscan__corepts,  // size() function pointer
    fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__get_const_function__ConeDbscan__corepts,  // get_const(index) function pointer
    fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__get_function__ConeDbscan__corepts,  // get(index) function pointer
    fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__fetch_function__ConeDbscan__corepts,  // fetch(index, &value) function pointer
    fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__assign_function__ConeDbscan__corepts,  // assign(index, value) function pointer
    fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__resize_function__ConeDbscan__corepts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_message_members = {
  "fsd_common_msgs__msg",  // message namespace
  "ConeDbscan",  // message name
  9,  // number of fields
  sizeof(fsd_common_msgs__msg__ConeDbscan),
  fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_message_member_array,  // message members
  fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_init_function,  // function to initialize message memory (memory has to be allocated)
  fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_message_type_support_handle = {
  0,
  &fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fsd_common_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fsd_common_msgs, msg, ConeDbscan)() {
  fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  if (!fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_message_type_support_handle.typesupport_identifier) {
    fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fsd_common_msgs__msg__ConeDbscan__rosidl_typesupport_introspection_c__ConeDbscan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
