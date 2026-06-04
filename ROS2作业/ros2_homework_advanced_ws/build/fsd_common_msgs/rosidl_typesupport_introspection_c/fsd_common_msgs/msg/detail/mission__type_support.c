// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fsd_common_msgs:msg/Mission.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fsd_common_msgs/msg/detail/mission__rosidl_typesupport_introspection_c.h"
#include "fsd_common_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fsd_common_msgs/msg/detail/mission__functions.h"
#include "fsd_common_msgs/msg/detail/mission__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `mission`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fsd_common_msgs__msg__Mission__rosidl_typesupport_introspection_c__Mission_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fsd_common_msgs__msg__Mission__init(message_memory);
}

void fsd_common_msgs__msg__Mission__rosidl_typesupport_introspection_c__Mission_fini_function(void * message_memory)
{
  fsd_common_msgs__msg__Mission__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember fsd_common_msgs__msg__Mission__rosidl_typesupport_introspection_c__Mission_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__Mission, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mission",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__Mission, mission),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "finished",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fsd_common_msgs__msg__Mission, finished),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fsd_common_msgs__msg__Mission__rosidl_typesupport_introspection_c__Mission_message_members = {
  "fsd_common_msgs__msg",  // message namespace
  "Mission",  // message name
  3,  // number of fields
  sizeof(fsd_common_msgs__msg__Mission),
  fsd_common_msgs__msg__Mission__rosidl_typesupport_introspection_c__Mission_message_member_array,  // message members
  fsd_common_msgs__msg__Mission__rosidl_typesupport_introspection_c__Mission_init_function,  // function to initialize message memory (memory has to be allocated)
  fsd_common_msgs__msg__Mission__rosidl_typesupport_introspection_c__Mission_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fsd_common_msgs__msg__Mission__rosidl_typesupport_introspection_c__Mission_message_type_support_handle = {
  0,
  &fsd_common_msgs__msg__Mission__rosidl_typesupport_introspection_c__Mission_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fsd_common_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fsd_common_msgs, msg, Mission)() {
  fsd_common_msgs__msg__Mission__rosidl_typesupport_introspection_c__Mission_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!fsd_common_msgs__msg__Mission__rosidl_typesupport_introspection_c__Mission_message_type_support_handle.typesupport_identifier) {
    fsd_common_msgs__msg__Mission__rosidl_typesupport_introspection_c__Mission_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fsd_common_msgs__msg__Mission__rosidl_typesupport_introspection_c__Mission_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
