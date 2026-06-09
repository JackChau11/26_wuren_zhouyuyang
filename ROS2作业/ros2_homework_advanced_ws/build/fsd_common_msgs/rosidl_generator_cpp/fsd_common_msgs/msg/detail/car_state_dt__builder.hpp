// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fsd_common_msgs:msg/CarStateDt.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__CAR_STATE_DT__BUILDER_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__CAR_STATE_DT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fsd_common_msgs/msg/detail/car_state_dt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fsd_common_msgs
{

namespace msg
{

namespace builder
{

class Init_CarStateDt_car_state_dt
{
public:
  explicit Init_CarStateDt_car_state_dt(::fsd_common_msgs::msg::CarStateDt & msg)
  : msg_(msg)
  {}
  ::fsd_common_msgs::msg::CarStateDt car_state_dt(::fsd_common_msgs::msg::CarStateDt::_car_state_dt_type arg)
  {
    msg_.car_state_dt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fsd_common_msgs::msg::CarStateDt msg_;
};

class Init_CarStateDt_header
{
public:
  Init_CarStateDt_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarStateDt_car_state_dt header(::fsd_common_msgs::msg::CarStateDt::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CarStateDt_car_state_dt(msg_);
  }

private:
  ::fsd_common_msgs::msg::CarStateDt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fsd_common_msgs::msg::CarStateDt>()
{
  return fsd_common_msgs::msg::builder::Init_CarStateDt_header();
}

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__CAR_STATE_DT__BUILDER_HPP_
