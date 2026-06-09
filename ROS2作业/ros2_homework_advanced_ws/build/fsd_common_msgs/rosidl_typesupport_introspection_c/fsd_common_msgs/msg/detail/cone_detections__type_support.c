// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fsd_common_msgs:msg/ConeDetections.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fsd_common_msgs/msg/detail/cone_detections__rosidl_typesupport_introspection_c.h"
#include "fsd_common_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fsd_common_msgs/msg/detail/cone_detections__functions.h"
#include "fsd_common_msgs/msg/detail/cone_detections__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `cone_detections`
#include "fsd_common_msgs/msg/cone.h"
// Member `cone_detections`
#include "fsd_common_msgs/msg/detail/cone__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__ConeDetections_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fsd_common_msgs__msg__ConeDetections__init(message_memory);
}

void fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__ConeDetections_fini_function(void * message_memory)
{
  fsd_common_msgs__msg__ConeDetections__fini(message_memory);
}

size_t fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__size_function__ConeDetections__cone_detections(
  const void * untyped_member)
{
  const fsd_common_msgs__msg__Cone__Sequence * member =
    (const fsd_common_msgs__msg__Cone__Sequence *)(untyped_member);
  return member->size;
}

const void * fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__get_const_function__ConeDetections__cone_detections(
  const void * untyped_member, size_t index)
{
  const fsd_common_msgs__msg__Cone__Sequence * member =
    (const fsd_common_msgs__msg__Cone__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__get_function__ConeDetections__cone_detections(
  void * untyped_member, size_t index)
{
  fsd_common_msgs__msg__Cone__Sequence * member =
    (fsd_common_msgs__msg__Cone__Sequence *)(untyped_member);
  return &member->data[index];
}

void fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__fetch_function__ConeDetections__cone_detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const fsd_common_msgs__msg__Cone * item =
    ((const fsd_common_msgs__msg__Cone *)
    fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__get_const_function__ConeDetections__cone_detections(untyped_member, index));
  fsd_common_msgs__msg__Cone * value =
    (fsd_common_msgs__msg__Cone *)(untyped_value);
  *value = *item;
}

void fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__assign_function__ConeDetections__cone_detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  fsd_common_msgs__msg__Cone * item =
    ((fsd_common_msgs__msg__Cone *)
    fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__get_function__ConeDetections__cone_detections(untyped_member, index));
  const fsd_common_msgs__msg__Cone * value =
    (const fsd_common_msgs__msg__Cone *)(untyped_value);
  *item = *value;
}

bool fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__resize_function__ConeDetections__cone_detections(
  void * untyped_member, size_t size)
{
  fsd_common_msgs__msg__Cone__Sequence * member =
    (fsd_common_msgs__msg__Cone__Sequence *)(untyped_member);
  fsd_common_msgs__msg__Cone__Sequence__fini(member);
  return fsd_common_msgs__msg__Cone__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__ConeDetections_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__ConeDetections, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cone_detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__ConeDetections, cone_detections),  // bytes offset in struct
    NULL,  // default value
    fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__size_function__ConeDetections__cone_detections,  // size() function pointer
    fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__get_const_function__ConeDetections__cone_detections,  // get_const(index) function pointer
    fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__get_function__ConeDetections__cone_detections,  // get(index) function pointer
    fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__fetch_function__ConeDetections__cone_detections,  // fetch(index, &value) function pointer
    fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__assign_function__ConeDetections__cone_detections,  // assign(index, value) function pointer
    fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__resize_function__ConeDetections__cone_detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__ConeDetections_message_members = {
  "fsd_common_msgs__msg",  // message namespace
  "ConeDetections",  // message name
  2,  // number of fields
  sizeof(fsd_common_msgs__msg__ConeDetections),
  fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__ConeDetections_message_member_array,  // message members
  fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__ConeDetections_init_function,  // function to initialize message memory (memory has to be allocated)
  fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__ConeDetections_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__ConeDetections_message_type_support_handle = {
  0,
  &fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__ConeDetections_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fsd_common_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fsd_common_msgs, msg, ConeDetections)() {
  fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__ConeDetections_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__ConeDetections_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fsd_common_msgs, msg, Cone)();
  if (!fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__ConeDetections_message_type_support_handle.typesupport_identifier) {
    fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__ConeDetections_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fsd_common_msgs__msg__ConeDetections__rosidl_typesupport_introspection_c__ConeDetections_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
