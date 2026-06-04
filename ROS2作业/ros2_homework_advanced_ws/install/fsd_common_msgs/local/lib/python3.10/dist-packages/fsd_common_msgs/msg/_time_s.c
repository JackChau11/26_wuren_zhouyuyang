// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fsd_common_msgs:msg/Time.idl
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
#include "fsd_common_msgs/msg/detail/time__struct.h"
#include "fsd_common_msgs/msg/detail/time__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool fsd_common_msgs__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
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
    assert(strncmp("fsd_common_msgs.msg._time.Time", full_classname_dest, 30) == 0);
  }
  fsd_common_msgs__msg__Time * ros_message = _ros_message;
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
  {  // sum_compute_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "sum_compute_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sum_compute_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // control_compute_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_compute_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->control_compute_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // boundary_detector_compute_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "boundary_detector_compute_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->boundary_detector_compute_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // line_detector_compute_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "line_detector_compute_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->line_detector_compute_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // skidpad_detector_compute_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "skidpad_detector_compute_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->skidpad_detector_compute_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lidar_detection_compute_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "lidar_detection_compute_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lidar_detection_compute_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // camera_detection_compute_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_detection_compute_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->camera_detection_compute_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fusion_detection_compute_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "fusion_detection_compute_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fusion_detection_compute_time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time2
    PyObject * field = PyObject_GetAttrString(_pymsg, "time2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time3
    PyObject * field = PyObject_GetAttrString(_pymsg, "time3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time4
    PyObject * field = PyObject_GetAttrString(_pymsg, "time4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time5
    PyObject * field = PyObject_GetAttrString(_pymsg, "time5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time6
    PyObject * field = PyObject_GetAttrString(_pymsg, "time6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time7
    PyObject * field = PyObject_GetAttrString(_pymsg, "time7");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time7 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time8
    PyObject * field = PyObject_GetAttrString(_pymsg, "time8");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time8 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time9
    PyObject * field = PyObject_GetAttrString(_pymsg, "time9");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time9 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fsd_common_msgs__msg__time__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Time */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fsd_common_msgs.msg._time");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Time");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fsd_common_msgs__msg__Time * ros_message = (fsd_common_msgs__msg__Time *)raw_ros_message;
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
  {  // sum_compute_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sum_compute_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sum_compute_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_compute_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->control_compute_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_compute_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // boundary_detector_compute_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->boundary_detector_compute_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "boundary_detector_compute_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // line_detector_compute_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->line_detector_compute_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "line_detector_compute_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // skidpad_detector_compute_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->skidpad_detector_compute_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "skidpad_detector_compute_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lidar_detection_compute_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lidar_detection_compute_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lidar_detection_compute_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera_detection_compute_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->camera_detection_compute_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_detection_compute_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fusion_detection_compute_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fusion_detection_compute_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fusion_detection_compute_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time7
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time8
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time9
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time9);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time9", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
