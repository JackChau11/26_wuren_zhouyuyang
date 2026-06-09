// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/Visualization.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__VISUALIZATION__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__VISUALIZATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fsd_common_msgs__msg__Visualization __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__Visualization __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Visualization_
{
  using Type = Visualization_<ContainerAllocator>;

  explicit Visualization_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id_num = 0ull;
      this->lat_error_front_axis = 0.0f;
      this->lat_error_cog = 0.0f;
      this->lat_error_rear_axis = 0.0f;
      this->yaw_error_front_axis = 0.0f;
      this->yaw_error_cog = 0.0f;
      this->yaw_error_rear_axis = 0.0f;
      this->yaw_rate_error = 0.0f;
      this->steering_error = 0.0f;
      this->vx_error = 0.0f;
      this->vy_error = 0.0f;
      this->sideslip_error = 0.0f;
      this->motor_torq_error_lr = 0.0f;
      this->motor_torq_error_rr = 0.0f;
      this->motor_speed_error_lr = 0.0f;
      this->motor_speed_error_rr = 0.0f;
      this->error1 = 0.0f;
      this->error2 = 0.0f;
      this->error3 = 0.0f;
      this->error4 = 0.0f;
      this->yaw_ref = 0.0f;
      this->yaw_ref_front_axis = 0.0f;
      this->yaw_ref_cog = 0.0f;
      this->yaw_ref_rear_axis = 0.0f;
      this->curvature_ref = 0.0f;
      this->curvature_ref_front_axis = 0.0f;
      this->curvature_ref_cog = 0.0f;
      this->curvature_ref_rear_axis = 0.0f;
      this->vx_ref = 0.0f;
      this->vy_ref = 0.0f;
      this->ax_ref = 0.0f;
      this->ay_ref = 0.0f;
      this->ref1 = 0.0f;
      this->ref2 = 0.0f;
      this->ref3 = 0.0f;
      this->ref4 = 0.0f;
      this->steering_without_compensation = 0.0f;
      this->steering_feedback = 0.0f;
      this->steering_feedforward = 0.0f;
      this->lookforward_length = 0.0f;
      this->yaw_rate_pre = 0.0f;
      this->turning_radius = 0.0f;
      this->adhesion_coefficient_pre = 0.0f;
      this->sideslip_pre = 0.0f;
      this->slip_angle_pre_fl = 0.0f;
      this->slip_angle_pre_fr = 0.0f;
      this->slip_angle_pre_rl = 0.0f;
      this->slip_angle_pre_rr = 0.0f;
      this->norm_force_pre_fl = 0.0f;
      this->norm_force_pre_fr = 0.0f;
      this->norm_force_pre_rl = 0.0f;
      this->norm_force_pre_rr = 0.0f;
      this->algorithm1 = 0.0f;
      this->algorithm2 = 0.0f;
      this->algorithm3 = 0.0f;
      this->algorithm4 = 0.0f;
    }
  }

  explicit Visualization_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id_num = 0ull;
      this->lat_error_front_axis = 0.0f;
      this->lat_error_cog = 0.0f;
      this->lat_error_rear_axis = 0.0f;
      this->yaw_error_front_axis = 0.0f;
      this->yaw_error_cog = 0.0f;
      this->yaw_error_rear_axis = 0.0f;
      this->yaw_rate_error = 0.0f;
      this->steering_error = 0.0f;
      this->vx_error = 0.0f;
      this->vy_error = 0.0f;
      this->sideslip_error = 0.0f;
      this->motor_torq_error_lr = 0.0f;
      this->motor_torq_error_rr = 0.0f;
      this->motor_speed_error_lr = 0.0f;
      this->motor_speed_error_rr = 0.0f;
      this->error1 = 0.0f;
      this->error2 = 0.0f;
      this->error3 = 0.0f;
      this->error4 = 0.0f;
      this->yaw_ref = 0.0f;
      this->yaw_ref_front_axis = 0.0f;
      this->yaw_ref_cog = 0.0f;
      this->yaw_ref_rear_axis = 0.0f;
      this->curvature_ref = 0.0f;
      this->curvature_ref_front_axis = 0.0f;
      this->curvature_ref_cog = 0.0f;
      this->curvature_ref_rear_axis = 0.0f;
      this->vx_ref = 0.0f;
      this->vy_ref = 0.0f;
      this->ax_ref = 0.0f;
      this->ay_ref = 0.0f;
      this->ref1 = 0.0f;
      this->ref2 = 0.0f;
      this->ref3 = 0.0f;
      this->ref4 = 0.0f;
      this->steering_without_compensation = 0.0f;
      this->steering_feedback = 0.0f;
      this->steering_feedforward = 0.0f;
      this->lookforward_length = 0.0f;
      this->yaw_rate_pre = 0.0f;
      this->turning_radius = 0.0f;
      this->adhesion_coefficient_pre = 0.0f;
      this->sideslip_pre = 0.0f;
      this->slip_angle_pre_fl = 0.0f;
      this->slip_angle_pre_fr = 0.0f;
      this->slip_angle_pre_rl = 0.0f;
      this->slip_angle_pre_rr = 0.0f;
      this->norm_force_pre_fl = 0.0f;
      this->norm_force_pre_fr = 0.0f;
      this->norm_force_pre_rl = 0.0f;
      this->norm_force_pre_rr = 0.0f;
      this->algorithm1 = 0.0f;
      this->algorithm2 = 0.0f;
      this->algorithm3 = 0.0f;
      this->algorithm4 = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _frame_id_num_type =
    uint64_t;
  _frame_id_num_type frame_id_num;
  using _lat_error_front_axis_type =
    float;
  _lat_error_front_axis_type lat_error_front_axis;
  using _lat_error_cog_type =
    float;
  _lat_error_cog_type lat_error_cog;
  using _lat_error_rear_axis_type =
    float;
  _lat_error_rear_axis_type lat_error_rear_axis;
  using _yaw_error_front_axis_type =
    float;
  _yaw_error_front_axis_type yaw_error_front_axis;
  using _yaw_error_cog_type =
    float;
  _yaw_error_cog_type yaw_error_cog;
  using _yaw_error_rear_axis_type =
    float;
  _yaw_error_rear_axis_type yaw_error_rear_axis;
  using _yaw_rate_error_type =
    float;
  _yaw_rate_error_type yaw_rate_error;
  using _steering_error_type =
    float;
  _steering_error_type steering_error;
  using _vx_error_type =
    float;
  _vx_error_type vx_error;
  using _vy_error_type =
    float;
  _vy_error_type vy_error;
  using _sideslip_error_type =
    float;
  _sideslip_error_type sideslip_error;
  using _motor_torq_error_lr_type =
    float;
  _motor_torq_error_lr_type motor_torq_error_lr;
  using _motor_torq_error_rr_type =
    float;
  _motor_torq_error_rr_type motor_torq_error_rr;
  using _motor_speed_error_lr_type =
    float;
  _motor_speed_error_lr_type motor_speed_error_lr;
  using _motor_speed_error_rr_type =
    float;
  _motor_speed_error_rr_type motor_speed_error_rr;
  using _error1_type =
    float;
  _error1_type error1;
  using _error2_type =
    float;
  _error2_type error2;
  using _error3_type =
    float;
  _error3_type error3;
  using _error4_type =
    float;
  _error4_type error4;
  using _yaw_ref_type =
    float;
  _yaw_ref_type yaw_ref;
  using _yaw_ref_front_axis_type =
    float;
  _yaw_ref_front_axis_type yaw_ref_front_axis;
  using _yaw_ref_cog_type =
    float;
  _yaw_ref_cog_type yaw_ref_cog;
  using _yaw_ref_rear_axis_type =
    float;
  _yaw_ref_rear_axis_type yaw_ref_rear_axis;
  using _curvature_ref_type =
    float;
  _curvature_ref_type curvature_ref;
  using _curvature_ref_front_axis_type =
    float;
  _curvature_ref_front_axis_type curvature_ref_front_axis;
  using _curvature_ref_cog_type =
    float;
  _curvature_ref_cog_type curvature_ref_cog;
  using _curvature_ref_rear_axis_type =
    float;
  _curvature_ref_rear_axis_type curvature_ref_rear_axis;
  using _vx_ref_type =
    float;
  _vx_ref_type vx_ref;
  using _vy_ref_type =
    float;
  _vy_ref_type vy_ref;
  using _ax_ref_type =
    float;
  _ax_ref_type ax_ref;
  using _ay_ref_type =
    float;
  _ay_ref_type ay_ref;
  using _ref1_type =
    float;
  _ref1_type ref1;
  using _ref2_type =
    float;
  _ref2_type ref2;
  using _ref3_type =
    float;
  _ref3_type ref3;
  using _ref4_type =
    float;
  _ref4_type ref4;
  using _steering_without_compensation_type =
    float;
  _steering_without_compensation_type steering_without_compensation;
  using _steering_feedback_type =
    float;
  _steering_feedback_type steering_feedback;
  using _steering_feedforward_type =
    float;
  _steering_feedforward_type steering_feedforward;
  using _lookforward_length_type =
    float;
  _lookforward_length_type lookforward_length;
  using _yaw_rate_pre_type =
    float;
  _yaw_rate_pre_type yaw_rate_pre;
  using _turning_radius_type =
    float;
  _turning_radius_type turning_radius;
  using _adhesion_coefficient_pre_type =
    float;
  _adhesion_coefficient_pre_type adhesion_coefficient_pre;
  using _sideslip_pre_type =
    float;
  _sideslip_pre_type sideslip_pre;
  using _slip_angle_pre_fl_type =
    float;
  _slip_angle_pre_fl_type slip_angle_pre_fl;
  using _slip_angle_pre_fr_type =
    float;
  _slip_angle_pre_fr_type slip_angle_pre_fr;
  using _slip_angle_pre_rl_type =
    float;
  _slip_angle_pre_rl_type slip_angle_pre_rl;
  using _slip_angle_pre_rr_type =
    float;
  _slip_angle_pre_rr_type slip_angle_pre_rr;
  using _norm_force_pre_fl_type =
    float;
  _norm_force_pre_fl_type norm_force_pre_fl;
  using _norm_force_pre_fr_type =
    float;
  _norm_force_pre_fr_type norm_force_pre_fr;
  using _norm_force_pre_rl_type =
    float;
  _norm_force_pre_rl_type norm_force_pre_rl;
  using _norm_force_pre_rr_type =
    float;
  _norm_force_pre_rr_type norm_force_pre_rr;
  using _algorithm1_type =
    float;
  _algorithm1_type algorithm1;
  using _algorithm2_type =
    float;
  _algorithm2_type algorithm2;
  using _algorithm3_type =
    float;
  _algorithm3_type algorithm3;
  using _algorithm4_type =
    float;
  _algorithm4_type algorithm4;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__frame_id_num(
    const uint64_t & _arg)
  {
    this->frame_id_num = _arg;
    return *this;
  }
  Type & set__lat_error_front_axis(
    const float & _arg)
  {
    this->lat_error_front_axis = _arg;
    return *this;
  }
  Type & set__lat_error_cog(
    const float & _arg)
  {
    this->lat_error_cog = _arg;
    return *this;
  }
  Type & set__lat_error_rear_axis(
    const float & _arg)
  {
    this->lat_error_rear_axis = _arg;
    return *this;
  }
  Type & set__yaw_error_front_axis(
    const float & _arg)
  {
    this->yaw_error_front_axis = _arg;
    return *this;
  }
  Type & set__yaw_error_cog(
    const float & _arg)
  {
    this->yaw_error_cog = _arg;
    return *this;
  }
  Type & set__yaw_error_rear_axis(
    const float & _arg)
  {
    this->yaw_error_rear_axis = _arg;
    return *this;
  }
  Type & set__yaw_rate_error(
    const float & _arg)
  {
    this->yaw_rate_error = _arg;
    return *this;
  }
  Type & set__steering_error(
    const float & _arg)
  {
    this->steering_error = _arg;
    return *this;
  }
  Type & set__vx_error(
    const float & _arg)
  {
    this->vx_error = _arg;
    return *this;
  }
  Type & set__vy_error(
    const float & _arg)
  {
    this->vy_error = _arg;
    return *this;
  }
  Type & set__sideslip_error(
    const float & _arg)
  {
    this->sideslip_error = _arg;
    return *this;
  }
  Type & set__motor_torq_error_lr(
    const float & _arg)
  {
    this->motor_torq_error_lr = _arg;
    return *this;
  }
  Type & set__motor_torq_error_rr(
    const float & _arg)
  {
    this->motor_torq_error_rr = _arg;
    return *this;
  }
  Type & set__motor_speed_error_lr(
    const float & _arg)
  {
    this->motor_speed_error_lr = _arg;
    return *this;
  }
  Type & set__motor_speed_error_rr(
    const float & _arg)
  {
    this->motor_speed_error_rr = _arg;
    return *this;
  }
  Type & set__error1(
    const float & _arg)
  {
    this->error1 = _arg;
    return *this;
  }
  Type & set__error2(
    const float & _arg)
  {
    this->error2 = _arg;
    return *this;
  }
  Type & set__error3(
    const float & _arg)
  {
    this->error3 = _arg;
    return *this;
  }
  Type & set__error4(
    const float & _arg)
  {
    this->error4 = _arg;
    return *this;
  }
  Type & set__yaw_ref(
    const float & _arg)
  {
    this->yaw_ref = _arg;
    return *this;
  }
  Type & set__yaw_ref_front_axis(
    const float & _arg)
  {
    this->yaw_ref_front_axis = _arg;
    return *this;
  }
  Type & set__yaw_ref_cog(
    const float & _arg)
  {
    this->yaw_ref_cog = _arg;
    return *this;
  }
  Type & set__yaw_ref_rear_axis(
    const float & _arg)
  {
    this->yaw_ref_rear_axis = _arg;
    return *this;
  }
  Type & set__curvature_ref(
    const float & _arg)
  {
    this->curvature_ref = _arg;
    return *this;
  }
  Type & set__curvature_ref_front_axis(
    const float & _arg)
  {
    this->curvature_ref_front_axis = _arg;
    return *this;
  }
  Type & set__curvature_ref_cog(
    const float & _arg)
  {
    this->curvature_ref_cog = _arg;
    return *this;
  }
  Type & set__curvature_ref_rear_axis(
    const float & _arg)
  {
    this->curvature_ref_rear_axis = _arg;
    return *this;
  }
  Type & set__vx_ref(
    const float & _arg)
  {
    this->vx_ref = _arg;
    return *this;
  }
  Type & set__vy_ref(
    const float & _arg)
  {
    this->vy_ref = _arg;
    return *this;
  }
  Type & set__ax_ref(
    const float & _arg)
  {
    this->ax_ref = _arg;
    return *this;
  }
  Type & set__ay_ref(
    const float & _arg)
  {
    this->ay_ref = _arg;
    return *this;
  }
  Type & set__ref1(
    const float & _arg)
  {
    this->ref1 = _arg;
    return *this;
  }
  Type & set__ref2(
    const float & _arg)
  {
    this->ref2 = _arg;
    return *this;
  }
  Type & set__ref3(
    const float & _arg)
  {
    this->ref3 = _arg;
    return *this;
  }
  Type & set__ref4(
    const float & _arg)
  {
    this->ref4 = _arg;
    return *this;
  }
  Type & set__steering_without_compensation(
    const float & _arg)
  {
    this->steering_without_compensation = _arg;
    return *this;
  }
  Type & set__steering_feedback(
    const float & _arg)
  {
    this->steering_feedback = _arg;
    return *this;
  }
  Type & set__steering_feedforward(
    const float & _arg)
  {
    this->steering_feedforward = _arg;
    return *this;
  }
  Type & set__lookforward_length(
    const float & _arg)
  {
    this->lookforward_length = _arg;
    return *this;
  }
  Type & set__yaw_rate_pre(
    const float & _arg)
  {
    this->yaw_rate_pre = _arg;
    return *this;
  }
  Type & set__turning_radius(
    const float & _arg)
  {
    this->turning_radius = _arg;
    return *this;
  }
  Type & set__adhesion_coefficient_pre(
    const float & _arg)
  {
    this->adhesion_coefficient_pre = _arg;
    return *this;
  }
  Type & set__sideslip_pre(
    const float & _arg)
  {
    this->sideslip_pre = _arg;
    return *this;
  }
  Type & set__slip_angle_pre_fl(
    const float & _arg)
  {
    this->slip_angle_pre_fl = _arg;
    return *this;
  }
  Type & set__slip_angle_pre_fr(
    const float & _arg)
  {
    this->slip_angle_pre_fr = _arg;
    return *this;
  }
  Type & set__slip_angle_pre_rl(
    const float & _arg)
  {
    this->slip_angle_pre_rl = _arg;
    return *this;
  }
  Type & set__slip_angle_pre_rr(
    const float & _arg)
  {
    this->slip_angle_pre_rr = _arg;
    return *this;
  }
  Type & set__norm_force_pre_fl(
    const float & _arg)
  {
    this->norm_force_pre_fl = _arg;
    return *this;
  }
  Type & set__norm_force_pre_fr(
    const float & _arg)
  {
    this->norm_force_pre_fr = _arg;
    return *this;
  }
  Type & set__norm_force_pre_rl(
    const float & _arg)
  {
    this->norm_force_pre_rl = _arg;
    return *this;
  }
  Type & set__norm_force_pre_rr(
    const float & _arg)
  {
    this->norm_force_pre_rr = _arg;
    return *this;
  }
  Type & set__algorithm1(
    const float & _arg)
  {
    this->algorithm1 = _arg;
    return *this;
  }
  Type & set__algorithm2(
    const float & _arg)
  {
    this->algorithm2 = _arg;
    return *this;
  }
  Type & set__algorithm3(
    const float & _arg)
  {
    this->algorithm3 = _arg;
    return *this;
  }
  Type & set__algorithm4(
    const float & _arg)
  {
    this->algorithm4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::Visualization_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::Visualization_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::Visualization_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::Visualization_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::Visualization_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::Visualization_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::Visualization_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::Visualization_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::Visualization_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::Visualization_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__Visualization
    std::shared_ptr<fsd_common_msgs::msg::Visualization_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__Visualization
    std::shared_ptr<fsd_common_msgs::msg::Visualization_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Visualization_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->frame_id_num != other.frame_id_num) {
      return false;
    }
    if (this->lat_error_front_axis != other.lat_error_front_axis) {
      return false;
    }
    if (this->lat_error_cog != other.lat_error_cog) {
      return false;
    }
    if (this->lat_error_rear_axis != other.lat_error_rear_axis) {
      return false;
    }
    if (this->yaw_error_front_axis != other.yaw_error_front_axis) {
      return false;
    }
    if (this->yaw_error_cog != other.yaw_error_cog) {
      return false;
    }
    if (this->yaw_error_rear_axis != other.yaw_error_rear_axis) {
      return false;
    }
    if (this->yaw_rate_error != other.yaw_rate_error) {
      return false;
    }
    if (this->steering_error != other.steering_error) {
      return false;
    }
    if (this->vx_error != other.vx_error) {
      return false;
    }
    if (this->vy_error != other.vy_error) {
      return false;
    }
    if (this->sideslip_error != other.sideslip_error) {
      return false;
    }
    if (this->motor_torq_error_lr != other.motor_torq_error_lr) {
      return false;
    }
    if (this->motor_torq_error_rr != other.motor_torq_error_rr) {
      return false;
    }
    if (this->motor_speed_error_lr != other.motor_speed_error_lr) {
      return false;
    }
    if (this->motor_speed_error_rr != other.motor_speed_error_rr) {
      return false;
    }
    if (this->error1 != other.error1) {
      return false;
    }
    if (this->error2 != other.error2) {
      return false;
    }
    if (this->error3 != other.error3) {
      return false;
    }
    if (this->error4 != other.error4) {
      return false;
    }
    if (this->yaw_ref != other.yaw_ref) {
      return false;
    }
    if (this->yaw_ref_front_axis != other.yaw_ref_front_axis) {
      return false;
    }
    if (this->yaw_ref_cog != other.yaw_ref_cog) {
      return false;
    }
    if (this->yaw_ref_rear_axis != other.yaw_ref_rear_axis) {
      return false;
    }
    if (this->curvature_ref != other.curvature_ref) {
      return false;
    }
    if (this->curvature_ref_front_axis != other.curvature_ref_front_axis) {
      return false;
    }
    if (this->curvature_ref_cog != other.curvature_ref_cog) {
      return false;
    }
    if (this->curvature_ref_rear_axis != other.curvature_ref_rear_axis) {
      return false;
    }
    if (this->vx_ref != other.vx_ref) {
      return false;
    }
    if (this->vy_ref != other.vy_ref) {
      return false;
    }
    if (this->ax_ref != other.ax_ref) {
      return false;
    }
    if (this->ay_ref != other.ay_ref) {
      return false;
    }
    if (this->ref1 != other.ref1) {
      return false;
    }
    if (this->ref2 != other.ref2) {
      return false;
    }
    if (this->ref3 != other.ref3) {
      return false;
    }
    if (this->ref4 != other.ref4) {
      return false;
    }
    if (this->steering_without_compensation != other.steering_without_compensation) {
      return false;
    }
    if (this->steering_feedback != other.steering_feedback) {
      return false;
    }
    if (this->steering_feedforward != other.steering_feedforward) {
      return false;
    }
    if (this->lookforward_length != other.lookforward_length) {
      return false;
    }
    if (this->yaw_rate_pre != other.yaw_rate_pre) {
      return false;
    }
    if (this->turning_radius != other.turning_radius) {
      return false;
    }
    if (this->adhesion_coefficient_pre != other.adhesion_coefficient_pre) {
      return false;
    }
    if (this->sideslip_pre != other.sideslip_pre) {
      return false;
    }
    if (this->slip_angle_pre_fl != other.slip_angle_pre_fl) {
      return false;
    }
    if (this->slip_angle_pre_fr != other.slip_angle_pre_fr) {
      return false;
    }
    if (this->slip_angle_pre_rl != other.slip_angle_pre_rl) {
      return false;
    }
    if (this->slip_angle_pre_rr != other.slip_angle_pre_rr) {
      return false;
    }
    if (this->norm_force_pre_fl != other.norm_force_pre_fl) {
      return false;
    }
    if (this->norm_force_pre_fr != other.norm_force_pre_fr) {
      return false;
    }
    if (this->norm_force_pre_rl != other.norm_force_pre_rl) {
      return false;
    }
    if (this->norm_force_pre_rr != other.norm_force_pre_rr) {
      return false;
    }
    if (this->algorithm1 != other.algorithm1) {
      return false;
    }
    if (this->algorithm2 != other.algorithm2) {
      return false;
    }
    if (this->algorithm3 != other.algorithm3) {
      return false;
    }
    if (this->algorithm4 != other.algorithm4) {
      return false;
    }
    return true;
  }
  bool operator!=(const Visualization_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Visualization_

// alias to use template instance with default allocator
using Visualization =
  fsd_common_msgs::msg::Visualization_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__VISUALIZATION__STRUCT_HPP_
