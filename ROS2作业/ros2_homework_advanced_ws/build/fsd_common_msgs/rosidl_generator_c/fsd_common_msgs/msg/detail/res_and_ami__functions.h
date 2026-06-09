// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fsd_common_msgs:msg/ResAndAmi.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__RES_AND_AMI__FUNCTIONS_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__RES_AND_AMI__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fsd_common_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "fsd_common_msgs/msg/detail/res_and_ami__struct.h"

/// Initialize msg/ResAndAmi message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fsd_common_msgs__msg__ResAndAmi
 * )) before or use
 * fsd_common_msgs__msg__ResAndAmi__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
bool
fsd_common_msgs__msg__ResAndAmi__init(fsd_common_msgs__msg__ResAndAmi * msg);

/// Finalize msg/ResAndAmi message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
void
fsd_common_msgs__msg__ResAndAmi__fini(fsd_common_msgs__msg__ResAndAmi * msg);

/// Create msg/ResAndAmi message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fsd_common_msgs__msg__ResAndAmi__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
fsd_common_msgs__msg__ResAndAmi *
fsd_common_msgs__msg__ResAndAmi__create();

/// Destroy msg/ResAndAmi message.
/**
 * It calls
 * fsd_common_msgs__msg__ResAndAmi__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
void
fsd_common_msgs__msg__ResAndAmi__destroy(fsd_common_msgs__msg__ResAndAmi * msg);

/// Check for msg/ResAndAmi message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
bool
fsd_common_msgs__msg__ResAndAmi__are_equal(const fsd_common_msgs__msg__ResAndAmi * lhs, const fsd_common_msgs__msg__ResAndAmi * rhs);

/// Copy a msg/ResAndAmi message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
bool
fsd_common_msgs__msg__ResAndAmi__copy(
  const fsd_common_msgs__msg__ResAndAmi * input,
  fsd_common_msgs__msg__ResAndAmi * output);

/// Initialize array of msg/ResAndAmi messages.
/**
 * It allocates the memory for the number of elements and calls
 * fsd_common_msgs__msg__ResAndAmi__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
bool
fsd_common_msgs__msg__ResAndAmi__Sequence__init(fsd_common_msgs__msg__ResAndAmi__Sequence * array, size_t size);

/// Finalize array of msg/ResAndAmi messages.
/**
 * It calls
 * fsd_common_msgs__msg__ResAndAmi__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
void
fsd_common_msgs__msg__ResAndAmi__Sequence__fini(fsd_common_msgs__msg__ResAndAmi__Sequence * array);

/// Create array of msg/ResAndAmi messages.
/**
 * It allocates the memory for the array and calls
 * fsd_common_msgs__msg__ResAndAmi__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
fsd_common_msgs__msg__ResAndAmi__Sequence *
fsd_common_msgs__msg__ResAndAmi__Sequence__create(size_t size);

/// Destroy array of msg/ResAndAmi messages.
/**
 * It calls
 * fsd_common_msgs__msg__ResAndAmi__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
void
fsd_common_msgs__msg__ResAndAmi__Sequence__destroy(fsd_common_msgs__msg__ResAndAmi__Sequence * array);

/// Check for msg/ResAndAmi message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
bool
fsd_common_msgs__msg__ResAndAmi__Sequence__are_equal(const fsd_common_msgs__msg__ResAndAmi__Sequence * lhs, const fsd_common_msgs__msg__ResAndAmi__Sequence * rhs);

/// Copy an array of msg/ResAndAmi messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
bool
fsd_common_msgs__msg__ResAndAmi__Sequence__copy(
  const fsd_common_msgs__msg__ResAndAmi__Sequence * input,
  fsd_common_msgs__msg__ResAndAmi__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__RES_AND_AMI__FUNCTIONS_H_
