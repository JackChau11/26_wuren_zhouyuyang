#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__AsState() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__AsState__init(msg: *mut AsState) -> bool;
    fn fsd_common_msgs__msg__AsState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AsState>, size: usize) -> bool;
    fn fsd_common_msgs__msg__AsState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AsState>);
    fn fsd_common_msgs__msg__AsState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AsState>, out_seq: *mut rosidl_runtime_rs::Sequence<AsState>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__AsState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Header

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AsState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 指示当前任务
    pub mission: rosidl_runtime_rs::String,

    /// 进行记圈，指示当前的圈数
    pub which_lap: u8,

    /// 指示达到指定停车位置。0表示未到达，1表示到达。随后速度设为0，同时刹车
    pub end: u8,

    /// uint8 stop#指示是否停车。1表示停车，随后通过气瓶进行制动
    /// 指示任务完成。0表示未完成，1为任务完成
    pub finished: u8,

    /// 指示相机状态。0为正常，1为断线或异常
    pub camera_state: u8,

    /// 指示激光雷达状态。0为正常，1为断线或异常
    pub lidar_state: u8,

    /// 指示组合惯导状态。0为正常，1为断线或异常
    pub ins_state: u8,

    /// 指示相机、激光雷达、组合惯导状态，同时正常即为0，有一个传感器断线即为1
    pub sensor_state: u8,

    /// 指示目前无人系统是否准备好，即能否正常接受并处理所有传感器的数据，并正确输出控制指令。0代表正常
    pub ready: u8,

    /// 接收到go信号后开始计时
    pub count_time: f32,

}



impl Default for AsState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__AsState__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__AsState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AsState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__AsState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__AsState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__AsState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AsState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AsState where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/AsState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__AsState() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__AsensingMessage() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__AsensingMessage__init(msg: *mut AsensingMessage) -> bool;
    fn fsd_common_msgs__msg__AsensingMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AsensingMessage>, size: usize) -> bool;
    fn fsd_common_msgs__msg__AsensingMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AsensingMessage>);
    fn fsd_common_msgs__msg__AsensingMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AsensingMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<AsensingMessage>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__AsensingMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// # message of Asensing perception result.It is INS data. 
/// Header header         # standard ROS message header
/// uint64 frame_id_num  
/// float32 acc_x
/// float32 acc_y
/// float32 acc_z
/// float32 gyro_x
/// float32 gyro_y
/// float32 gyro_z
/// float32 pitch
/// float32 roll
/// float32 heading_angle
/// float32 h
/// uint64 ull_timestamp
/// float64 lat
/// float64 lon
/// float32 vn
/// float32 ve
/// float32 vh
/// uint32 gps_flag_pos
/// uint32 num_sv
/// uint32 gps_flag_heading
/// uint64 gps_age
/// uint32 car_status
/// uint32 status
/// float32 std_lat
/// float32 std_lon
/// float32 std_local_height
/// float32 std_heading
/// float32 utc_year
/// float32 utc_month
/// float32 utc_day
/// float32 utc_hour
/// float32 utc_min
/// float32 utc_sec
/// float64 utc_msec

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AsensingMessage {
    /// message of Asensing perception result.It is INS data.
    /// standard ROS message header
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id_num: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lat: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lon: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub h: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vn: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ve: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vh: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roll: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub heading_angle: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_z: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_y: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_z: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub std_lat: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub std_lon: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub std_local_height: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub north_velocity_std: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub east_velocity_std: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ground_velocity_std: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roll_std: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch_std: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub std_heading: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gps_flag_pos: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gps_week_number: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ull_timestamp: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub car_status: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gps_flag_heading: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub num_sv: u32,

}



impl Default for AsensingMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__AsensingMessage__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__AsensingMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AsensingMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__AsensingMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__AsensingMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__AsensingMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AsensingMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AsensingMessage where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/AsensingMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__AsensingMessage() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__CanFrames() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__CanFrames__init(msg: *mut CanFrames) -> bool;
    fn fsd_common_msgs__msg__CanFrames__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CanFrames>, size: usize) -> bool;
    fn fsd_common_msgs__msg__CanFrames__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CanFrames>);
    fn fsd_common_msgs__msg__CanFrames__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CanFrames>, out_seq: *mut rosidl_runtime_rs::Sequence<CanFrames>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__CanFrames
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CanFrames {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frames: rosidl_runtime_rs::Sequence<can_msgs::msg::rmw::Frame>,

}



impl Default for CanFrames {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__CanFrames__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__CanFrames__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CanFrames {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__CanFrames__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__CanFrames__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__CanFrames__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CanFrames {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CanFrames where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/CanFrames";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__CanFrames() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__CarState() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__CarState__init(msg: *mut CarState) -> bool;
    fn fsd_common_msgs__msg__CarState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CarState>, size: usize) -> bool;
    fn fsd_common_msgs__msg__CarState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CarState>);
    fn fsd_common_msgs__msg__CarState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CarState>, out_seq: *mut rosidl_runtime_rs::Sequence<CarState>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__CarState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CarState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Position in x, y, theta
    pub car_state: geometry_msgs::msg::rmw::Pose2D,

    /// Velocities
    pub car_state_dt: super::super::msg::rmw::CarStateDt,

}



impl Default for CarState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__CarState__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__CarState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CarState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__CarState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__CarState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__CarState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CarState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CarState where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/CarState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__CarState() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__CarStateDt() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__CarStateDt__init(msg: *mut CarStateDt) -> bool;
    fn fsd_common_msgs__msg__CarStateDt__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CarStateDt>, size: usize) -> bool;
    fn fsd_common_msgs__msg__CarStateDt__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CarStateDt>);
    fn fsd_common_msgs__msg__CarStateDt__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CarStateDt>, out_seq: *mut rosidl_runtime_rs::Sequence<CarStateDt>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__CarStateDt
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CarStateDt {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Velocity in x, y, theta
    pub car_state_dt: geometry_msgs::msg::rmw::Pose2D,

}



impl Default for CarStateDt {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__CarStateDt__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__CarStateDt__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CarStateDt {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__CarStateDt__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__CarStateDt__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__CarStateDt__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CarStateDt {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CarStateDt where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/CarStateDt";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__CarStateDt() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__Cone() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__Cone__init(msg: *mut Cone) -> bool;
    fn fsd_common_msgs__msg__Cone__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Cone>, size: usize) -> bool;
    fn fsd_common_msgs__msg__Cone__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Cone>);
    fn fsd_common_msgs__msg__Cone__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Cone>, out_seq: *mut rosidl_runtime_rs::Sequence<Cone>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__Cone
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Cone {

    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub color: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_confidence: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub color_confidence: f64,

}



impl Default for Cone {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__Cone__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__Cone__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Cone {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Cone__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Cone__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Cone__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Cone {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Cone where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/Cone";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__Cone() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__ConeDbscan() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__ConeDbscan__init(msg: *mut ConeDbscan) -> bool;
    fn fsd_common_msgs__msg__ConeDbscan__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ConeDbscan>, size: usize) -> bool;
    fn fsd_common_msgs__msg__ConeDbscan__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ConeDbscan>);
    fn fsd_common_msgs__msg__ConeDbscan__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ConeDbscan>, out_seq: *mut rosidl_runtime_rs::Sequence<ConeDbscan>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__ConeDbscan
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConeDbscan {
    /// coordinate of cone in [x, y]
    pub position: geometry_msgs::msg::rmw::Point,

    /// color of cone, 'b' = blue, 'y' = yellow, 'o' = orange
    pub color: std_msgs::msg::rmw::String,

    /// confidence of cone detect
    pub pose_confidence: std_msgs::msg::rmw::Float32,

    /// confidence of cone detect
    pub color_confidence: std_msgs::msg::rmw::Float32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cluster: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub point_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pts: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub visited: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub corepts: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for ConeDbscan {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__ConeDbscan__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__ConeDbscan__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ConeDbscan {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__ConeDbscan__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__ConeDbscan__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__ConeDbscan__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ConeDbscan {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ConeDbscan where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/ConeDbscan";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__ConeDbscan() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__ConeDetections() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__ConeDetections__init(msg: *mut ConeDetections) -> bool;
    fn fsd_common_msgs__msg__ConeDetections__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ConeDetections>, size: usize) -> bool;
    fn fsd_common_msgs__msg__ConeDetections__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ConeDetections>);
    fn fsd_common_msgs__msg__ConeDetections__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ConeDetections>, out_seq: *mut rosidl_runtime_rs::Sequence<ConeDetections>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__ConeDetections
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConeDetections {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_detections: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Cone>,

}



impl Default for ConeDetections {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__ConeDetections__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__ConeDetections__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ConeDetections {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__ConeDetections__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__ConeDetections__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__ConeDetections__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ConeDetections {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ConeDetections where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/ConeDetections";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__ConeDetections() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__ConeDetectionsDbscan() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__ConeDetectionsDbscan__init(msg: *mut ConeDetectionsDbscan) -> bool;
    fn fsd_common_msgs__msg__ConeDetectionsDbscan__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ConeDetectionsDbscan>, size: usize) -> bool;
    fn fsd_common_msgs__msg__ConeDetectionsDbscan__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ConeDetectionsDbscan>);
    fn fsd_common_msgs__msg__ConeDetectionsDbscan__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ConeDetectionsDbscan>, out_seq: *mut rosidl_runtime_rs::Sequence<ConeDetectionsDbscan>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__ConeDetectionsDbscan
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConeDetectionsDbscan {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_detections: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ConeDbscan>,

}



impl Default for ConeDetectionsDbscan {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__ConeDetectionsDbscan__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__ConeDetectionsDbscan__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ConeDetectionsDbscan {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__ConeDetectionsDbscan__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__ConeDetectionsDbscan__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__ConeDetectionsDbscan__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ConeDetectionsDbscan {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ConeDetectionsDbscan where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/ConeDetectionsDbscan";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__ConeDetectionsDbscan() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__ControlCommand() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__ControlCommand__init(msg: *mut ControlCommand) -> bool;
    fn fsd_common_msgs__msg__ControlCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControlCommand>, size: usize) -> bool;
    fn fsd_common_msgs__msg__ControlCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControlCommand>);
    fn fsd_common_msgs__msg__ControlCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControlCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<ControlCommand>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__ControlCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Throttle value between [-1, 1]
    pub throttle: std_msgs::msg::rmw::Float32,

    /// Steering angle value between [-1, 1], where left < 0, right > 0
    pub steering_angle: std_msgs::msg::rmw::Float32,

}



impl Default for ControlCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__ControlCommand__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__ControlCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControlCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__ControlCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__ControlCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__ControlCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControlCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControlCommand where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/ControlCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__ControlCommand() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__DecisionFlag() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__DecisionFlag__init(msg: *mut DecisionFlag) -> bool;
    fn fsd_common_msgs__msg__DecisionFlag__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DecisionFlag>, size: usize) -> bool;
    fn fsd_common_msgs__msg__DecisionFlag__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DecisionFlag>);
    fn fsd_common_msgs__msg__DecisionFlag__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DecisionFlag>, out_seq: *mut rosidl_runtime_rs::Sequence<DecisionFlag>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__DecisionFlag
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DecisionFlag {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 该msg用于紧急切换控制策略目前仅作设想，未实装#################
    /// 0为正常，1为规划模块异常--->触发EBS
    pub lap1_state: u8,

    /// 0为正常，1为规划模块异常、SLAM正常--->跟踪首圈轨迹/Ribbon
    ///         2为规划模块异常、SLAM异常(给不出图或者给的图不好)--->触发EBS
    ///         3为规划模块正常、SLAM正常--->但选用Ribbon
    pub lap2_state: u8,

    /// 0表示第二圈根据lap2_state选择控制策略，1表示一直用局部，此flag优先级应高于lap2_state
    pub map_state: u8,

}



impl Default for DecisionFlag {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__DecisionFlag__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__DecisionFlag__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DecisionFlag {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__DecisionFlag__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__DecisionFlag__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__DecisionFlag__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DecisionFlag {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DecisionFlag where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/DecisionFlag";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__DecisionFlag() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__DrivingDynamics() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__DrivingDynamics__init(msg: *mut DrivingDynamics) -> bool;
    fn fsd_common_msgs__msg__DrivingDynamics__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DrivingDynamics>, size: usize) -> bool;
    fn fsd_common_msgs__msg__DrivingDynamics__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DrivingDynamics>);
    fn fsd_common_msgs__msg__DrivingDynamics__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DrivingDynamics>, out_seq: *mut rosidl_runtime_rs::Sequence<DrivingDynamics>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__DrivingDynamics
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DrivingDynamics {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 此msg用来发送特定数据给CAN_send节点，再发到canB总线
    pub speed_target: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub speed_actual: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steering_angle_target: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steering_angle_actual: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake_hydr_target: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake_hydr_actual: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_moment_target: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_moment_actual: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acceleration_longitudinal: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acceleration_lateral: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_rate: f32,

}



impl Default for DrivingDynamics {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__DrivingDynamics__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__DrivingDynamics__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DrivingDynamics {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__DrivingDynamics__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__DrivingDynamics__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__DrivingDynamics__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DrivingDynamics {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DrivingDynamics where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/DrivingDynamics";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__DrivingDynamics() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__EchievMessage() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__EchievMessage__init(msg: *mut EchievMessage) -> bool;
    fn fsd_common_msgs__msg__EchievMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EchievMessage>, size: usize) -> bool;
    fn fsd_common_msgs__msg__EchievMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EchievMessage>);
    fn fsd_common_msgs__msg__EchievMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EchievMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<EchievMessage>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__EchievMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// echiev_perception ,message of echiev perception result 

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EchievMessage {
    /// standard ROS message header
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id_num: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ull_timestamp: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lat: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lon: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub h: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vn: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ve: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vh: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roll: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acc_z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro_z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub gps_state: u8,

}



impl Default for EchievMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__EchievMessage__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__EchievMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EchievMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__EchievMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__EchievMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__EchievMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EchievMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EchievMessage where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/EchievMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__EchievMessage() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__Feedback() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__Feedback__init(msg: *mut Feedback) -> bool;
    fn fsd_common_msgs__msg__Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Feedback>, size: usize) -> bool;
    fn fsd_common_msgs__msg__Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Feedback>);
    fn fsd_common_msgs__msg__Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<Feedback>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// car feedback data. 

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Feedback {
    /// standard ROS message header
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id_num: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wheel_speed_fl: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wheel_speed_fr: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wheel_speed_rl: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wheel_speed_rr: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_command_speed_rl: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_command_speed_rr: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_return_speed_rl: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_return_speed_rr: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_command_torq_rl: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_command_torq_rr: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_return_torq_rl: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_return_torq_rr: f32,

}



impl Default for Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__Feedback__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__Feedback() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__InsDelta() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__InsDelta__init(msg: *mut InsDelta) -> bool;
    fn fsd_common_msgs__msg__InsDelta__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InsDelta>, size: usize) -> bool;
    fn fsd_common_msgs__msg__InsDelta__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InsDelta>);
    fn fsd_common_msgs__msg__InsDelta__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InsDelta>, out_seq: *mut rosidl_runtime_rs::Sequence<InsDelta>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__InsDelta
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InsDelta {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_omega: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_distance_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_distance_y: f32,

}



impl Default for InsDelta {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__InsDelta__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__InsDelta__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InsDelta {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__InsDelta__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__InsDelta__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__InsDelta__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InsDelta {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InsDelta where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/InsDelta";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__InsDelta() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__Map() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__Map__init(msg: *mut Map) -> bool;
    fn fsd_common_msgs__msg__Map__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Map>, size: usize) -> bool;
    fn fsd_common_msgs__msg__Map__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Map>);
    fn fsd_common_msgs__msg__Map__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Map>, out_seq: *mut rosidl_runtime_rs::Sequence<Map>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__Map
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Map {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_yellow: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Cone>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_blue: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Cone>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_red: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Cone>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_unknown: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Cone>,

}



impl Default for Map {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__Map__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__Map__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Map {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Map__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Map__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Map__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Map {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Map where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/Map";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__Map() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__Mission() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__Mission__init(msg: *mut Mission) -> bool;
    fn fsd_common_msgs__msg__Mission__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Mission>, size: usize) -> bool;
    fn fsd_common_msgs__msg__Mission__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Mission>);
    fn fsd_common_msgs__msg__Mission__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Mission>, out_seq: *mut rosidl_runtime_rs::Sequence<Mission>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__Mission
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Header

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mission {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub finished: bool,

}



impl Default for Mission {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__Mission__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__Mission__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Mission {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Mission__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Mission__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Mission__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Mission {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Mission where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/Mission";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__Mission() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__RemoteControlCommand() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__RemoteControlCommand__init(msg: *mut RemoteControlCommand) -> bool;
    fn fsd_common_msgs__msg__RemoteControlCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RemoteControlCommand>, size: usize) -> bool;
    fn fsd_common_msgs__msg__RemoteControlCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RemoteControlCommand>);
    fn fsd_common_msgs__msg__RemoteControlCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RemoteControlCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<RemoteControlCommand>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__RemoteControlCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RemoteControlCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Throttle value between [-1, 1]
    pub throttle: f32,

    /// Steering angle value between [-1, 1], where left < 0, right > 0
    pub steering_angle: f32,

    /// 0,1
    pub go: f32,

    /// 0,1
    pub stop: f32,

    /// 0,1
    pub test1: f32,

}



impl Default for RemoteControlCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__RemoteControlCommand__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__RemoteControlCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RemoteControlCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__RemoteControlCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__RemoteControlCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__RemoteControlCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RemoteControlCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RemoteControlCommand where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/RemoteControlCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__RemoteControlCommand() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__ResAndAmi() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__ResAndAmi__init(msg: *mut ResAndAmi) -> bool;
    fn fsd_common_msgs__msg__ResAndAmi__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ResAndAmi>, size: usize) -> bool;
    fn fsd_common_msgs__msg__ResAndAmi__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ResAndAmi>);
    fn fsd_common_msgs__msg__ResAndAmi__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ResAndAmi>, out_seq: *mut rosidl_runtime_rs::Sequence<ResAndAmi>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__ResAndAmi
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Header

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResAndAmi {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// 指示res状态，1代表“go”信号
    pub res_state: u8,

    /// 指示AMI选择的无人驾驶任务。0.inspection;1.ebs_test;2.acceleration;3.skidpad;4.trackdrive
    pub mission: rosidl_runtime_rs::String,

}



impl Default for ResAndAmi {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__ResAndAmi__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__ResAndAmi__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ResAndAmi {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__ResAndAmi__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__ResAndAmi__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__ResAndAmi__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ResAndAmi {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ResAndAmi where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/ResAndAmi";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__ResAndAmi() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__SkidpadGlobalCenterLine() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__SkidpadGlobalCenterLine__init(msg: *mut SkidpadGlobalCenterLine) -> bool;
    fn fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SkidpadGlobalCenterLine>, size: usize) -> bool;
    fn fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SkidpadGlobalCenterLine>);
    fn fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SkidpadGlobalCenterLine>, out_seq: *mut rosidl_runtime_rs::Sequence<SkidpadGlobalCenterLine>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__SkidpadGlobalCenterLine
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SkidpadGlobalCenterLine {

    // This member is not documented.
    #[allow(missing_docs)]
    pub global_path: nav_msgs::msg::rmw::Path,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_reach_mid: bool,

}



impl Default for SkidpadGlobalCenterLine {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__SkidpadGlobalCenterLine__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__SkidpadGlobalCenterLine__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SkidpadGlobalCenterLine {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__SkidpadGlobalCenterLine__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SkidpadGlobalCenterLine {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SkidpadGlobalCenterLine where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/SkidpadGlobalCenterLine";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__SkidpadGlobalCenterLine() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__Time() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__Time__init(msg: *mut Time) -> bool;
    fn fsd_common_msgs__msg__Time__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Time>, size: usize) -> bool;
    fn fsd_common_msgs__msg__Time__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Time>);
    fn fsd_common_msgs__msg__Time__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Time>, out_seq: *mut rosidl_runtime_rs::Sequence<Time>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__Time
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// message of Asensing perception result.It is INS data. 

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Time {
    /// standard ROS message header
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id_num: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sum_compute_time: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub control_compute_time: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub boundary_detector_compute_time: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub line_detector_compute_time: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub skidpad_detector_compute_time: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lidar_detection_compute_time: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub camera_detection_compute_time: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fusion_detection_compute_time: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time2: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time3: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time4: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time5: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time6: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time7: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time8: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time9: f32,

}



impl Default for Time {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__Time__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__Time__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Time {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Time__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Time__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Time__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Time {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Time where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/Time";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__Time() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__Track() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__Track__init(msg: *mut Track) -> bool;
    fn fsd_common_msgs__msg__Track__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Track>, size: usize) -> bool;
    fn fsd_common_msgs__msg__Track__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Track>);
    fn fsd_common_msgs__msg__Track__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Track>, out_seq: *mut rosidl_runtime_rs::Sequence<Track>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__Track
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Track {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cones_left: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cones_right: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cones_orange: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cones_orange_big: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tk_device_start: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tk_device_end: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,

}



impl Default for Track {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__Track__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__Track__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Track {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Track__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Track__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Track__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Track {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Track where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/Track";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__Track() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__TrajectoryPoint() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__TrajectoryPoint__init(msg: *mut TrajectoryPoint) -> bool;
    fn fsd_common_msgs__msg__TrajectoryPoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrajectoryPoint>, size: usize) -> bool;
    fn fsd_common_msgs__msg__TrajectoryPoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrajectoryPoint>);
    fn fsd_common_msgs__msg__TrajectoryPoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrajectoryPoint>, out_seq: *mut rosidl_runtime_rs::Sequence<TrajectoryPoint>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__TrajectoryPoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrajectoryPoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Velocities
    pub trajectory_point: rosidl_runtime_rs::Sequence<super::super::msg::rmw::CarState>,

}



impl Default for TrajectoryPoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__TrajectoryPoint__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__TrajectoryPoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrajectoryPoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__TrajectoryPoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__TrajectoryPoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__TrajectoryPoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrajectoryPoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrajectoryPoint where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/TrajectoryPoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__TrajectoryPoint() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__Visualization() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__Visualization__init(msg: *mut Visualization) -> bool;
    fn fsd_common_msgs__msg__Visualization__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Visualization>, size: usize) -> bool;
    fn fsd_common_msgs__msg__Visualization__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Visualization>);
    fn fsd_common_msgs__msg__Visualization__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Visualization>, out_seq: *mut rosidl_runtime_rs::Sequence<Visualization>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__Visualization
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// visualization data 

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Visualization {
    /// standard ROS message header
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frame_id_num: u64,

    /// error data
    pub lat_error_front_axis: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lat_error_cog: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lat_error_rear_axis: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_error_front_axis: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_error_cog: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_error_rear_axis: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_rate_error: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steering_error: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vx_error: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vy_error: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sideslip_error: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_torq_error_lr: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_torq_error_rr: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_speed_error_lr: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_speed_error_rr: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error1: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error2: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error3: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error4: f32,

    /// ref visualization
    pub yaw_ref: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_ref_front_axis: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_ref_cog: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_ref_rear_axis: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub curvature_ref: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub curvature_ref_front_axis: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub curvature_ref_cog: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub curvature_ref_rear_axis: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vx_ref: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vy_ref: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ax_ref: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ay_ref: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ref1: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ref2: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ref3: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ref4: f32,

    /// algorithm data visualization
    pub steering_without_compensation: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steering_feedback: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub steering_feedforward: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lookforward_length: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_rate_pre: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub turning_radius: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub adhesion_coefficient_pre: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sideslip_pre: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub slip_angle_pre_fl: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub slip_angle_pre_fr: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub slip_angle_pre_rl: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub slip_angle_pre_rr: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub norm_force_pre_fl: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub norm_force_pre_fr: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub norm_force_pre_rl: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub norm_force_pre_rr: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub algorithm1: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub algorithm2: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub algorithm3: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub algorithm4: f32,

}



impl Default for Visualization {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__Visualization__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__Visualization__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Visualization {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Visualization__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Visualization__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__Visualization__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Visualization {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Visualization where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/Visualization";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__Visualization() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__YoloCone() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__YoloCone__init(msg: *mut YoloCone) -> bool;
    fn fsd_common_msgs__msg__YoloCone__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<YoloCone>, size: usize) -> bool;
    fn fsd_common_msgs__msg__YoloCone__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<YoloCone>);
    fn fsd_common_msgs__msg__YoloCone__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<YoloCone>, out_seq: *mut rosidl_runtime_rs::Sequence<YoloCone>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__YoloCone
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YoloCone {
    /// center x
    pub x: std_msgs::msg::rmw::Float32,

    /// center y
    pub y: std_msgs::msg::rmw::Float32,

    /// width
    pub width: std_msgs::msg::rmw::Float32,

    /// height
    pub height: std_msgs::msg::rmw::Float32,

    /// color of cone, 'r' = red, 'b' = blue, 'y' = yellow
    pub color: std_msgs::msg::rmw::String,

    /// confidence of cone detect
    pub color_confidence: std_msgs::msg::rmw::Float32,

}



impl Default for YoloCone {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__YoloCone__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__YoloCone__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for YoloCone {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__YoloCone__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__YoloCone__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__YoloCone__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for YoloCone {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for YoloCone where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/YoloCone";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__YoloCone() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__YoloConeDetections() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__YoloConeDetections__init(msg: *mut YoloConeDetections) -> bool;
    fn fsd_common_msgs__msg__YoloConeDetections__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<YoloConeDetections>, size: usize) -> bool;
    fn fsd_common_msgs__msg__YoloConeDetections__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<YoloConeDetections>);
    fn fsd_common_msgs__msg__YoloConeDetections__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<YoloConeDetections>, out_seq: *mut rosidl_runtime_rs::Sequence<YoloConeDetections>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__YoloConeDetections
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YoloConeDetections {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image_header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_detections: rosidl_runtime_rs::Sequence<super::super::msg::rmw::YoloCone>,

}



impl Default for YoloConeDetections {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__YoloConeDetections__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__YoloConeDetections__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for YoloConeDetections {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__YoloConeDetections__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__YoloConeDetections__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__YoloConeDetections__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for YoloConeDetections {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for YoloConeDetections where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/YoloConeDetections";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__YoloConeDetections() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__YoloConeDetectionsTrack() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__YoloConeDetectionsTrack__init(msg: *mut YoloConeDetectionsTrack) -> bool;
    fn fsd_common_msgs__msg__YoloConeDetectionsTrack__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<YoloConeDetectionsTrack>, size: usize) -> bool;
    fn fsd_common_msgs__msg__YoloConeDetectionsTrack__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<YoloConeDetectionsTrack>);
    fn fsd_common_msgs__msg__YoloConeDetectionsTrack__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<YoloConeDetectionsTrack>, out_seq: *mut rosidl_runtime_rs::Sequence<YoloConeDetectionsTrack>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__YoloConeDetectionsTrack
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YoloConeDetectionsTrack {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_detections: rosidl_runtime_rs::Sequence<super::super::msg::rmw::YoloConeTrack>,

}



impl Default for YoloConeDetectionsTrack {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__YoloConeDetectionsTrack__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__YoloConeDetectionsTrack__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for YoloConeDetectionsTrack {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__YoloConeDetectionsTrack__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__YoloConeDetectionsTrack__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__YoloConeDetectionsTrack__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for YoloConeDetectionsTrack {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for YoloConeDetectionsTrack where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/YoloConeDetectionsTrack";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__YoloConeDetectionsTrack() }
  }
}


#[link(name = "fsd_common_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__YoloConeTrack() -> *const std::ffi::c_void;
}

#[link(name = "fsd_common_msgs__rosidl_generator_c")]
extern "C" {
    fn fsd_common_msgs__msg__YoloConeTrack__init(msg: *mut YoloConeTrack) -> bool;
    fn fsd_common_msgs__msg__YoloConeTrack__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<YoloConeTrack>, size: usize) -> bool;
    fn fsd_common_msgs__msg__YoloConeTrack__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<YoloConeTrack>);
    fn fsd_common_msgs__msg__YoloConeTrack__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<YoloConeTrack>, out_seq: *mut rosidl_runtime_rs::Sequence<YoloConeTrack>) -> bool;
}

// Corresponds to fsd_common_msgs__msg__YoloConeTrack
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YoloConeTrack {
    /// center x
    pub x: std_msgs::msg::rmw::Float32,

    /// center y
    pub y: std_msgs::msg::rmw::Float32,

    /// width
    pub width: std_msgs::msg::rmw::Float32,

    /// height
    pub height: std_msgs::msg::rmw::Float32,

    /// color of cone, 'r' = red, 'b' = blue, 'y' = yellow
    pub color: std_msgs::msg::rmw::String,

    /// confidence of cone detect
    pub color_confidence: std_msgs::msg::rmw::Float32,

    /// 3d position with (x,y,z)
    pub position: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_confidence: std_msgs::msg::rmw::Float32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tracking_id: std_msgs::msg::rmw::UInt8,

    /// OFF, OK, SEARCHING, TERMINATE
    pub tracking_state: std_msgs::msg::rmw::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub missing_frams: std_msgs::msg::rmw::UInt8,

}



impl Default for YoloConeTrack {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !fsd_common_msgs__msg__YoloConeTrack__init(&mut msg as *mut _) {
        panic!("Call to fsd_common_msgs__msg__YoloConeTrack__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for YoloConeTrack {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__YoloConeTrack__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__YoloConeTrack__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { fsd_common_msgs__msg__YoloConeTrack__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for YoloConeTrack {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for YoloConeTrack where Self: Sized {
  const TYPE_NAME: &'static str = "fsd_common_msgs/msg/YoloConeTrack";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__fsd_common_msgs__msg__YoloConeTrack() }
  }
}


