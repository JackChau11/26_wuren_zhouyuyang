// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fsd_common_msgs:msg/ResAndAmi.idl
// generated code does not contain a copyright notice

#ifndef FSD_COMMON_MSGS__MSG__DETAIL__RES_AND_AMI__STRUCT_HPP_
#define FSD_COMMON_MSGS__MSG__DETAIL__RES_AND_AMI__STRUCT_HPP_

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
# define DEPRECATED__fsd_common_msgs__msg__ResAndAmi __attribute__((deprecated))
#else
# define DEPRECATED__fsd_common_msgs__msg__ResAndAmi __declspec(deprecated)
#endif

namespace fsd_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ResAndAmi_
{
  using Type = ResAndAmi_<ContainerAllocator>;

  explicit ResAndAmi_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res_state = 0;
      this->mission = "";
    }
  }

  explicit ResAndAmi_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    mission(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->res_state = 0;
      this->mission = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _res_state_type =
    uint8_t;
  _res_state_type res_state;
  using _mission_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_type mission;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__res_state(
    const uint8_t & _arg)
  {
    this->res_state = _arg;
    return *this;
  }
  Type & set__mission(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fsd_common_msgs::msg::ResAndAmi_<ContainerAllocator> *;
  using ConstRawPtr =
    const fsd_common_msgs::msg::ResAndAmi_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::ResAndAmi_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fsd_common_msgs::msg::ResAndAmi_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::ResAndAmi_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::ResAndAmi_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fsd_common_msgs::msg::ResAndAmi_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fsd_common_msgs::msg::ResAndAmi_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::ResAndAmi_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fsd_common_msgs::msg::ResAndAmi_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fsd_common_msgs__msg__ResAndAmi
    std::shared_ptr<fsd_common_msgs::msg::ResAndAmi_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fsd_common_msgs__msg__ResAndAmi
    std::shared_ptr<fsd_common_msgs::msg::ResAndAmi_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResAndAmi_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->res_state != other.res_state) {
      return false;
    }
    if (this->mission != other.mission) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResAndAmi_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResAndAmi_

// alias to use template instance with default allocator
using ResAndAmi =
  fsd_common_msgs::msg::ResAndAmi_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fsd_common_msgs

#endif  // FSD_COMMON_MSGS__MSG__DETAIL__RES_AND_AMI__STRUCT_HPP_
