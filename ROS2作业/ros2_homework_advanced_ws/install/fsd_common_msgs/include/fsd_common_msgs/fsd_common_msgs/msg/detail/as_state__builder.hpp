// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/AsState.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__AS_STATE__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__AS_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/as_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_AsState_count_time
{
public:
  explicit Init_AsState_count_time(::fsd_common_msgs::msg::AsState & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::AsState count_time(::fsd_common_msgs::msg::AsState::_count_time_type arg)
  {
    msg_.count_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsState msg_;
};

class Init_AsState_ready
{
public:
  explicit Init_AsState_ready(::fsd_common_msgs::msg::AsState & msg)
  : msg_(msg)
  {}
  Init_AsState_count_time ready(::fsd_common_msgs::msg::AsState::_ready_type arg)
  {
    msg_.ready = std::move(arg);
    return Init_AsState_count_time(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsState msg_;
};

class Init_AsState_sensor_state
{
public:
  explicit Init_AsState_sensor_state(::fsd_common_msgs::msg::AsState & msg)
  : msg_(msg)
  {}
  Init_AsState_ready sensor_state(::fsd_common_msgs::msg::AsState::_sensor_state_type arg)
  {
    msg_.sensor_state = std::move(arg);
    return Init_AsState_ready(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsState msg_;
};

class Init_AsState_ins_state
{
public:
  explicit Init_AsState_ins_state(::fsd_common_msgs::msg::AsState & msg)
  : msg_(msg)
  {}
  Init_AsState_sensor_state ins_state(::fsd_common_msgs::msg::AsState::_ins_state_type arg)
  {
    msg_.ins_state = std::move(arg);
    return Init_AsState_sensor_state(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsState msg_;
};

class Init_AsState_lidar_state
{
public:
  explicit Init_AsState_lidar_state(::fsd_common_msgs::msg::AsState & msg)
  : msg_(msg)
  {}
  Init_AsState_ins_state lidar_state(::fsd_common_msgs::msg::AsState::_lidar_state_type arg)
  {
    msg_.lidar_state = std::move(arg);
    return Init_AsState_ins_state(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsState msg_;
};

class Init_AsState_camera_state
{
public:
  explicit Init_AsState_camera_state(::fsd_common_msgs::msg::AsState & msg)
  : msg_(msg)
  {}
  Init_AsState_lidar_state camera_state(::fsd_common_msgs::msg::AsState::_camera_state_type arg)
  {
    msg_.camera_state = std::move(arg);
    return Init_AsState_lidar_state(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsState msg_;
};

class Init_AsState_finished
{
public:
  explicit Init_AsState_finished(::fsd_common_msgs::msg::AsState & msg)
  : msg_(msg)
  {}
  Init_AsState_camera_state finished(::fsd_common_msgs::msg::AsState::_finished_type arg)
  {
    msg_.finished = std::move(arg);
    return Init_AsState_camera_state(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsState msg_;
};

class Init_AsState_end
{
public:
  explicit Init_AsState_end(::fsd_common_msgs::msg::AsState & msg)
  : msg_(msg)
  {}
  Init_AsState_finished end(::fsd_common_msgs::msg::AsState::_end_type arg)
  {
    msg_.end = std::move(arg);
    return Init_AsState_finished(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsState msg_;
};

class Init_AsState_which_lap
{
public:
  explicit Init_AsState_which_lap(::fsd_common_msgs::msg::AsState & msg)
  : msg_(msg)
  {}
  Init_AsState_end which_lap(::fsd_common_msgs::msg::AsState::_which_lap_type arg)
  {
    msg_.which_lap = std::move(arg);
    return Init_AsState_end(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsState msg_;
};

class Init_AsState_mission
{
public:
  explicit Init_AsState_mission(::fsd_common_msgs::msg::AsState & msg)
  : msg_(msg)
  {}
  Init_AsState_which_lap mission(::fsd_common_msgs::msg::AsState::_mission_type arg)
  {
    msg_.mission = std::move(arg);
    return Init_AsState_which_lap(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsState msg_;
};

class Init_AsState_header
{
public:
  Init_AsState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AsState_mission header(::fsd_common_msgs::msg::AsState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AsState_mission(msg_);
  }

private:
  ::fsd_common_msgs::msg::AsState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::AsState>()
{
  return fsd_common_msgs::msg::builder::Init_AsState_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__AS_STATE__BUILDER_HPP_
