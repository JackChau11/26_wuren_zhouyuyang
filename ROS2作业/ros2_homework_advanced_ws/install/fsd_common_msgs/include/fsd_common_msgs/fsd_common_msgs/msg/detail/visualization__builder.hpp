// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/Visualization.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__VISUALIZATION__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__VISUALIZATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/visualization__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_Visualization_algorithm4
{
public:
  explicit Init_Visualization_algorithm4(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::Visualization algorithm4(::fsd_common_msgs::msg::Visualization::_algorithm4_type arg)
  {
    msg_.algorithm4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_algorithm3
{
public:
  explicit Init_Visualization_algorithm3(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_algorithm4 algorithm3(::fsd_common_msgs::msg::Visualization::_algorithm3_type arg)
  {
    msg_.algorithm3 = std::move(arg);
    return Init_Visualization_algorithm4(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_algorithm2
{
public:
  explicit Init_Visualization_algorithm2(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_algorithm3 algorithm2(::fsd_common_msgs::msg::Visualization::_algorithm2_type arg)
  {
    msg_.algorithm2 = std::move(arg);
    return Init_Visualization_algorithm3(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_algorithm1
{
public:
  explicit Init_Visualization_algorithm1(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_algorithm2 algorithm1(::fsd_common_msgs::msg::Visualization::_algorithm1_type arg)
  {
    msg_.algorithm1 = std::move(arg);
    return Init_Visualization_algorithm2(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_norm_force_pre_rr
{
public:
  explicit Init_Visualization_norm_force_pre_rr(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_algorithm1 norm_force_pre_rr(::fsd_common_msgs::msg::Visualization::_norm_force_pre_rr_type arg)
  {
    msg_.norm_force_pre_rr = std::move(arg);
    return Init_Visualization_algorithm1(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_norm_force_pre_rl
{
public:
  explicit Init_Visualization_norm_force_pre_rl(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_norm_force_pre_rr norm_force_pre_rl(::fsd_common_msgs::msg::Visualization::_norm_force_pre_rl_type arg)
  {
    msg_.norm_force_pre_rl = std::move(arg);
    return Init_Visualization_norm_force_pre_rr(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_norm_force_pre_fr
{
public:
  explicit Init_Visualization_norm_force_pre_fr(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_norm_force_pre_rl norm_force_pre_fr(::fsd_common_msgs::msg::Visualization::_norm_force_pre_fr_type arg)
  {
    msg_.norm_force_pre_fr = std::move(arg);
    return Init_Visualization_norm_force_pre_rl(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_norm_force_pre_fl
{
public:
  explicit Init_Visualization_norm_force_pre_fl(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_norm_force_pre_fr norm_force_pre_fl(::fsd_common_msgs::msg::Visualization::_norm_force_pre_fl_type arg)
  {
    msg_.norm_force_pre_fl = std::move(arg);
    return Init_Visualization_norm_force_pre_fr(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_slip_angle_pre_rr
{
public:
  explicit Init_Visualization_slip_angle_pre_rr(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_norm_force_pre_fl slip_angle_pre_rr(::fsd_common_msgs::msg::Visualization::_slip_angle_pre_rr_type arg)
  {
    msg_.slip_angle_pre_rr = std::move(arg);
    return Init_Visualization_norm_force_pre_fl(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_slip_angle_pre_rl
{
public:
  explicit Init_Visualization_slip_angle_pre_rl(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_slip_angle_pre_rr slip_angle_pre_rl(::fsd_common_msgs::msg::Visualization::_slip_angle_pre_rl_type arg)
  {
    msg_.slip_angle_pre_rl = std::move(arg);
    return Init_Visualization_slip_angle_pre_rr(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_slip_angle_pre_fr
{
public:
  explicit Init_Visualization_slip_angle_pre_fr(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_slip_angle_pre_rl slip_angle_pre_fr(::fsd_common_msgs::msg::Visualization::_slip_angle_pre_fr_type arg)
  {
    msg_.slip_angle_pre_fr = std::move(arg);
    return Init_Visualization_slip_angle_pre_rl(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_slip_angle_pre_fl
{
public:
  explicit Init_Visualization_slip_angle_pre_fl(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_slip_angle_pre_fr slip_angle_pre_fl(::fsd_common_msgs::msg::Visualization::_slip_angle_pre_fl_type arg)
  {
    msg_.slip_angle_pre_fl = std::move(arg);
    return Init_Visualization_slip_angle_pre_fr(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_sideslip_pre
{
public:
  explicit Init_Visualization_sideslip_pre(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_slip_angle_pre_fl sideslip_pre(::fsd_common_msgs::msg::Visualization::_sideslip_pre_type arg)
  {
    msg_.sideslip_pre = std::move(arg);
    return Init_Visualization_slip_angle_pre_fl(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_adhesion_coefficient_pre
{
public:
  explicit Init_Visualization_adhesion_coefficient_pre(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_sideslip_pre adhesion_coefficient_pre(::fsd_common_msgs::msg::Visualization::_adhesion_coefficient_pre_type arg)
  {
    msg_.adhesion_coefficient_pre = std::move(arg);
    return Init_Visualization_sideslip_pre(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_turning_radius
{
public:
  explicit Init_Visualization_turning_radius(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_adhesion_coefficient_pre turning_radius(::fsd_common_msgs::msg::Visualization::_turning_radius_type arg)
  {
    msg_.turning_radius = std::move(arg);
    return Init_Visualization_adhesion_coefficient_pre(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_yaw_rate_pre
{
public:
  explicit Init_Visualization_yaw_rate_pre(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_turning_radius yaw_rate_pre(::fsd_common_msgs::msg::Visualization::_yaw_rate_pre_type arg)
  {
    msg_.yaw_rate_pre = std::move(arg);
    return Init_Visualization_turning_radius(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_lookforward_length
{
public:
  explicit Init_Visualization_lookforward_length(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_yaw_rate_pre lookforward_length(::fsd_common_msgs::msg::Visualization::_lookforward_length_type arg)
  {
    msg_.lookforward_length = std::move(arg);
    return Init_Visualization_yaw_rate_pre(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_steering_feedforward
{
public:
  explicit Init_Visualization_steering_feedforward(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_lookforward_length steering_feedforward(::fsd_common_msgs::msg::Visualization::_steering_feedforward_type arg)
  {
    msg_.steering_feedforward = std::move(arg);
    return Init_Visualization_lookforward_length(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_steering_feedback
{
public:
  explicit Init_Visualization_steering_feedback(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_steering_feedforward steering_feedback(::fsd_common_msgs::msg::Visualization::_steering_feedback_type arg)
  {
    msg_.steering_feedback = std::move(arg);
    return Init_Visualization_steering_feedforward(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_steering_without_compensation
{
public:
  explicit Init_Visualization_steering_without_compensation(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_steering_feedback steering_without_compensation(::fsd_common_msgs::msg::Visualization::_steering_without_compensation_type arg)
  {
    msg_.steering_without_compensation = std::move(arg);
    return Init_Visualization_steering_feedback(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_ref4
{
public:
  explicit Init_Visualization_ref4(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_steering_without_compensation ref4(::fsd_common_msgs::msg::Visualization::_ref4_type arg)
  {
    msg_.ref4 = std::move(arg);
    return Init_Visualization_steering_without_compensation(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_ref3
{
public:
  explicit Init_Visualization_ref3(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_ref4 ref3(::fsd_common_msgs::msg::Visualization::_ref3_type arg)
  {
    msg_.ref3 = std::move(arg);
    return Init_Visualization_ref4(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_ref2
{
public:
  explicit Init_Visualization_ref2(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_ref3 ref2(::fsd_common_msgs::msg::Visualization::_ref2_type arg)
  {
    msg_.ref2 = std::move(arg);
    return Init_Visualization_ref3(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_ref1
{
public:
  explicit Init_Visualization_ref1(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_ref2 ref1(::fsd_common_msgs::msg::Visualization::_ref1_type arg)
  {
    msg_.ref1 = std::move(arg);
    return Init_Visualization_ref2(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_ay_ref
{
public:
  explicit Init_Visualization_ay_ref(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_ref1 ay_ref(::fsd_common_msgs::msg::Visualization::_ay_ref_type arg)
  {
    msg_.ay_ref = std::move(arg);
    return Init_Visualization_ref1(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_ax_ref
{
public:
  explicit Init_Visualization_ax_ref(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_ay_ref ax_ref(::fsd_common_msgs::msg::Visualization::_ax_ref_type arg)
  {
    msg_.ax_ref = std::move(arg);
    return Init_Visualization_ay_ref(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_vy_ref
{
public:
  explicit Init_Visualization_vy_ref(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_ax_ref vy_ref(::fsd_common_msgs::msg::Visualization::_vy_ref_type arg)
  {
    msg_.vy_ref = std::move(arg);
    return Init_Visualization_ax_ref(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_vx_ref
{
public:
  explicit Init_Visualization_vx_ref(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_vy_ref vx_ref(::fsd_common_msgs::msg::Visualization::_vx_ref_type arg)
  {
    msg_.vx_ref = std::move(arg);
    return Init_Visualization_vy_ref(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_curvature_ref_rear_axis
{
public:
  explicit Init_Visualization_curvature_ref_rear_axis(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_vx_ref curvature_ref_rear_axis(::fsd_common_msgs::msg::Visualization::_curvature_ref_rear_axis_type arg)
  {
    msg_.curvature_ref_rear_axis = std::move(arg);
    return Init_Visualization_vx_ref(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_curvature_ref_cog
{
public:
  explicit Init_Visualization_curvature_ref_cog(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_curvature_ref_rear_axis curvature_ref_cog(::fsd_common_msgs::msg::Visualization::_curvature_ref_cog_type arg)
  {
    msg_.curvature_ref_cog = std::move(arg);
    return Init_Visualization_curvature_ref_rear_axis(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_curvature_ref_front_axis
{
public:
  explicit Init_Visualization_curvature_ref_front_axis(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_curvature_ref_cog curvature_ref_front_axis(::fsd_common_msgs::msg::Visualization::_curvature_ref_front_axis_type arg)
  {
    msg_.curvature_ref_front_axis = std::move(arg);
    return Init_Visualization_curvature_ref_cog(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_curvature_ref
{
public:
  explicit Init_Visualization_curvature_ref(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_curvature_ref_front_axis curvature_ref(::fsd_common_msgs::msg::Visualization::_curvature_ref_type arg)
  {
    msg_.curvature_ref = std::move(arg);
    return Init_Visualization_curvature_ref_front_axis(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_yaw_ref_rear_axis
{
public:
  explicit Init_Visualization_yaw_ref_rear_axis(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_curvature_ref yaw_ref_rear_axis(::fsd_common_msgs::msg::Visualization::_yaw_ref_rear_axis_type arg)
  {
    msg_.yaw_ref_rear_axis = std::move(arg);
    return Init_Visualization_curvature_ref(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_yaw_ref_cog
{
public:
  explicit Init_Visualization_yaw_ref_cog(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_yaw_ref_rear_axis yaw_ref_cog(::fsd_common_msgs::msg::Visualization::_yaw_ref_cog_type arg)
  {
    msg_.yaw_ref_cog = std::move(arg);
    return Init_Visualization_yaw_ref_rear_axis(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_yaw_ref_front_axis
{
public:
  explicit Init_Visualization_yaw_ref_front_axis(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_yaw_ref_cog yaw_ref_front_axis(::fsd_common_msgs::msg::Visualization::_yaw_ref_front_axis_type arg)
  {
    msg_.yaw_ref_front_axis = std::move(arg);
    return Init_Visualization_yaw_ref_cog(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_yaw_ref
{
public:
  explicit Init_Visualization_yaw_ref(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_yaw_ref_front_axis yaw_ref(::fsd_common_msgs::msg::Visualization::_yaw_ref_type arg)
  {
    msg_.yaw_ref = std::move(arg);
    return Init_Visualization_yaw_ref_front_axis(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_error4
{
public:
  explicit Init_Visualization_error4(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_yaw_ref error4(::fsd_common_msgs::msg::Visualization::_error4_type arg)
  {
    msg_.error4 = std::move(arg);
    return Init_Visualization_yaw_ref(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_error3
{
public:
  explicit Init_Visualization_error3(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_error4 error3(::fsd_common_msgs::msg::Visualization::_error3_type arg)
  {
    msg_.error3 = std::move(arg);
    return Init_Visualization_error4(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_error2
{
public:
  explicit Init_Visualization_error2(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_error3 error2(::fsd_common_msgs::msg::Visualization::_error2_type arg)
  {
    msg_.error2 = std::move(arg);
    return Init_Visualization_error3(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_error1
{
public:
  explicit Init_Visualization_error1(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_error2 error1(::fsd_common_msgs::msg::Visualization::_error1_type arg)
  {
    msg_.error1 = std::move(arg);
    return Init_Visualization_error2(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_motor_speed_error_rr
{
public:
  explicit Init_Visualization_motor_speed_error_rr(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_error1 motor_speed_error_rr(::fsd_common_msgs::msg::Visualization::_motor_speed_error_rr_type arg)
  {
    msg_.motor_speed_error_rr = std::move(arg);
    return Init_Visualization_error1(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_motor_speed_error_lr
{
public:
  explicit Init_Visualization_motor_speed_error_lr(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_motor_speed_error_rr motor_speed_error_lr(::fsd_common_msgs::msg::Visualization::_motor_speed_error_lr_type arg)
  {
    msg_.motor_speed_error_lr = std::move(arg);
    return Init_Visualization_motor_speed_error_rr(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_motor_torq_error_rr
{
public:
  explicit Init_Visualization_motor_torq_error_rr(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_motor_speed_error_lr motor_torq_error_rr(::fsd_common_msgs::msg::Visualization::_motor_torq_error_rr_type arg)
  {
    msg_.motor_torq_error_rr = std::move(arg);
    return Init_Visualization_motor_speed_error_lr(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_motor_torq_error_lr
{
public:
  explicit Init_Visualization_motor_torq_error_lr(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_motor_torq_error_rr motor_torq_error_lr(::fsd_common_msgs::msg::Visualization::_motor_torq_error_lr_type arg)
  {
    msg_.motor_torq_error_lr = std::move(arg);
    return Init_Visualization_motor_torq_error_rr(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_sideslip_error
{
public:
  explicit Init_Visualization_sideslip_error(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_motor_torq_error_lr sideslip_error(::fsd_common_msgs::msg::Visualization::_sideslip_error_type arg)
  {
    msg_.sideslip_error = std::move(arg);
    return Init_Visualization_motor_torq_error_lr(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_vy_error
{
public:
  explicit Init_Visualization_vy_error(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_sideslip_error vy_error(::fsd_common_msgs::msg::Visualization::_vy_error_type arg)
  {
    msg_.vy_error = std::move(arg);
    return Init_Visualization_sideslip_error(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_vx_error
{
public:
  explicit Init_Visualization_vx_error(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_vy_error vx_error(::fsd_common_msgs::msg::Visualization::_vx_error_type arg)
  {
    msg_.vx_error = std::move(arg);
    return Init_Visualization_vy_error(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_steering_error
{
public:
  explicit Init_Visualization_steering_error(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_vx_error steering_error(::fsd_common_msgs::msg::Visualization::_steering_error_type arg)
  {
    msg_.steering_error = std::move(arg);
    return Init_Visualization_vx_error(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_yaw_rate_error
{
public:
  explicit Init_Visualization_yaw_rate_error(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_steering_error yaw_rate_error(::fsd_common_msgs::msg::Visualization::_yaw_rate_error_type arg)
  {
    msg_.yaw_rate_error = std::move(arg);
    return Init_Visualization_steering_error(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_yaw_error_rear_axis
{
public:
  explicit Init_Visualization_yaw_error_rear_axis(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_yaw_rate_error yaw_error_rear_axis(::fsd_common_msgs::msg::Visualization::_yaw_error_rear_axis_type arg)
  {
    msg_.yaw_error_rear_axis = std::move(arg);
    return Init_Visualization_yaw_rate_error(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_yaw_error_cog
{
public:
  explicit Init_Visualization_yaw_error_cog(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_yaw_error_rear_axis yaw_error_cog(::fsd_common_msgs::msg::Visualization::_yaw_error_cog_type arg)
  {
    msg_.yaw_error_cog = std::move(arg);
    return Init_Visualization_yaw_error_rear_axis(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_yaw_error_front_axis
{
public:
  explicit Init_Visualization_yaw_error_front_axis(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_yaw_error_cog yaw_error_front_axis(::fsd_common_msgs::msg::Visualization::_yaw_error_front_axis_type arg)
  {
    msg_.yaw_error_front_axis = std::move(arg);
    return Init_Visualization_yaw_error_cog(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_lat_error_rear_axis
{
public:
  explicit Init_Visualization_lat_error_rear_axis(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_yaw_error_front_axis lat_error_rear_axis(::fsd_common_msgs::msg::Visualization::_lat_error_rear_axis_type arg)
  {
    msg_.lat_error_rear_axis = std::move(arg);
    return Init_Visualization_yaw_error_front_axis(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_lat_error_cog
{
public:
  explicit Init_Visualization_lat_error_cog(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_lat_error_rear_axis lat_error_cog(::fsd_common_msgs::msg::Visualization::_lat_error_cog_type arg)
  {
    msg_.lat_error_cog = std::move(arg);
    return Init_Visualization_lat_error_rear_axis(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_lat_error_front_axis
{
public:
  explicit Init_Visualization_lat_error_front_axis(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_lat_error_cog lat_error_front_axis(::fsd_common_msgs::msg::Visualization::_lat_error_front_axis_type arg)
  {
    msg_.lat_error_front_axis = std::move(arg);
    return Init_Visualization_lat_error_cog(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_frame_id_num
{
public:
  explicit Init_Visualization_frame_id_num(::fsd_common_msgs::msg::Visualization & msg)
  : msg_(msg)
  {}
  Init_Visualization_lat_error_front_axis frame_id_num(::fsd_common_msgs::msg::Visualization::_frame_id_num_type arg)
  {
    msg_.frame_id_num = std::move(arg);
    return Init_Visualization_lat_error_front_axis(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

class Init_Visualization_header
{
public:
  Init_Visualization_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Visualization_frame_id_num header(::fsd_common_msgs::msg::Visualization::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Visualization_frame_id_num(msg_);
  }

private:
  ::fsd_common_msgs::msg::Visualization msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::Visualization>()
{
  return fsd_common_msgs::msg::builder::Init_Visualization_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__VISUALIZATION__BUILDER_HPP_
