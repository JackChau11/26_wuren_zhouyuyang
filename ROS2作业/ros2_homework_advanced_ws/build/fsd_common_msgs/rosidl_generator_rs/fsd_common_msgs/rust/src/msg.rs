#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to fsd_common_msgs__msg__AsState
/// Header

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AsState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 指示当前任务
    pub mission: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AsState::default())
  }
}

impl rosidl_runtime_rs::Message for AsState {
  type RmwMsg = super::msg::rmw::AsState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        mission: msg.mission.as_str().into(),
        which_lap: msg.which_lap,
        end: msg.end,
        finished: msg.finished,
        camera_state: msg.camera_state,
        lidar_state: msg.lidar_state,
        ins_state: msg.ins_state,
        sensor_state: msg.sensor_state,
        ready: msg.ready,
        count_time: msg.count_time,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        mission: msg.mission.as_str().into(),
      which_lap: msg.which_lap,
      end: msg.end,
      finished: msg.finished,
      camera_state: msg.camera_state,
      lidar_state: msg.lidar_state,
      ins_state: msg.ins_state,
      sensor_state: msg.sensor_state,
      ready: msg.ready,
      count_time: msg.count_time,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      mission: msg.mission.to_string(),
      which_lap: msg.which_lap,
      end: msg.end,
      finished: msg.finished,
      camera_state: msg.camera_state,
      lidar_state: msg.lidar_state,
      ins_state: msg.ins_state,
      sensor_state: msg.sensor_state,
      ready: msg.ready,
      count_time: msg.count_time,
    }
  }
}


// Corresponds to fsd_common_msgs__msg__AsensingMessage
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

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AsensingMessage {
    /// message of Asensing perception result.It is INS data.
    /// standard ROS message header
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AsensingMessage::default())
  }
}

impl rosidl_runtime_rs::Message for AsensingMessage {
  type RmwMsg = super::msg::rmw::AsensingMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        frame_id_num: msg.frame_id_num,
        lat: msg.lat,
        lon: msg.lon,
        h: msg.h,
        vn: msg.vn,
        ve: msg.ve,
        vh: msg.vh,
        roll: msg.roll,
        pitch: msg.pitch,
        heading_angle: msg.heading_angle,
        gyro_x: msg.gyro_x,
        gyro_y: msg.gyro_y,
        gyro_z: msg.gyro_z,
        acc_x: msg.acc_x,
        acc_y: msg.acc_y,
        acc_z: msg.acc_z,
        std_lat: msg.std_lat,
        std_lon: msg.std_lon,
        std_local_height: msg.std_local_height,
        north_velocity_std: msg.north_velocity_std,
        east_velocity_std: msg.east_velocity_std,
        ground_velocity_std: msg.ground_velocity_std,
        roll_std: msg.roll_std,
        pitch_std: msg.pitch_std,
        std_heading: msg.std_heading,
        status: msg.status,
        gps_flag_pos: msg.gps_flag_pos,
        gps_week_number: msg.gps_week_number,
        ull_timestamp: msg.ull_timestamp,
        temperature: msg.temperature,
        car_status: msg.car_status,
        gps_flag_heading: msg.gps_flag_heading,
        num_sv: msg.num_sv,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      frame_id_num: msg.frame_id_num,
      lat: msg.lat,
      lon: msg.lon,
      h: msg.h,
      vn: msg.vn,
      ve: msg.ve,
      vh: msg.vh,
      roll: msg.roll,
      pitch: msg.pitch,
      heading_angle: msg.heading_angle,
      gyro_x: msg.gyro_x,
      gyro_y: msg.gyro_y,
      gyro_z: msg.gyro_z,
      acc_x: msg.acc_x,
      acc_y: msg.acc_y,
      acc_z: msg.acc_z,
      std_lat: msg.std_lat,
      std_lon: msg.std_lon,
      std_local_height: msg.std_local_height,
      north_velocity_std: msg.north_velocity_std,
      east_velocity_std: msg.east_velocity_std,
      ground_velocity_std: msg.ground_velocity_std,
      roll_std: msg.roll_std,
      pitch_std: msg.pitch_std,
      std_heading: msg.std_heading,
      status: msg.status,
      gps_flag_pos: msg.gps_flag_pos,
      gps_week_number: msg.gps_week_number,
      ull_timestamp: msg.ull_timestamp,
      temperature: msg.temperature,
      car_status: msg.car_status,
      gps_flag_heading: msg.gps_flag_heading,
      num_sv: msg.num_sv,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      frame_id_num: msg.frame_id_num,
      lat: msg.lat,
      lon: msg.lon,
      h: msg.h,
      vn: msg.vn,
      ve: msg.ve,
      vh: msg.vh,
      roll: msg.roll,
      pitch: msg.pitch,
      heading_angle: msg.heading_angle,
      gyro_x: msg.gyro_x,
      gyro_y: msg.gyro_y,
      gyro_z: msg.gyro_z,
      acc_x: msg.acc_x,
      acc_y: msg.acc_y,
      acc_z: msg.acc_z,
      std_lat: msg.std_lat,
      std_lon: msg.std_lon,
      std_local_height: msg.std_local_height,
      north_velocity_std: msg.north_velocity_std,
      east_velocity_std: msg.east_velocity_std,
      ground_velocity_std: msg.ground_velocity_std,
      roll_std: msg.roll_std,
      pitch_std: msg.pitch_std,
      std_heading: msg.std_heading,
      status: msg.status,
      gps_flag_pos: msg.gps_flag_pos,
      gps_week_number: msg.gps_week_number,
      ull_timestamp: msg.ull_timestamp,
      temperature: msg.temperature,
      car_status: msg.car_status,
      gps_flag_heading: msg.gps_flag_heading,
      num_sv: msg.num_sv,
    }
  }
}


// Corresponds to fsd_common_msgs__msg__CanFrames

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CanFrames {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frames: Vec<can_msgs::msg::Frame>,

}



impl Default for CanFrames {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CanFrames::default())
  }
}

impl rosidl_runtime_rs::Message for CanFrames {
  type RmwMsg = super::msg::rmw::CanFrames;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        frames: msg.frames
          .into_iter()
          .map(|elem| can_msgs::msg::Frame::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        frames: msg.frames
          .iter()
          .map(|elem| can_msgs::msg::Frame::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      frames: msg.frames
          .into_iter()
          .map(can_msgs::msg::Frame::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to fsd_common_msgs__msg__CarState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CarState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Position in x, y, theta
    pub car_state: geometry_msgs::msg::Pose2D,

    /// Velocities
    pub car_state_dt: super::msg::CarStateDt,

}



impl Default for CarState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CarState::default())
  }
}

impl rosidl_runtime_rs::Message for CarState {
  type RmwMsg = super::msg::rmw::CarState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        car_state: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Owned(msg.car_state)).into_owned(),
        car_state_dt: super::msg::CarStateDt::into_rmw_message(std::borrow::Cow::Owned(msg.car_state_dt)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        car_state: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.car_state)).into_owned(),
        car_state_dt: super::msg::CarStateDt::into_rmw_message(std::borrow::Cow::Borrowed(&msg.car_state_dt)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      car_state: geometry_msgs::msg::Pose2D::from_rmw_message(msg.car_state),
      car_state_dt: super::msg::CarStateDt::from_rmw_message(msg.car_state_dt),
    }
  }
}


// Corresponds to fsd_common_msgs__msg__CarStateDt

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CarStateDt {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Velocity in x, y, theta
    pub car_state_dt: geometry_msgs::msg::Pose2D,

}



impl Default for CarStateDt {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CarStateDt::default())
  }
}

impl rosidl_runtime_rs::Message for CarStateDt {
  type RmwMsg = super::msg::rmw::CarStateDt;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        car_state_dt: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Owned(msg.car_state_dt)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        car_state_dt: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.car_state_dt)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      car_state_dt: geometry_msgs::msg::Pose2D::from_rmw_message(msg.car_state_dt),
    }
  }
}


// Corresponds to fsd_common_msgs__msg__Cone

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Cone {

    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub color: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_confidence: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub color_confidence: f64,

}



impl Default for Cone {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Cone::default())
  }
}

impl rosidl_runtime_rs::Message for Cone {
  type RmwMsg = super::msg::rmw::Cone;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        color: msg.color.as_str().into(),
        pose_confidence: msg.pose_confidence,
        color_confidence: msg.color_confidence,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
        color: msg.color.as_str().into(),
      pose_confidence: msg.pose_confidence,
      color_confidence: msg.color_confidence,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
      color: msg.color.to_string(),
      pose_confidence: msg.pose_confidence,
      color_confidence: msg.color_confidence,
    }
  }
}


// Corresponds to fsd_common_msgs__msg__ConeDbscan

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConeDbscan {
    /// coordinate of cone in [x, y]
    pub position: geometry_msgs::msg::Point,

    /// color of cone, 'b' = blue, 'y' = yellow, 'o' = orange
    pub color: std_msgs::msg::String,

    /// confidence of cone detect
    pub pose_confidence: std_msgs::msg::Float32,

    /// confidence of cone detect
    pub color_confidence: std_msgs::msg::Float32,


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
    pub corepts: Vec<u8>,

}



impl Default for ConeDbscan {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ConeDbscan::default())
  }
}

impl rosidl_runtime_rs::Message for ConeDbscan {
  type RmwMsg = super::msg::rmw::ConeDbscan;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        color: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Owned(msg.color)).into_owned(),
        pose_confidence: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Owned(msg.pose_confidence)).into_owned(),
        color_confidence: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Owned(msg.color_confidence)).into_owned(),
        cluster: msg.cluster,
        point_type: msg.point_type,
        pts: msg.pts,
        visited: msg.visited,
        corepts: msg.corepts.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
        color: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Borrowed(&msg.color)).into_owned(),
        pose_confidence: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose_confidence)).into_owned(),
        color_confidence: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Borrowed(&msg.color_confidence)).into_owned(),
      cluster: msg.cluster,
      point_type: msg.point_type,
      pts: msg.pts,
      visited: msg.visited,
        corepts: msg.corepts.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
      color: std_msgs::msg::String::from_rmw_message(msg.color),
      pose_confidence: std_msgs::msg::Float32::from_rmw_message(msg.pose_confidence),
      color_confidence: std_msgs::msg::Float32::from_rmw_message(msg.color_confidence),
      cluster: msg.cluster,
      point_type: msg.point_type,
      pts: msg.pts,
      visited: msg.visited,
      corepts: msg.corepts
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to fsd_common_msgs__msg__ConeDetections

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConeDetections {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_detections: Vec<super::msg::Cone>,

}



impl Default for ConeDetections {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ConeDetections::default())
  }
}

impl rosidl_runtime_rs::Message for ConeDetections {
  type RmwMsg = super::msg::rmw::ConeDetections;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cone_detections: msg.cone_detections
          .into_iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        cone_detections: msg.cone_detections
          .iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cone_detections: msg.cone_detections
          .into_iter()
          .map(super::msg::Cone::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to fsd_common_msgs__msg__ConeDetectionsDbscan

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConeDetectionsDbscan {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_detections: Vec<super::msg::ConeDbscan>,

}



impl Default for ConeDetectionsDbscan {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ConeDetectionsDbscan::default())
  }
}

impl rosidl_runtime_rs::Message for ConeDetectionsDbscan {
  type RmwMsg = super::msg::rmw::ConeDetectionsDbscan;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cone_detections: msg.cone_detections
          .into_iter()
          .map(|elem| super::msg::ConeDbscan::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        cone_detections: msg.cone_detections
          .iter()
          .map(|elem| super::msg::ConeDbscan::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cone_detections: msg.cone_detections
          .into_iter()
          .map(super::msg::ConeDbscan::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to fsd_common_msgs__msg__ControlCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Throttle value between [-1, 1]
    pub throttle: std_msgs::msg::Float32,

    /// Steering angle value between [-1, 1], where left < 0, right > 0
    pub steering_angle: std_msgs::msg::Float32,

}



impl Default for ControlCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ControlCommand::default())
  }
}

impl rosidl_runtime_rs::Message for ControlCommand {
  type RmwMsg = super::msg::rmw::ControlCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        throttle: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Owned(msg.throttle)).into_owned(),
        steering_angle: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Owned(msg.steering_angle)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        throttle: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Borrowed(&msg.throttle)).into_owned(),
        steering_angle: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Borrowed(&msg.steering_angle)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      throttle: std_msgs::msg::Float32::from_rmw_message(msg.throttle),
      steering_angle: std_msgs::msg::Float32::from_rmw_message(msg.steering_angle),
    }
  }
}


// Corresponds to fsd_common_msgs__msg__DecisionFlag

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DecisionFlag {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DecisionFlag::default())
  }
}

impl rosidl_runtime_rs::Message for DecisionFlag {
  type RmwMsg = super::msg::rmw::DecisionFlag;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        lap1_state: msg.lap1_state,
        lap2_state: msg.lap2_state,
        map_state: msg.map_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      lap1_state: msg.lap1_state,
      lap2_state: msg.lap2_state,
      map_state: msg.map_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      lap1_state: msg.lap1_state,
      lap2_state: msg.lap2_state,
      map_state: msg.map_state,
    }
  }
}


// Corresponds to fsd_common_msgs__msg__DrivingDynamics

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DrivingDynamics {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DrivingDynamics::default())
  }
}

impl rosidl_runtime_rs::Message for DrivingDynamics {
  type RmwMsg = super::msg::rmw::DrivingDynamics;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        speed_target: msg.speed_target,
        speed_actual: msg.speed_actual,
        steering_angle_target: msg.steering_angle_target,
        steering_angle_actual: msg.steering_angle_actual,
        brake_hydr_target: msg.brake_hydr_target,
        brake_hydr_actual: msg.brake_hydr_actual,
        motor_moment_target: msg.motor_moment_target,
        motor_moment_actual: msg.motor_moment_actual,
        acceleration_longitudinal: msg.acceleration_longitudinal,
        acceleration_lateral: msg.acceleration_lateral,
        yaw_rate: msg.yaw_rate,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      speed_target: msg.speed_target,
      speed_actual: msg.speed_actual,
      steering_angle_target: msg.steering_angle_target,
      steering_angle_actual: msg.steering_angle_actual,
      brake_hydr_target: msg.brake_hydr_target,
      brake_hydr_actual: msg.brake_hydr_actual,
      motor_moment_target: msg.motor_moment_target,
      motor_moment_actual: msg.motor_moment_actual,
      acceleration_longitudinal: msg.acceleration_longitudinal,
      acceleration_lateral: msg.acceleration_lateral,
      yaw_rate: msg.yaw_rate,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      speed_target: msg.speed_target,
      speed_actual: msg.speed_actual,
      steering_angle_target: msg.steering_angle_target,
      steering_angle_actual: msg.steering_angle_actual,
      brake_hydr_target: msg.brake_hydr_target,
      brake_hydr_actual: msg.brake_hydr_actual,
      motor_moment_target: msg.motor_moment_target,
      motor_moment_actual: msg.motor_moment_actual,
      acceleration_longitudinal: msg.acceleration_longitudinal,
      acceleration_lateral: msg.acceleration_lateral,
      yaw_rate: msg.yaw_rate,
    }
  }
}


// Corresponds to fsd_common_msgs__msg__EchievMessage
/// echiev_perception ,message of echiev perception result 

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EchievMessage {
    /// standard ROS message header
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EchievMessage::default())
  }
}

impl rosidl_runtime_rs::Message for EchievMessage {
  type RmwMsg = super::msg::rmw::EchievMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        frame_id_num: msg.frame_id_num,
        ull_timestamp: msg.ull_timestamp,
        lat: msg.lat,
        lon: msg.lon,
        h: msg.h,
        vn: msg.vn,
        ve: msg.ve,
        vh: msg.vh,
        roll: msg.roll,
        pitch: msg.pitch,
        yaw: msg.yaw,
        acc_x: msg.acc_x,
        acc_y: msg.acc_y,
        acc_z: msg.acc_z,
        gyro_x: msg.gyro_x,
        gyro_y: msg.gyro_y,
        gyro_z: msg.gyro_z,
        state: msg.state,
        gps_state: msg.gps_state,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      frame_id_num: msg.frame_id_num,
      ull_timestamp: msg.ull_timestamp,
      lat: msg.lat,
      lon: msg.lon,
      h: msg.h,
      vn: msg.vn,
      ve: msg.ve,
      vh: msg.vh,
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      acc_x: msg.acc_x,
      acc_y: msg.acc_y,
      acc_z: msg.acc_z,
      gyro_x: msg.gyro_x,
      gyro_y: msg.gyro_y,
      gyro_z: msg.gyro_z,
      state: msg.state,
      gps_state: msg.gps_state,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      frame_id_num: msg.frame_id_num,
      ull_timestamp: msg.ull_timestamp,
      lat: msg.lat,
      lon: msg.lon,
      h: msg.h,
      vn: msg.vn,
      ve: msg.ve,
      vh: msg.vh,
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      acc_x: msg.acc_x,
      acc_y: msg.acc_y,
      acc_z: msg.acc_z,
      gyro_x: msg.gyro_x,
      gyro_y: msg.gyro_y,
      gyro_z: msg.gyro_z,
      state: msg.state,
      gps_state: msg.gps_state,
    }
  }
}


// Corresponds to fsd_common_msgs__msg__Feedback
/// car feedback data. 

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Feedback {
    /// standard ROS message header
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for Feedback {
  type RmwMsg = super::msg::rmw::Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        frame_id_num: msg.frame_id_num,
        wheel_speed_fl: msg.wheel_speed_fl,
        wheel_speed_fr: msg.wheel_speed_fr,
        wheel_speed_rl: msg.wheel_speed_rl,
        wheel_speed_rr: msg.wheel_speed_rr,
        motor_command_speed_rl: msg.motor_command_speed_rl,
        motor_command_speed_rr: msg.motor_command_speed_rr,
        motor_return_speed_rl: msg.motor_return_speed_rl,
        motor_return_speed_rr: msg.motor_return_speed_rr,
        motor_command_torq_rl: msg.motor_command_torq_rl,
        motor_command_torq_rr: msg.motor_command_torq_rr,
        motor_return_torq_rl: msg.motor_return_torq_rl,
        motor_return_torq_rr: msg.motor_return_torq_rr,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      frame_id_num: msg.frame_id_num,
      wheel_speed_fl: msg.wheel_speed_fl,
      wheel_speed_fr: msg.wheel_speed_fr,
      wheel_speed_rl: msg.wheel_speed_rl,
      wheel_speed_rr: msg.wheel_speed_rr,
      motor_command_speed_rl: msg.motor_command_speed_rl,
      motor_command_speed_rr: msg.motor_command_speed_rr,
      motor_return_speed_rl: msg.motor_return_speed_rl,
      motor_return_speed_rr: msg.motor_return_speed_rr,
      motor_command_torq_rl: msg.motor_command_torq_rl,
      motor_command_torq_rr: msg.motor_command_torq_rr,
      motor_return_torq_rl: msg.motor_return_torq_rl,
      motor_return_torq_rr: msg.motor_return_torq_rr,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      frame_id_num: msg.frame_id_num,
      wheel_speed_fl: msg.wheel_speed_fl,
      wheel_speed_fr: msg.wheel_speed_fr,
      wheel_speed_rl: msg.wheel_speed_rl,
      wheel_speed_rr: msg.wheel_speed_rr,
      motor_command_speed_rl: msg.motor_command_speed_rl,
      motor_command_speed_rr: msg.motor_command_speed_rr,
      motor_return_speed_rl: msg.motor_return_speed_rl,
      motor_return_speed_rr: msg.motor_return_speed_rr,
      motor_command_torq_rl: msg.motor_command_torq_rl,
      motor_command_torq_rr: msg.motor_command_torq_rr,
      motor_return_torq_rl: msg.motor_return_torq_rl,
      motor_return_torq_rr: msg.motor_return_torq_rr,
    }
  }
}


// Corresponds to fsd_common_msgs__msg__InsDelta

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InsDelta {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::InsDelta::default())
  }
}

impl rosidl_runtime_rs::Message for InsDelta {
  type RmwMsg = super::msg::rmw::InsDelta;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        total_omega: msg.total_omega,
        total_distance_x: msg.total_distance_x,
        total_distance_y: msg.total_distance_y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      total_omega: msg.total_omega,
      total_distance_x: msg.total_distance_x,
      total_distance_y: msg.total_distance_y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      total_omega: msg.total_omega,
      total_distance_x: msg.total_distance_x,
      total_distance_y: msg.total_distance_y,
    }
  }
}


// Corresponds to fsd_common_msgs__msg__Map

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Map {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_yellow: Vec<super::msg::Cone>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_blue: Vec<super::msg::Cone>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_red: Vec<super::msg::Cone>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_unknown: Vec<super::msg::Cone>,

}



impl Default for Map {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Map::default())
  }
}

impl rosidl_runtime_rs::Message for Map {
  type RmwMsg = super::msg::rmw::Map;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cone_yellow: msg.cone_yellow
          .into_iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        cone_blue: msg.cone_blue
          .into_iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        cone_red: msg.cone_red
          .into_iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        cone_unknown: msg.cone_unknown
          .into_iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        cone_yellow: msg.cone_yellow
          .iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        cone_blue: msg.cone_blue
          .iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        cone_red: msg.cone_red
          .iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        cone_unknown: msg.cone_unknown
          .iter()
          .map(|elem| super::msg::Cone::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cone_yellow: msg.cone_yellow
          .into_iter()
          .map(super::msg::Cone::from_rmw_message)
          .collect(),
      cone_blue: msg.cone_blue
          .into_iter()
          .map(super::msg::Cone::from_rmw_message)
          .collect(),
      cone_red: msg.cone_red
          .into_iter()
          .map(super::msg::Cone::from_rmw_message)
          .collect(),
      cone_unknown: msg.cone_unknown
          .into_iter()
          .map(super::msg::Cone::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to fsd_common_msgs__msg__Mission
/// Header

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Mission {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub finished: bool,

}



impl Default for Mission {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Mission::default())
  }
}

impl rosidl_runtime_rs::Message for Mission {
  type RmwMsg = super::msg::rmw::Mission;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        mission: msg.mission.as_str().into(),
        finished: msg.finished,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        mission: msg.mission.as_str().into(),
      finished: msg.finished,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      mission: msg.mission.to_string(),
      finished: msg.finished,
    }
  }
}


// Corresponds to fsd_common_msgs__msg__RemoteControlCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RemoteControlCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RemoteControlCommand::default())
  }
}

impl rosidl_runtime_rs::Message for RemoteControlCommand {
  type RmwMsg = super::msg::rmw::RemoteControlCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        throttle: msg.throttle,
        steering_angle: msg.steering_angle,
        go: msg.go,
        stop: msg.stop,
        test1: msg.test1,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      throttle: msg.throttle,
      steering_angle: msg.steering_angle,
      go: msg.go,
      stop: msg.stop,
      test1: msg.test1,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      throttle: msg.throttle,
      steering_angle: msg.steering_angle,
      go: msg.go,
      stop: msg.stop,
      test1: msg.test1,
    }
  }
}


// Corresponds to fsd_common_msgs__msg__ResAndAmi
/// Header

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ResAndAmi {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 指示res状态，1代表“go”信号
    pub res_state: u8,

    /// 指示AMI选择的无人驾驶任务。0.inspection;1.ebs_test;2.acceleration;3.skidpad;4.trackdrive
    pub mission: std::string::String,

}



impl Default for ResAndAmi {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ResAndAmi::default())
  }
}

impl rosidl_runtime_rs::Message for ResAndAmi {
  type RmwMsg = super::msg::rmw::ResAndAmi;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        res_state: msg.res_state,
        mission: msg.mission.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      res_state: msg.res_state,
        mission: msg.mission.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      res_state: msg.res_state,
      mission: msg.mission.to_string(),
    }
  }
}


// Corresponds to fsd_common_msgs__msg__SkidpadGlobalCenterLine

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SkidpadGlobalCenterLine {

    // This member is not documented.
    #[allow(missing_docs)]
    pub global_path: nav_msgs::msg::Path,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_reach_mid: bool,

}



impl Default for SkidpadGlobalCenterLine {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SkidpadGlobalCenterLine::default())
  }
}

impl rosidl_runtime_rs::Message for SkidpadGlobalCenterLine {
  type RmwMsg = super::msg::rmw::SkidpadGlobalCenterLine;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        global_path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Owned(msg.global_path)).into_owned(),
        is_reach_mid: msg.is_reach_mid,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        global_path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Borrowed(&msg.global_path)).into_owned(),
      is_reach_mid: msg.is_reach_mid,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      global_path: nav_msgs::msg::Path::from_rmw_message(msg.global_path),
      is_reach_mid: msg.is_reach_mid,
    }
  }
}


// Corresponds to fsd_common_msgs__msg__Time
/// message of Asensing perception result.It is INS data. 

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Time {
    /// standard ROS message header
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Time::default())
  }
}

impl rosidl_runtime_rs::Message for Time {
  type RmwMsg = super::msg::rmw::Time;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        frame_id_num: msg.frame_id_num,
        sum_compute_time: msg.sum_compute_time,
        control_compute_time: msg.control_compute_time,
        boundary_detector_compute_time: msg.boundary_detector_compute_time,
        line_detector_compute_time: msg.line_detector_compute_time,
        skidpad_detector_compute_time: msg.skidpad_detector_compute_time,
        lidar_detection_compute_time: msg.lidar_detection_compute_time,
        camera_detection_compute_time: msg.camera_detection_compute_time,
        fusion_detection_compute_time: msg.fusion_detection_compute_time,
        time2: msg.time2,
        time3: msg.time3,
        time4: msg.time4,
        time5: msg.time5,
        time6: msg.time6,
        time7: msg.time7,
        time8: msg.time8,
        time9: msg.time9,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      frame_id_num: msg.frame_id_num,
      sum_compute_time: msg.sum_compute_time,
      control_compute_time: msg.control_compute_time,
      boundary_detector_compute_time: msg.boundary_detector_compute_time,
      line_detector_compute_time: msg.line_detector_compute_time,
      skidpad_detector_compute_time: msg.skidpad_detector_compute_time,
      lidar_detection_compute_time: msg.lidar_detection_compute_time,
      camera_detection_compute_time: msg.camera_detection_compute_time,
      fusion_detection_compute_time: msg.fusion_detection_compute_time,
      time2: msg.time2,
      time3: msg.time3,
      time4: msg.time4,
      time5: msg.time5,
      time6: msg.time6,
      time7: msg.time7,
      time8: msg.time8,
      time9: msg.time9,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      frame_id_num: msg.frame_id_num,
      sum_compute_time: msg.sum_compute_time,
      control_compute_time: msg.control_compute_time,
      boundary_detector_compute_time: msg.boundary_detector_compute_time,
      line_detector_compute_time: msg.line_detector_compute_time,
      skidpad_detector_compute_time: msg.skidpad_detector_compute_time,
      lidar_detection_compute_time: msg.lidar_detection_compute_time,
      camera_detection_compute_time: msg.camera_detection_compute_time,
      fusion_detection_compute_time: msg.fusion_detection_compute_time,
      time2: msg.time2,
      time3: msg.time3,
      time4: msg.time4,
      time5: msg.time5,
      time6: msg.time6,
      time7: msg.time7,
      time8: msg.time8,
      time9: msg.time9,
    }
  }
}


// Corresponds to fsd_common_msgs__msg__Track

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Track {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cones_left: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cones_right: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cones_orange: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cones_orange_big: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tk_device_start: Vec<geometry_msgs::msg::Point>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tk_device_end: Vec<geometry_msgs::msg::Point>,

}



impl Default for Track {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Track::default())
  }
}

impl rosidl_runtime_rs::Message for Track {
  type RmwMsg = super::msg::rmw::Track;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cones_left: msg.cones_left
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        cones_right: msg.cones_right
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        cones_orange: msg.cones_orange
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        cones_orange_big: msg.cones_orange_big
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        tk_device_start: msg.tk_device_start
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        tk_device_end: msg.tk_device_end
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        cones_left: msg.cones_left
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        cones_right: msg.cones_right
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        cones_orange: msg.cones_orange
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        cones_orange_big: msg.cones_orange_big
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        tk_device_start: msg.tk_device_start
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        tk_device_end: msg.tk_device_end
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cones_left: msg.cones_left
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      cones_right: msg.cones_right
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      cones_orange: msg.cones_orange
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      cones_orange_big: msg.cones_orange_big
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      tk_device_start: msg.tk_device_start
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      tk_device_end: msg.tk_device_end
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to fsd_common_msgs__msg__TrajectoryPoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrajectoryPoint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Velocities
    pub trajectory_point: Vec<super::msg::CarState>,

}



impl Default for TrajectoryPoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TrajectoryPoint::default())
  }
}

impl rosidl_runtime_rs::Message for TrajectoryPoint {
  type RmwMsg = super::msg::rmw::TrajectoryPoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        trajectory_point: msg.trajectory_point
          .into_iter()
          .map(|elem| super::msg::CarState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        trajectory_point: msg.trajectory_point
          .iter()
          .map(|elem| super::msg::CarState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      trajectory_point: msg.trajectory_point
          .into_iter()
          .map(super::msg::CarState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to fsd_common_msgs__msg__Visualization
/// visualization data 

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Visualization {
    /// standard ROS message header
    pub header: std_msgs::msg::Header,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Visualization::default())
  }
}

impl rosidl_runtime_rs::Message for Visualization {
  type RmwMsg = super::msg::rmw::Visualization;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        frame_id_num: msg.frame_id_num,
        lat_error_front_axis: msg.lat_error_front_axis,
        lat_error_cog: msg.lat_error_cog,
        lat_error_rear_axis: msg.lat_error_rear_axis,
        yaw_error_front_axis: msg.yaw_error_front_axis,
        yaw_error_cog: msg.yaw_error_cog,
        yaw_error_rear_axis: msg.yaw_error_rear_axis,
        yaw_rate_error: msg.yaw_rate_error,
        steering_error: msg.steering_error,
        vx_error: msg.vx_error,
        vy_error: msg.vy_error,
        sideslip_error: msg.sideslip_error,
        motor_torq_error_lr: msg.motor_torq_error_lr,
        motor_torq_error_rr: msg.motor_torq_error_rr,
        motor_speed_error_lr: msg.motor_speed_error_lr,
        motor_speed_error_rr: msg.motor_speed_error_rr,
        error1: msg.error1,
        error2: msg.error2,
        error3: msg.error3,
        error4: msg.error4,
        yaw_ref: msg.yaw_ref,
        yaw_ref_front_axis: msg.yaw_ref_front_axis,
        yaw_ref_cog: msg.yaw_ref_cog,
        yaw_ref_rear_axis: msg.yaw_ref_rear_axis,
        curvature_ref: msg.curvature_ref,
        curvature_ref_front_axis: msg.curvature_ref_front_axis,
        curvature_ref_cog: msg.curvature_ref_cog,
        curvature_ref_rear_axis: msg.curvature_ref_rear_axis,
        vx_ref: msg.vx_ref,
        vy_ref: msg.vy_ref,
        ax_ref: msg.ax_ref,
        ay_ref: msg.ay_ref,
        ref1: msg.ref1,
        ref2: msg.ref2,
        ref3: msg.ref3,
        ref4: msg.ref4,
        steering_without_compensation: msg.steering_without_compensation,
        steering_feedback: msg.steering_feedback,
        steering_feedforward: msg.steering_feedforward,
        lookforward_length: msg.lookforward_length,
        yaw_rate_pre: msg.yaw_rate_pre,
        turning_radius: msg.turning_radius,
        adhesion_coefficient_pre: msg.adhesion_coefficient_pre,
        sideslip_pre: msg.sideslip_pre,
        slip_angle_pre_fl: msg.slip_angle_pre_fl,
        slip_angle_pre_fr: msg.slip_angle_pre_fr,
        slip_angle_pre_rl: msg.slip_angle_pre_rl,
        slip_angle_pre_rr: msg.slip_angle_pre_rr,
        norm_force_pre_fl: msg.norm_force_pre_fl,
        norm_force_pre_fr: msg.norm_force_pre_fr,
        norm_force_pre_rl: msg.norm_force_pre_rl,
        norm_force_pre_rr: msg.norm_force_pre_rr,
        algorithm1: msg.algorithm1,
        algorithm2: msg.algorithm2,
        algorithm3: msg.algorithm3,
        algorithm4: msg.algorithm4,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      frame_id_num: msg.frame_id_num,
      lat_error_front_axis: msg.lat_error_front_axis,
      lat_error_cog: msg.lat_error_cog,
      lat_error_rear_axis: msg.lat_error_rear_axis,
      yaw_error_front_axis: msg.yaw_error_front_axis,
      yaw_error_cog: msg.yaw_error_cog,
      yaw_error_rear_axis: msg.yaw_error_rear_axis,
      yaw_rate_error: msg.yaw_rate_error,
      steering_error: msg.steering_error,
      vx_error: msg.vx_error,
      vy_error: msg.vy_error,
      sideslip_error: msg.sideslip_error,
      motor_torq_error_lr: msg.motor_torq_error_lr,
      motor_torq_error_rr: msg.motor_torq_error_rr,
      motor_speed_error_lr: msg.motor_speed_error_lr,
      motor_speed_error_rr: msg.motor_speed_error_rr,
      error1: msg.error1,
      error2: msg.error2,
      error3: msg.error3,
      error4: msg.error4,
      yaw_ref: msg.yaw_ref,
      yaw_ref_front_axis: msg.yaw_ref_front_axis,
      yaw_ref_cog: msg.yaw_ref_cog,
      yaw_ref_rear_axis: msg.yaw_ref_rear_axis,
      curvature_ref: msg.curvature_ref,
      curvature_ref_front_axis: msg.curvature_ref_front_axis,
      curvature_ref_cog: msg.curvature_ref_cog,
      curvature_ref_rear_axis: msg.curvature_ref_rear_axis,
      vx_ref: msg.vx_ref,
      vy_ref: msg.vy_ref,
      ax_ref: msg.ax_ref,
      ay_ref: msg.ay_ref,
      ref1: msg.ref1,
      ref2: msg.ref2,
      ref3: msg.ref3,
      ref4: msg.ref4,
      steering_without_compensation: msg.steering_without_compensation,
      steering_feedback: msg.steering_feedback,
      steering_feedforward: msg.steering_feedforward,
      lookforward_length: msg.lookforward_length,
      yaw_rate_pre: msg.yaw_rate_pre,
      turning_radius: msg.turning_radius,
      adhesion_coefficient_pre: msg.adhesion_coefficient_pre,
      sideslip_pre: msg.sideslip_pre,
      slip_angle_pre_fl: msg.slip_angle_pre_fl,
      slip_angle_pre_fr: msg.slip_angle_pre_fr,
      slip_angle_pre_rl: msg.slip_angle_pre_rl,
      slip_angle_pre_rr: msg.slip_angle_pre_rr,
      norm_force_pre_fl: msg.norm_force_pre_fl,
      norm_force_pre_fr: msg.norm_force_pre_fr,
      norm_force_pre_rl: msg.norm_force_pre_rl,
      norm_force_pre_rr: msg.norm_force_pre_rr,
      algorithm1: msg.algorithm1,
      algorithm2: msg.algorithm2,
      algorithm3: msg.algorithm3,
      algorithm4: msg.algorithm4,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      frame_id_num: msg.frame_id_num,
      lat_error_front_axis: msg.lat_error_front_axis,
      lat_error_cog: msg.lat_error_cog,
      lat_error_rear_axis: msg.lat_error_rear_axis,
      yaw_error_front_axis: msg.yaw_error_front_axis,
      yaw_error_cog: msg.yaw_error_cog,
      yaw_error_rear_axis: msg.yaw_error_rear_axis,
      yaw_rate_error: msg.yaw_rate_error,
      steering_error: msg.steering_error,
      vx_error: msg.vx_error,
      vy_error: msg.vy_error,
      sideslip_error: msg.sideslip_error,
      motor_torq_error_lr: msg.motor_torq_error_lr,
      motor_torq_error_rr: msg.motor_torq_error_rr,
      motor_speed_error_lr: msg.motor_speed_error_lr,
      motor_speed_error_rr: msg.motor_speed_error_rr,
      error1: msg.error1,
      error2: msg.error2,
      error3: msg.error3,
      error4: msg.error4,
      yaw_ref: msg.yaw_ref,
      yaw_ref_front_axis: msg.yaw_ref_front_axis,
      yaw_ref_cog: msg.yaw_ref_cog,
      yaw_ref_rear_axis: msg.yaw_ref_rear_axis,
      curvature_ref: msg.curvature_ref,
      curvature_ref_front_axis: msg.curvature_ref_front_axis,
      curvature_ref_cog: msg.curvature_ref_cog,
      curvature_ref_rear_axis: msg.curvature_ref_rear_axis,
      vx_ref: msg.vx_ref,
      vy_ref: msg.vy_ref,
      ax_ref: msg.ax_ref,
      ay_ref: msg.ay_ref,
      ref1: msg.ref1,
      ref2: msg.ref2,
      ref3: msg.ref3,
      ref4: msg.ref4,
      steering_without_compensation: msg.steering_without_compensation,
      steering_feedback: msg.steering_feedback,
      steering_feedforward: msg.steering_feedforward,
      lookforward_length: msg.lookforward_length,
      yaw_rate_pre: msg.yaw_rate_pre,
      turning_radius: msg.turning_radius,
      adhesion_coefficient_pre: msg.adhesion_coefficient_pre,
      sideslip_pre: msg.sideslip_pre,
      slip_angle_pre_fl: msg.slip_angle_pre_fl,
      slip_angle_pre_fr: msg.slip_angle_pre_fr,
      slip_angle_pre_rl: msg.slip_angle_pre_rl,
      slip_angle_pre_rr: msg.slip_angle_pre_rr,
      norm_force_pre_fl: msg.norm_force_pre_fl,
      norm_force_pre_fr: msg.norm_force_pre_fr,
      norm_force_pre_rl: msg.norm_force_pre_rl,
      norm_force_pre_rr: msg.norm_force_pre_rr,
      algorithm1: msg.algorithm1,
      algorithm2: msg.algorithm2,
      algorithm3: msg.algorithm3,
      algorithm4: msg.algorithm4,
    }
  }
}


// Corresponds to fsd_common_msgs__msg__YoloCone

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YoloCone {
    /// center x
    pub x: std_msgs::msg::Float32,

    /// center y
    pub y: std_msgs::msg::Float32,

    /// width
    pub width: std_msgs::msg::Float32,

    /// height
    pub height: std_msgs::msg::Float32,

    /// color of cone, 'r' = red, 'b' = blue, 'y' = yellow
    pub color: std_msgs::msg::String,

    /// confidence of cone detect
    pub color_confidence: std_msgs::msg::Float32,

}



impl Default for YoloCone {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::YoloCone::default())
  }
}

impl rosidl_runtime_rs::Message for YoloCone {
  type RmwMsg = super::msg::rmw::YoloCone;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Owned(msg.x)).into_owned(),
        y: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Owned(msg.y)).into_owned(),
        width: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Owned(msg.width)).into_owned(),
        height: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Owned(msg.height)).into_owned(),
        color: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Owned(msg.color)).into_owned(),
        color_confidence: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Owned(msg.color_confidence)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Borrowed(&msg.x)).into_owned(),
        y: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Borrowed(&msg.y)).into_owned(),
        width: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Borrowed(&msg.width)).into_owned(),
        height: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Borrowed(&msg.height)).into_owned(),
        color: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Borrowed(&msg.color)).into_owned(),
        color_confidence: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Borrowed(&msg.color_confidence)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: std_msgs::msg::Float32::from_rmw_message(msg.x),
      y: std_msgs::msg::Float32::from_rmw_message(msg.y),
      width: std_msgs::msg::Float32::from_rmw_message(msg.width),
      height: std_msgs::msg::Float32::from_rmw_message(msg.height),
      color: std_msgs::msg::String::from_rmw_message(msg.color),
      color_confidence: std_msgs::msg::Float32::from_rmw_message(msg.color_confidence),
    }
  }
}


// Corresponds to fsd_common_msgs__msg__YoloConeDetections

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YoloConeDetections {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image_header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_detections: Vec<super::msg::YoloCone>,

}



impl Default for YoloConeDetections {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::YoloConeDetections::default())
  }
}

impl rosidl_runtime_rs::Message for YoloConeDetections {
  type RmwMsg = super::msg::rmw::YoloConeDetections;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        image_header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.image_header)).into_owned(),
        cone_detections: msg.cone_detections
          .into_iter()
          .map(|elem| super::msg::YoloCone::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        image_header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.image_header)).into_owned(),
        cone_detections: msg.cone_detections
          .iter()
          .map(|elem| super::msg::YoloCone::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      image_header: std_msgs::msg::Header::from_rmw_message(msg.image_header),
      cone_detections: msg.cone_detections
          .into_iter()
          .map(super::msg::YoloCone::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to fsd_common_msgs__msg__YoloConeDetectionsTrack

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YoloConeDetectionsTrack {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cone_detections: Vec<super::msg::YoloConeTrack>,

}



impl Default for YoloConeDetectionsTrack {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::YoloConeDetectionsTrack::default())
  }
}

impl rosidl_runtime_rs::Message for YoloConeDetectionsTrack {
  type RmwMsg = super::msg::rmw::YoloConeDetectionsTrack;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cone_detections: msg.cone_detections
          .into_iter()
          .map(|elem| super::msg::YoloConeTrack::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        cone_detections: msg.cone_detections
          .iter()
          .map(|elem| super::msg::YoloConeTrack::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cone_detections: msg.cone_detections
          .into_iter()
          .map(super::msg::YoloConeTrack::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to fsd_common_msgs__msg__YoloConeTrack

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct YoloConeTrack {
    /// center x
    pub x: std_msgs::msg::Float32,

    /// center y
    pub y: std_msgs::msg::Float32,

    /// width
    pub width: std_msgs::msg::Float32,

    /// height
    pub height: std_msgs::msg::Float32,

    /// color of cone, 'r' = red, 'b' = blue, 'y' = yellow
    pub color: std_msgs::msg::String,

    /// confidence of cone detect
    pub color_confidence: std_msgs::msg::Float32,

    /// 3d position with (x,y,z)
    pub position: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_confidence: std_msgs::msg::Float32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tracking_id: std_msgs::msg::UInt8,

    /// OFF, OK, SEARCHING, TERMINATE
    pub tracking_state: std_msgs::msg::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub missing_frams: std_msgs::msg::UInt8,

}



impl Default for YoloConeTrack {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::YoloConeTrack::default())
  }
}

impl rosidl_runtime_rs::Message for YoloConeTrack {
  type RmwMsg = super::msg::rmw::YoloConeTrack;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Owned(msg.x)).into_owned(),
        y: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Owned(msg.y)).into_owned(),
        width: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Owned(msg.width)).into_owned(),
        height: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Owned(msg.height)).into_owned(),
        color: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Owned(msg.color)).into_owned(),
        color_confidence: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Owned(msg.color_confidence)).into_owned(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        pose_confidence: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Owned(msg.pose_confidence)).into_owned(),
        tracking_id: std_msgs::msg::UInt8::into_rmw_message(std::borrow::Cow::Owned(msg.tracking_id)).into_owned(),
        tracking_state: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Owned(msg.tracking_state)).into_owned(),
        missing_frams: std_msgs::msg::UInt8::into_rmw_message(std::borrow::Cow::Owned(msg.missing_frams)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Borrowed(&msg.x)).into_owned(),
        y: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Borrowed(&msg.y)).into_owned(),
        width: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Borrowed(&msg.width)).into_owned(),
        height: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Borrowed(&msg.height)).into_owned(),
        color: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Borrowed(&msg.color)).into_owned(),
        color_confidence: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Borrowed(&msg.color_confidence)).into_owned(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
        pose_confidence: std_msgs::msg::Float32::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose_confidence)).into_owned(),
        tracking_id: std_msgs::msg::UInt8::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tracking_id)).into_owned(),
        tracking_state: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tracking_state)).into_owned(),
        missing_frams: std_msgs::msg::UInt8::into_rmw_message(std::borrow::Cow::Borrowed(&msg.missing_frams)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: std_msgs::msg::Float32::from_rmw_message(msg.x),
      y: std_msgs::msg::Float32::from_rmw_message(msg.y),
      width: std_msgs::msg::Float32::from_rmw_message(msg.width),
      height: std_msgs::msg::Float32::from_rmw_message(msg.height),
      color: std_msgs::msg::String::from_rmw_message(msg.color),
      color_confidence: std_msgs::msg::Float32::from_rmw_message(msg.color_confidence),
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
      pose_confidence: std_msgs::msg::Float32::from_rmw_message(msg.pose_confidence),
      tracking_id: std_msgs::msg::UInt8::from_rmw_message(msg.tracking_id),
      tracking_state: std_msgs::msg::String::from_rmw_message(msg.tracking_state),
      missing_frams: std_msgs::msg::UInt8::from_rmw_message(msg.missing_frams),
    }
  }
}


