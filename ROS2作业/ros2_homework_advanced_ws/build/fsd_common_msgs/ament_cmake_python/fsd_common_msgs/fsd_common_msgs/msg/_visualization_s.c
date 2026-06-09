// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fsd_common_msgs:msg/Visualization.idl
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
#include "fsd_common_msgs/msg/detail/visualization__struct.h"
#include "fsd_common_msgs/msg/detail/visualization__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool fsd_common_msgs__msg__visualization__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("fsd_common_msgs.msg._visualization.Visualization", full_classname_dest, 48) == 0);
  }
  fsd_common_msgs__msg__Visualization * ros_message = _ros_message;
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
  {  // lat_error_front_axis
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_error_front_axis");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat_error_front_axis = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lat_error_cog
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_error_cog");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat_error_cog = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lat_error_rear_axis
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_error_rear_axis");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat_error_rear_axis = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_error_front_axis
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_error_front_axis");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_error_front_axis = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_error_cog
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_error_cog");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_error_cog = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_error_rear_axis
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_error_rear_axis");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_error_rear_axis = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vx_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vy_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "vy_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vy_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sideslip_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "sideslip_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sideslip_error = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // motor_torq_error_lr
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_torq_error_lr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motor_torq_error_lr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // motor_torq_error_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_torq_error_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motor_torq_error_rr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // motor_speed_error_lr
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_speed_error_lr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motor_speed_error_lr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // motor_speed_error_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_speed_error_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motor_speed_error_rr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error1
    PyObject * field = PyObject_GetAttrString(_pymsg, "error1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->error1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error2
    PyObject * field = PyObject_GetAttrString(_pymsg, "error2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->error2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error3
    PyObject * field = PyObject_GetAttrString(_pymsg, "error3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->error3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error4
    PyObject * field = PyObject_GetAttrString(_pymsg, "error4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->error4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_ref = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_ref_front_axis
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_ref_front_axis");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_ref_front_axis = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_ref_cog
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_ref_cog");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_ref_cog = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_ref_rear_axis
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_ref_rear_axis");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_ref_rear_axis = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // curvature_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "curvature_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->curvature_ref = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // curvature_ref_front_axis
    PyObject * field = PyObject_GetAttrString(_pymsg, "curvature_ref_front_axis");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->curvature_ref_front_axis = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // curvature_ref_cog
    PyObject * field = PyObject_GetAttrString(_pymsg, "curvature_ref_cog");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->curvature_ref_cog = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // curvature_ref_rear_axis
    PyObject * field = PyObject_GetAttrString(_pymsg, "curvature_ref_rear_axis");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->curvature_ref_rear_axis = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vx_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "vx_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vx_ref = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vy_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "vy_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vy_ref = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ax_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "ax_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ax_ref = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ay_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "ay_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ay_ref = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref1
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref2
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref3
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref4
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_without_compensation
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_without_compensation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_without_compensation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_feedback");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_feedback = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_feedforward
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_feedforward");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_feedforward = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lookforward_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "lookforward_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lookforward_length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate_pre
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate_pre");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate_pre = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turning_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "turning_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turning_radius = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // adhesion_coefficient_pre
    PyObject * field = PyObject_GetAttrString(_pymsg, "adhesion_coefficient_pre");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->adhesion_coefficient_pre = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sideslip_pre
    PyObject * field = PyObject_GetAttrString(_pymsg, "sideslip_pre");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sideslip_pre = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // slip_angle_pre_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "slip_angle_pre_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->slip_angle_pre_fl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // slip_angle_pre_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "slip_angle_pre_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->slip_angle_pre_fr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // slip_angle_pre_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "slip_angle_pre_rl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->slip_angle_pre_rl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // slip_angle_pre_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "slip_angle_pre_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->slip_angle_pre_rr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // norm_force_pre_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "norm_force_pre_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->norm_force_pre_fl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // norm_force_pre_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "norm_force_pre_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->norm_force_pre_fr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // norm_force_pre_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "norm_force_pre_rl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->norm_force_pre_rl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // norm_force_pre_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "norm_force_pre_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->norm_force_pre_rr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // algorithm1
    PyObject * field = PyObject_GetAttrString(_pymsg, "algorithm1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->algorithm1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // algorithm2
    PyObject * field = PyObject_GetAttrString(_pymsg, "algorithm2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->algorithm2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // algorithm3
    PyObject * field = PyObject_GetAttrString(_pymsg, "algorithm3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->algorithm3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // algorithm4
    PyObject * field = PyObject_GetAttrString(_pymsg, "algorithm4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->algorithm4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fsd_common_msgs__msg__visualization__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Visualization */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fsd_common_msgs.msg._visualization");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Visualization");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fsd_common_msgs__msg__Visualization * ros_message = (fsd_common_msgs__msg__Visualization *)raw_ros_message;
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
  {  // lat_error_front_axis
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat_error_front_axis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_error_front_axis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_error_cog
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat_error_cog);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_error_cog", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_error_rear_axis
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat_error_rear_axis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_error_rear_axis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_error_front_axis
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_error_front_axis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_error_front_axis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_error_cog
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_error_cog);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_error_cog", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_error_rear_axis
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_error_rear_axis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_error_rear_axis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vx_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vy_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vy_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vy_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sideslip_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sideslip_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sideslip_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_torq_error_lr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motor_torq_error_lr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_torq_error_lr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_torq_error_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motor_torq_error_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_torq_error_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_speed_error_lr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motor_speed_error_lr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_speed_error_lr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_speed_error_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motor_speed_error_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_speed_error_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->error1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->error2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->error3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->error4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_ref_front_axis
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_ref_front_axis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_ref_front_axis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_ref_cog
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_ref_cog);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_ref_cog", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_ref_rear_axis
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_ref_rear_axis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_ref_rear_axis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curvature_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->curvature_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curvature_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curvature_ref_front_axis
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->curvature_ref_front_axis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curvature_ref_front_axis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curvature_ref_cog
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->curvature_ref_cog);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curvature_ref_cog", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curvature_ref_rear_axis
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->curvature_ref_rear_axis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curvature_ref_rear_axis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vx_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vx_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vx_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vy_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vy_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vy_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ax_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ax_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ax_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ay_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ay_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ay_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_without_compensation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_without_compensation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_without_compensation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_feedback
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_feedback);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_feedforward
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_feedforward);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_feedforward", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lookforward_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lookforward_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lookforward_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate_pre
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate_pre);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate_pre", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turning_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turning_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turning_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adhesion_coefficient_pre
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->adhesion_coefficient_pre);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adhesion_coefficient_pre", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sideslip_pre
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sideslip_pre);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sideslip_pre", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slip_angle_pre_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->slip_angle_pre_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slip_angle_pre_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slip_angle_pre_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->slip_angle_pre_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slip_angle_pre_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slip_angle_pre_rl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->slip_angle_pre_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slip_angle_pre_rl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slip_angle_pre_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->slip_angle_pre_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slip_angle_pre_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // norm_force_pre_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->norm_force_pre_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "norm_force_pre_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // norm_force_pre_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->norm_force_pre_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "norm_force_pre_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // norm_force_pre_rl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->norm_force_pre_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "norm_force_pre_rl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // norm_force_pre_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->norm_force_pre_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "norm_force_pre_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // algorithm1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->algorithm1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "algorithm1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // algorithm2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->algorithm2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "algorithm2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // algorithm3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->algorithm3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "algorithm3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // algorithm4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->algorithm4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "algorithm4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
