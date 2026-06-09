// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fsd_common_msgs:msg/YoloCone.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fsd_common_msgs/msg/detail/yolo_cone__rosidl_typesupport_introspection_c.h"
#include "fsd_common_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fsd_common_msgs/msg/detail/yolo_cone__functions.h"
#include "fsd_common_msgs/msg/detail/yolo_cone__struct.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `width`
// Member `height`
// Member `color_confidence`
#include "std_msgs/msg/float32.h"
// Member `x`
// Member `y`
// Member `width`
// Member `height`
// Member `color_confidence`
#include "std_msgs/msg/detail/float32__rosidl_typesupport_introspection_c.h"
// Member `color`
#include "std_msgs/msg/string.h"
// Member `color`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fsd_common_msgs__msg__YoloCone__init(message_memory);
}

void fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_fini_function(void * message_memory)
{
  fsd_common_msgs__msg__YoloCone__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_message_member_array[6] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__YoloCone, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__YoloCone, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__YoloCone, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__YoloCone, height),  // bytes offset in struct
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
    offsetof(fsd_common_msgs__msg__YoloCone, color),  // bytes offset in struct
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
    offsetof(fsd_common_msgs__msg__YoloCone, color_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_message_members = {
  "fsd_common_msgs__msg",  // message namespace
  "YoloCone",  // message name
  6,  // number of fields
  sizeof(fsd_common_msgs__msg__YoloCone),
  fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_message_member_array,  // message members
  fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_init_function,  // function to initialize message memory (memory has to be allocated)
  fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_message_type_support_handle = {
  0,
  &fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fsd_common_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fsd_common_msgs, msg, YoloCone)() {
  fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  if (!fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_message_type_support_handle.typesupport_identifier) {
    fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fsd_common_msgs__msg__YoloCone__rosidl_typesupport_introspection_c__YoloCone_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
