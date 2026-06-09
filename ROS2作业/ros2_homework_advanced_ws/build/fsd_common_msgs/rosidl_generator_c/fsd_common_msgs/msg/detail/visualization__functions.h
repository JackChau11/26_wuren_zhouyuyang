// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fsd_common_msgs:msg/Visualization.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__VISUALIZATION__FUNCTIONS_H_
#define FSD_COMMON_MSGS__MSG__DETAIL__VISUALIZATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fsd_common_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "fsd_common_msgs/msg/detail/visualization__struct.h"

/// Initialize msg/Visualization message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fsd_common_msgs__msg__Visualization
 * )) before or use
 * fsd_common_msgs__msg__Visualization__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
bool
fsd_common_msgs__msg__Visualization__init(fsd_common_msgs__msg__Visualization * msg);

/// Finalize msg/Visualization message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
void
fsd_common_msgs__msg__Visualization__fini(fsd_common_msgs__msg__Visualization * msg);

/// Create msg/Visualization message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fsd_common_msgs__msg__Visualization__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
fsd_common_msgs__msg__Visualization *
fsd_common_msgs__msg__Visualization__create();

/// Destroy msg/Visualization message.
/**
 * It calls
 * fsd_common_msgs__msg__Visualization__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
void
fsd_common_msgs__msg__Visualization__destroy(fsd_common_msgs__msg__Visualization * msg);

/// Check for msg/Visualization message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
bool
fsd_common_msgs__msg__Visualization__are_equal(const fsd_common_msgs__msg__Visualization * lhs, const fsd_common_msgs__msg__Visualization * rhs);

/// Copy a msg/Visualization message.
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
fsd_common_msgs__msg__Visualization__copy(
  const fsd_common_msgs__msg__Visualization * input,
  fsd_common_msgs__msg__Visualization * output);

/// Initialize array of msg/Visualization messages.
/**
 * It allocates the memory for the number of elements and calls
 * fsd_common_msgs__msg__Visualization__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
bool
fsd_common_msgs__msg__Visualization__Sequence__init(fsd_common_msgs__msg__Visualization__Sequence * array, size_t size);

/// Finalize array of msg/Visualization messages.
/**
 * It calls
 * fsd_common_msgs__msg__Visualization__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
void
fsd_common_msgs__msg__Visualization__Sequence__fini(fsd_common_msgs__msg__Visualization__Sequence * array);

/// Create array of msg/Visualization messages.
/**
 * It allocates the memory for the array and calls
 * fsd_common_msgs__msg__Visualization__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
fsd_common_msgs__msg__Visualization__Sequence *
fsd_common_msgs__msg__Visualization__Sequence__create(size_t size);

/// Destroy array of msg/Visualization messages.
/**
 * It calls
 * fsd_common_msgs__msg__Visualization__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
void
fsd_common_msgs__msg__Visualization__Sequence__destroy(fsd_common_msgs__msg__Visualization__Sequence * array);

/// Check for msg/Visualization message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
bool
fsd_common_msgs__msg__Visualization__Sequence__are_equal(const fsd_common_msgs__msg__Visualization__Sequence * lhs, const fsd_common_msgs__msg__Visualization__Sequence * rhs);

/// Copy an array of msg/Visualization messages.
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
fsd_common_msgs__msg__Visualization__Sequence__copy(
  const fsd_common_msgs__msg__Visualization__Sequence * input,
  fsd_common_msgs__msg__Visualization__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__VISUALIZATION__FUNCTIONS_H_
