// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fsd_common_msgs:msg/AsensingMessage.idl
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
#include "fsd_common_msgs/msg/detail/asensing_message__struct.h"
#include "fsd_common_msgs/msg/detail/asensing_message__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool fsd_common_msgs__msg__asensing_message__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("fsd_common_msgs.msg._asensing_message.AsensingMessage", full_classname_dest, 53) == 0);
  }
  fsd_common_msgs__msg__AsensingMessage * ros_message = _ros_message;
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
    ros_message->h = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vn
    PyObject * field = PyObject_GetAttrString(_pymsg, "vn");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vn = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ve
    PyObject * field = PyObject_GetAttrString(_pymsg, "ve");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ve = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vh
    PyObject * field = PyObject_GetAttrString(_pymsg, "vh");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vh = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gyro_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "gyro_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gyro_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // std_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "std_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->std_lat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // std_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "std_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->std_lon = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // std_local_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "std_local_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->std_local_height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // north_velocity_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "north_velocity_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->north_velocity_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // east_velocity_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "east_velocity_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->east_velocity_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ground_velocity_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "ground_velocity_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ground_velocity_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // std_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "std_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->std_heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_flag_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_flag_pos");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_flag_pos = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_week_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_week_number");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gps_week_number = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ull_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "ull_timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ull_timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // car_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "car_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->car_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_flag_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_flag_heading");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_flag_heading = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_sv
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_sv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_sv = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fsd_common_msgs__msg__asensing_message__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AsensingMessage */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fsd_common_msgs.msg._asensing_message");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AsensingMessage");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fsd_common_msgs__msg__AsensingMessage * ros_message = (fsd_common_msgs__msg__AsensingMessage *)raw_ros_message;
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
  {  // heading_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_angle", field);
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
  {  // std_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->std_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "std_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // std_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->std_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "std_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // std_local_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->std_local_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "std_local_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // north_velocity_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->north_velocity_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "north_velocity_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // east_velocity_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->east_velocity_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "east_velocity_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ground_velocity_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ground_velocity_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ground_velocity_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // std_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->std_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "std_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_flag_pos
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gps_flag_pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_flag_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_week_number
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gps_week_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_week_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ull_timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ull_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ull_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // car_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->car_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "car_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_flag_heading
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gps_flag_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_flag_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_sv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_sv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_sv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
