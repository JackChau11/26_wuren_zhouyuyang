// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fsd_common_msgs:msg/SkidpadGlobalCenterLine.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fsd_common_msgs/msg/detail/skidpad_global_center_line__rosidl_typesupport_introspection_c.h"
#include "fsd_common_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fsd_common_msgs/msg/detail/skidpad_global_center_line__functions.h"
#include "fsd_common_msgs/msg/detail/skidpad_global_center_line__struct.h"


// Include directives for member types
// Member `global_path`
#include "nav_msgs/msg/path.h"
// Member `global_path`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fsd_common_msgs__msg__SkidpadGlobalCenterLine__rosidl_typesupport_introspection_c__SkidpadGlobalCenterLine_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fsd_common_msgs__msg__SkidpadGlobalCenterLine__init(message_memory);
}

void fsd_common_msgs__msg__SkidpadGlobalCenterLine__rosidl_typesupport_introspection_c__SkidpadGlobalCenterLine_fini_function(void * message_memory)
{
  fsd_common_msgs__msg__SkidpadGlobalCenterLine__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember fsd_common_msgs__msg__SkidpadGlobalCenterLine__rosidl_typesupport_introspection_c__SkidpadGlobalCenterLine_message_member_array[2] = {
  {
    "global_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__SkidpadGlobalCenterLine, global_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_reach_mid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__SkidpadGlobalCenterLine, is_reach_mid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fsd_common_msgs__msg__SkidpadGlobalCenterLine__rosidl_typesupport_introspection_c__SkidpadGlobalCenterLine_message_members = {
  "fsd_common_msgs__msg",  // message namespace
  "SkidpadGlobalCenterLine",  // message name
  2,  // number of fields
  sizeof(fsd_common_msgs__msg__SkidpadGlobalCenterLine),
  fsd_common_msgs__msg__SkidpadGlobalCenterLine__rosidl_typesupport_introspection_c__SkidpadGlobalCenterLine_message_member_array,  // message members
  fsd_common_msgs__msg__SkidpadGlobalCenterLine__rosidl_typesupport_introspection_c__SkidpadGlobalCenterLine_init_function,  // function to initialize message memory (memory has to be allocated)
  fsd_common_msgs__msg__SkidpadGlobalCenterLine__rosidl_typesupport_introspection_c__SkidpadGlobalCenterLine_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fsd_common_msgs__msg__SkidpadGlobalCenterLine__rosidl_typesupport_introspection_c__SkidpadGlobalCenterLine_message_type_support_handle = {
  0,
  &fsd_common_msgs__msg__SkidpadGlobalCenterLine__rosidl_typesupport_introspection_c__SkidpadGlobalCenterLine_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fsd_common_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fsd_common_msgs, msg, SkidpadGlobalCenterLine)() {
  fsd_common_msgs__msg__SkidpadGlobalCenterLine__rosidl_typesupport_introspection_c__SkidpadGlobalCenterLine_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  if (!fsd_common_msgs__msg__SkidpadGlobalCenterLine__rosidl_typesupport_introspection_c__SkidpadGlobalCenterLine_message_type_support_handle.typesupport_identifier) {
    fsd_common_msgs__msg__SkidpadGlobalCenterLine__rosidl_typesupport_introspection_c__SkidpadGlobalCenterLine_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fsd_common_msgs__msg__SkidpadGlobalCenterLine__rosidl_typesupport_introspection_c__SkidpadGlobalCenterLine_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
