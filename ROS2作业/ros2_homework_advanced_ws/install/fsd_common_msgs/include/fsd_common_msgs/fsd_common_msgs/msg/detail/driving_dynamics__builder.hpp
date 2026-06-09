// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/DrivingDynamics.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__DRIVING_DYNAMICS__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__DRIVING_DYNAMICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/driving_dynamics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_DrivingDynamics_yaw_rate
{
public:
  explicit Init_DrivingDynamics_yaw_rate(::fsd_common_msgs::msg::DrivingDynamics & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::DrivingDynamics yaw_rate(::fsd_common_msgs::msg::DrivingDynamics::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::DrivingDynamics msg_;
};

class Init_DrivingDynamics_acceleration_lateral
{
public:
  explicit Init_DrivingDynamics_acceleration_lateral(::fsd_common_msgs::msg::DrivingDynamics & msg)
  : msg_(msg)
  {}
  Init_DrivingDynamics_yaw_rate acceleration_lateral(::fsd_common_msgs::msg::DrivingDynamics::_acceleration_lateral_type arg)
  {
    msg_.acceleration_lateral = std::move(arg);
    return Init_DrivingDynamics_yaw_rate(msg_);
  }

private:
  ::fsd_common_msgs::msg::DrivingDynamics msg_;
};

class Init_DrivingDynamics_acceleration_longitudinal
{
public:
  explicit Init_DrivingDynamics_acceleration_longitudinal(::fsd_common_msgs::msg::DrivingDynamics & msg)
  : msg_(msg)
  {}
  Init_DrivingDynamics_acceleration_lateral acceleration_longitudinal(::fsd_common_msgs::msg::DrivingDynamics::_acceleration_longitudinal_type arg)
  {
    msg_.acceleration_longitudinal = std::move(arg);
    return Init_DrivingDynamics_acceleration_lateral(msg_);
  }

private:
  ::fsd_common_msgs::msg::DrivingDynamics msg_;
};

class Init_DrivingDynamics_motor_moment_actual
{
public:
  explicit Init_DrivingDynamics_motor_moment_actual(::fsd_common_msgs::msg::DrivingDynamics & msg)
  : msg_(msg)
  {}
  Init_DrivingDynamics_acceleration_longitudinal motor_moment_actual(::fsd_common_msgs::msg::DrivingDynamics::_motor_moment_actual_type arg)
  {
    msg_.motor_moment_actual = std::move(arg);
    return Init_DrivingDynamics_acceleration_longitudinal(msg_);
  }

private:
  ::fsd_common_msgs::msg::DrivingDynamics msg_;
};

class Init_DrivingDynamics_motor_moment_target
{
public:
  explicit Init_DrivingDynamics_motor_moment_target(::fsd_common_msgs::msg::DrivingDynamics & msg)
  : msg_(msg)
  {}
  Init_DrivingDynamics_motor_moment_actual motor_moment_target(::fsd_common_msgs::msg::DrivingDynamics::_motor_moment_target_type arg)
  {
    msg_.motor_moment_target = std::move(arg);
    return Init_DrivingDynamics_motor_moment_actual(msg_);
  }

private:
  ::fsd_common_msgs::msg::DrivingDynamics msg_;
};

class Init_DrivingDynamics_brake_hydr_actual
{
public:
  explicit Init_DrivingDynamics_brake_hydr_actual(::fsd_common_msgs::msg::DrivingDynamics & msg)
  : msg_(msg)
  {}
  Init_DrivingDynamics_motor_moment_target brake_hydr_actual(::fsd_common_msgs::msg::DrivingDynamics::_brake_hydr_actual_type arg)
  {
    msg_.brake_hydr_actual = std::move(arg);
    return Init_DrivingDynamics_motor_moment_target(msg_);
  }

private:
  ::fsd_common_msgs::msg::DrivingDynamics msg_;
};

class Init_DrivingDynamics_brake_hydr_target
{
public:
  explicit Init_DrivingDynamics_brake_hydr_target(::fsd_common_msgs::msg::DrivingDynamics & msg)
  : msg_(msg)
  {}
  Init_DrivingDynamics_brake_hydr_actual brake_hydr_target(::fsd_common_msgs::msg::DrivingDynamics::_brake_hydr_target_type arg)
  {
    msg_.brake_hydr_target = std::move(arg);
    return Init_DrivingDynamics_brake_hydr_actual(msg_);
  }

private:
  ::fsd_common_msgs::msg::DrivingDynamics msg_;
};

class Init_DrivingDynamics_steering_angle_actual
{
public:
  explicit Init_DrivingDynamics_steering_angle_actual(::fsd_common_msgs::msg::DrivingDynamics & msg)
  : msg_(msg)
  {}
  Init_DrivingDynamics_brake_hydr_target steering_angle_actual(::fsd_common_msgs::msg::DrivingDynamics::_steering_angle_actual_type arg)
  {
    msg_.steering_angle_actual = std::move(arg);
    return Init_DrivingDynamics_brake_hydr_target(msg_);
  }

private:
  ::fsd_common_msgs::msg::DrivingDynamics msg_;
};

class Init_DrivingDynamics_steering_angle_target
{
public:
  explicit Init_DrivingDynamics_steering_angle_target(::fsd_common_msgs::msg::DrivingDynamics & msg)
  : msg_(msg)
  {}
  Init_DrivingDynamics_steering_angle_actual steering_angle_target(::fsd_common_msgs::msg::DrivingDynamics::_steering_angle_target_type arg)
  {
    msg_.steering_angle_target = std::move(arg);
    return Init_DrivingDynamics_steering_angle_actual(msg_);
  }

private:
  ::fsd_common_msgs::msg::DrivingDynamics msg_;
};

class Init_DrivingDynamics_speed_actual
{
public:
  explicit Init_DrivingDynamics_speed_actual(::fsd_common_msgs::msg::DrivingDynamics & msg)
  : msg_(msg)
  {}
  Init_DrivingDynamics_steering_angle_target speed_actual(::fsd_common_msgs::msg::DrivingDynamics::_speed_actual_type arg)
  {
    msg_.speed_actual = std::move(arg);
    return Init_DrivingDynamics_steering_angle_target(msg_);
  }

private:
  ::fsd_common_msgs::msg::DrivingDynamics msg_;
};

class Init_DrivingDynamics_speed_target
{
public:
  explicit Init_DrivingDynamics_speed_target(::fsd_common_msgs::msg::DrivingDynamics & msg)
  : msg_(msg)
  {}
  Init_DrivingDynamics_speed_actual speed_target(::fsd_common_msgs::msg::DrivingDynamics::_speed_target_type arg)
  {
    msg_.speed_target = std::move(arg);
    return Init_DrivingDynamics_speed_actual(msg_);
  }

private:
  ::fsd_common_msgs::msg::DrivingDynamics msg_;
};

class Init_DrivingDynamics_header
{
public:
  Init_DrivingDynamics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrivingDynamics_speed_target header(::fsd_common_msgs::msg::DrivingDynamics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DrivingDynamics_speed_target(msg_);
  }

private:
  ::fsd_common_msgs::msg::DrivingDynamics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::DrivingDynamics>()
{
  return fsd_common_msgs::msg::builder::Init_DrivingDynamics_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__DRIVING_DYNAMICS__BUILDER_HPP_
