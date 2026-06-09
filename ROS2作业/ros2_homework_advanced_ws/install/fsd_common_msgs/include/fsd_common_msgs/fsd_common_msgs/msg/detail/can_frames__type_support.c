// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fsd_common_msgs:msg/CanFrames.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fsd_common_msgs/msg/detail/can_frames__rosidl_typesupport_introspection_c.h"
#include "fsd_common_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fsd_common_msgs/msg/detail/can_frames__functions.h"
#include "fsd_common_msgs/msg/detail/can_frames__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `frames`
#include "can_msgs/msg/frame.h"
// Member `frames`
#include "can_msgs/msg/detail/frame__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__CanFrames_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fsd_common_msgs__msg__CanFrames__init(message_memory);
}

void fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__CanFrames_fini_function(void * message_memory)
{
  fsd_common_msgs__msg__CanFrames__fini(message_memory);
}

size_t fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__size_function__CanFrames__frames(
  const void * untyped_member)
{
  const can_msgs__msg__Frame__Sequence * member =
    (const can_msgs__msg__Frame__Sequence *)(untyped_member);
  return member->size;
}

const void * fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__get_const_function__CanFrames__frames(
  const void * untyped_member, size_t index)
{
  const can_msgs__msg__Frame__Sequence * member =
    (const can_msgs__msg__Frame__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__get_function__CanFrames__frames(
  void * untyped_member, size_t index)
{
  can_msgs__msg__Frame__Sequence * member =
    (can_msgs__msg__Frame__Sequence *)(untyped_member);
  return &member->data[index];
}

void fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__fetch_function__CanFrames__frames(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const can_msgs__msg__Frame * item =
    ((const can_msgs__msg__Frame *)
    fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__get_const_function__CanFrames__frames(untyped_member, index));
  can_msgs__msg__Frame * value =
    (can_msgs__msg__Frame *)(untyped_value);
  *value = *item;
}

void fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__assign_function__CanFrames__frames(
  void * untyped_member, size_t index, const void * untyped_value)
{
  can_msgs__msg__Frame * item =
    ((can_msgs__msg__Frame *)
    fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__get_function__CanFrames__frames(untyped_member, index));
  const can_msgs__msg__Frame * value =
    (const can_msgs__msg__Frame *)(untyped_value);
  *item = *value;
}

bool fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__resize_function__CanFrames__frames(
  void * untyped_member, size_t size)
{
  can_msgs__msg__Frame__Sequence * member =
    (can_msgs__msg__Frame__Sequence *)(untyped_member);
  can_msgs__msg__Frame__Sequence__fini(member);
  return can_msgs__msg__Frame__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__CanFrames_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__CanFrames, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frames",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__CanFrames, frames),  // bytes offset in struct
    NULL,  // default value
    fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__size_function__CanFrames__frames,  // size() function pointer
    fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__get_const_function__CanFrames__frames,  // get_const(index) function pointer
    fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__get_function__CanFrames__frames,  // get(index) function pointer
    fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__fetch_function__CanFrames__frames,  // fetch(index, &value) function pointer
    fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__assign_function__CanFrames__frames,  // assign(index, value) function pointer
    fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__resize_function__CanFrames__frames  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__CanFrames_message_members = {
  "fsd_common_msgs__msg",  // message namespace
  "CanFrames",  // message name
  2,  // number of fields
  sizeof(fsd_common_msgs__msg__CanFrames),
  fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__CanFrames_message_member_array,  // message members
  fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__CanFrames_init_function,  // function to initialize message memory (memory has to be allocated)
  fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__CanFrames_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__CanFrames_message_type_support_handle = {
  0,
  &fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__CanFrames_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fsd_common_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fsd_common_msgs, msg, CanFrames)() {
  fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__CanFrames_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__CanFrames_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, can_msgs, msg, Frame)();
  if (!fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__CanFrames_message_type_support_handle.typesupport_identifier) {
    fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__CanFrames_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fsd_common_msgs__msg__CanFrames__rosidl_typesupport_introspection_c__CanFrames_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
