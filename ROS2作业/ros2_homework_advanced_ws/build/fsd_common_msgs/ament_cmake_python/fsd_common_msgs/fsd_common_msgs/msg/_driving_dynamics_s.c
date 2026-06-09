// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fsd_common_msgs:msg/DrivingDynamics.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "fsd_common_msgs/msg/detail/driving_dynamics__struct.h"
#include "fsd_common_msgs/msg/detail/driving_dynamics__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool fsd_common_msgs__msg__driving_dynamics__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("fsd_common_msgs.msg._driving_dynamics.DrivingDynamics", full_classname_dest, 53) == 0);
  }
  fsd_common_msgs__msg__DrivingDynamics * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speed_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_actual
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_actual");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_actual = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_angle_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_angle_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_angle_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_angle_actual
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_angle_actual");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_angle_actual = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_hydr_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_hydr_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_hydr_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_hydr_actual
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_hydr_actual");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_hydr_actual = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // motor_moment_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_moment_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motor_moment_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // motor_moment_actual
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_moment_actual");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motor_moment_actual = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceleration_longitudinal
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_longitudinal");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration_longitudinal = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acceleration_lateral
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_lateral");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration_lateral = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fsd_common_msgs__msg__driving_dynamics__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DrivingDynamics */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fsd_common_msgs.msg._driving_dynamics");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DrivingDynamics");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fsd_common_msgs__msg__DrivingDynamics * ros_message = (fsd_common_msgs__msg__DrivingDynamics *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_actual
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_actual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_actual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_angle_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_angle_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_angle_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_angle_actual
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_angle_actual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_angle_actual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_hydr_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_hydr_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_hydr_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_hydr_actual
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_hydr_actual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_hydr_actual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_moment_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motor_moment_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_moment_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_moment_actual
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motor_moment_actual);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_moment_actual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_longitudinal
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration_longitudinal);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_longitudinal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_lateral
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration_lateral);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_lateral", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
