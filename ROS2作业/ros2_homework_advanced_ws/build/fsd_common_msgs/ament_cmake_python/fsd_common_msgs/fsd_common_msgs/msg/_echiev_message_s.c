// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fsd_common_msgs:msg/EchievMessage.idl
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
#include "fsd_common_msgs/msg/detail/echiev_message__struct.h"
#include "fsd_common_msgs/msg/detail/echiev_message__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool fsd_common_msgs__msg__echiev_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("fsd_common_msgs.msg._echiev_message.EchievMessage", full_classname_dest, 49) == 0);
  }
  fsd_common_msgs__msg__EchievMessage * ros_message = _ros_message;
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
  {  // frame_id_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame_id_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frame_id_num = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // ull_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "ull_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ull_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // h
    PyObject * field = PyObject_GetAttrString(_pymsg, "h");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->h = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vn
    PyObject * field = PyObject_GetAttrString(_pymsg, "vn");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vn = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ve
    PyObject * field = PyObject_GetAttrString(_pymsg, "ve");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ve = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vh
    PyObject * field = PyObject_GetAttrString(_pymsg, "vh");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vh = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fsd_common_msgs__msg__echiev_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EchievMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fsd_common_msgs.msg._echiev_message");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EchievMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fsd_common_msgs__msg__EchievMessage * ros_message = (fsd_common_msgs__msg__EchievMessage *)raw_ros_message;
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
  {  // frame_id_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->frame_id_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame_id_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ull_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->ull_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ull_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // h
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->h);
    {
      int rc = PyObject_SetAttrString(_pymessage, "h", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vn
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ve
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ve);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ve", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vh
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vh);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vh", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gyro_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gyro_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gyro_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gps_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
