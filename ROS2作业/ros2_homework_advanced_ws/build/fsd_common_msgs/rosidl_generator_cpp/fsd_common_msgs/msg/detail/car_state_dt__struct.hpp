// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/CarStateDt.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__CAR_STATE_DT__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__CAR_STATE_DT__STRUCT_HPP_

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
// Member 'car_state_dt'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fsd_common_msgs__msg__CarStateDt __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__CarStateDt __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarStateDt_
{
  using Type = CarStateDt_<ContainerAllocator>;

  explicit CarStateDt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    car_state_dt(_init)
  {
    (void)_init;
  }

  explicit CarStateDt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    car_state_dt(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _car_state_dt_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _car_state_dt_type car_state_dt;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__car_state_dt(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->car_state_dt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::CarStateDt_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::CarStateDt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::CarStateDt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::CarStateDt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::CarStateDt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::CarStateDt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::CarStateDt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::CarStateDt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::CarStateDt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::CarStateDt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__CarStateDt
    std::shared_ptr<fsd_common_msgs::msg::CarStateDt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__CarStateDt
    std::shared_ptr<fsd_common_msgs::msg::CarStateDt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarStateDt_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->car_state_dt != other.car_state_dt) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarStateDt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarStateDt_

// alias to use template instance with default allocator
using CarStateDt =
  fsd_common_msgs::msg::CarStateDt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__CAR_STATE_DT__STRUCT_HPP_
