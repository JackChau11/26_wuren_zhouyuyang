# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fsd_common_msgs:msg/Visualization.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Visualization(type):
    """Metaclass of message 'Visualization'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('fsd_common_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fsd_common_msgs.msg.Visualization')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__visualization
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__visualization
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__visualization
            cls._TYPE_SUPPORT = module.type_support_msg__msg__visualization
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__visualization

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Visualization(metaclass=Metaclass_Visualization):
    """Message class 'Visualization'."""

    __slots__ = [
        '_header',
        '_frame_id_num',
        '_lat_error_front_axis',
        '_lat_error_cog',
        '_lat_error_rear_axis',
        '_yaw_error_front_axis',
        '_yaw_error_cog',
        '_yaw_error_rear_axis',
        '_yaw_rate_error',
        '_steering_error',
        '_vx_error',
        '_vy_error',
        '_sideslip_error',
        '_motor_torq_error_lr',
        '_motor_torq_error_rr',
        '_motor_speed_error_lr',
        '_motor_speed_error_rr',
        '_error1',
        '_error2',
        '_error3',
        '_error4',
        '_yaw_ref',
        '_yaw_ref_front_axis',
        '_yaw_ref_cog',
        '_yaw_ref_rear_axis',
        '_curvature_ref',
        '_curvature_ref_front_axis',
        '_curvature_ref_cog',
        '_curvature_ref_rear_axis',
        '_vx_ref',
        '_vy_ref',
        '_ax_ref',
        '_ay_ref',
        '_ref1',
        '_ref2',
        '_ref3',
        '_ref4',
        '_steering_without_compensation',
        '_steering_feedback',
        '_steering_feedforward',
        '_lookforward_length',
        '_yaw_rate_pre',
        '_turning_radius',
        '_adhesion_coefficient_pre',
        '_sideslip_pre',
        '_slip_angle_pre_fl',
        '_slip_angle_pre_fr',
        '_slip_angle_pre_rl',
        '_slip_angle_pre_rr',
        '_norm_force_pre_fl',
        '_norm_force_pre_fr',
        '_norm_force_pre_rl',
        '_norm_force_pre_rr',
        '_algorithm1',
        '_algorithm2',
        '_algorithm3',
        '_algorithm4',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'frame_id_num': 'uint64',
        'lat_error_front_axis': 'float',
        'lat_error_cog': 'float',
        'lat_error_rear_axis': 'float',
        'yaw_error_front_axis': 'float',
        'yaw_error_cog': 'float',
        'yaw_error_rear_axis': 'float',
        'yaw_rate_error': 'float',
        'steering_error': 'float',
        'vx_error': 'float',
        'vy_error': 'float',
        'sideslip_error': 'float',
        'motor_torq_error_lr': 'float',
        'motor_torq_error_rr': 'float',
        'motor_speed_error_lr': 'float',
        'motor_speed_error_rr': 'float',
        'error1': 'float',
        'error2': 'float',
        'error3': 'float',
        'error4': 'float',
        'yaw_ref': 'float',
        'yaw_ref_front_axis': 'float',
        'yaw_ref_cog': 'float',
        'yaw_ref_rear_axis': 'float',
        'curvature_ref': 'float',
        'curvature_ref_front_axis': 'float',
        'curvature_ref_cog': 'float',
        'curvature_ref_rear_axis': 'float',
        'vx_ref': 'float',
        'vy_ref': 'float',
        'ax_ref': 'float',
        'ay_ref': 'float',
        'ref1': 'float',
        'ref2': 'float',
        'ref3': 'float',
        'ref4': 'float',
        'steering_without_compensation': 'float',
        'steering_feedback': 'float',
        'steering_feedforward': 'float',
        'lookforward_length': 'float',
        'yaw_rate_pre': 'float',
        'turning_radius': 'float',
        'adhesion_coefficient_pre': 'float',
        'sideslip_pre': 'float',
        'slip_angle_pre_fl': 'float',
        'slip_angle_pre_fr': 'float',
        'slip_angle_pre_rl': 'float',
        'slip_angle_pre_rr': 'float',
        'norm_force_pre_fl': 'float',
        'norm_force_pre_fr': 'float',
        'norm_force_pre_rl': 'float',
        'norm_force_pre_rr': 'float',
        'algorithm1': 'float',
        'algorithm2': 'float',
        'algorithm3': 'float',
        'algorithm4': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.frame_id_num = kwargs.get('frame_id_num', int())
        self.lat_error_front_axis = kwargs.get('lat_error_front_axis', float())
        self.lat_error_cog = kwargs.get('lat_error_cog', float())
        self.lat_error_rear_axis = kwargs.get('lat_error_rear_axis', float())
        self.yaw_error_front_axis = kwargs.get('yaw_error_front_axis', float())
        self.yaw_error_cog = kwargs.get('yaw_error_cog', float())
        self.yaw_error_rear_axis = kwargs.get('yaw_error_rear_axis', float())
        self.yaw_rate_error = kwargs.get('yaw_rate_error', float())
        self.steering_error = kwargs.get('steering_error', float())
        self.vx_error = kwargs.get('vx_error', float())
        self.vy_error = kwargs.get('vy_error', float())
        self.sideslip_error = kwargs.get('sideslip_error', float())
        self.motor_torq_error_lr = kwargs.get('motor_torq_error_lr', float())
        self.motor_torq_error_rr = kwargs.get('motor_torq_error_rr', float())
        self.motor_speed_error_lr = kwargs.get('motor_speed_error_lr', float())
        self.motor_speed_error_rr = kwargs.get('motor_speed_error_rr', float())
        self.error1 = kwargs.get('error1', float())
        self.error2 = kwargs.get('error2', float())
        self.error3 = kwargs.get('error3', float())
        self.error4 = kwargs.get('error4', float())
        self.yaw_ref = kwargs.get('yaw_ref', float())
        self.yaw_ref_front_axis = kwargs.get('yaw_ref_front_axis', float())
        self.yaw_ref_cog = kwargs.get('yaw_ref_cog', float())
        self.yaw_ref_rear_axis = kwargs.get('yaw_ref_rear_axis', float())
        self.curvature_ref = kwargs.get('curvature_ref', float())
        self.curvature_ref_front_axis = kwargs.get('curvature_ref_front_axis', float())
        self.curvature_ref_cog = kwargs.get('curvature_ref_cog', float())
        self.curvature_ref_rear_axis = kwargs.get('curvature_ref_rear_axis', float())
        self.vx_ref = kwargs.get('vx_ref', float())
        self.vy_ref = kwargs.get('vy_ref', float())
        self.ax_ref = kwargs.get('ax_ref', float())
        self.ay_ref = kwargs.get('ay_ref', float())
        self.ref1 = kwargs.get('ref1', float())
        self.ref2 = kwargs.get('ref2', float())
        self.ref3 = kwargs.get('ref3', float())
        self.ref4 = kwargs.get('ref4', float())
        self.steering_without_compensation = kwargs.get('steering_without_compensation', float())
        self.steering_feedback = kwargs.get('steering_feedback', float())
        self.steering_feedforward = kwargs.get('steering_feedforward', float())
        self.lookforward_length = kwargs.get('lookforward_length', float())
        self.yaw_rate_pre = kwargs.get('yaw_rate_pre', float())
        self.turning_radius = kwargs.get('turning_radius', float())
        self.adhesion_coefficient_pre = kwargs.get('adhesion_coefficient_pre', float())
        self.sideslip_pre = kwargs.get('sideslip_pre', float())
        self.slip_angle_pre_fl = kwargs.get('slip_angle_pre_fl', float())
        self.slip_angle_pre_fr = kwargs.get('slip_angle_pre_fr', float())
        self.slip_angle_pre_rl = kwargs.get('slip_angle_pre_rl', float())
        self.slip_angle_pre_rr = kwargs.get('slip_angle_pre_rr', float())
        self.norm_force_pre_fl = kwargs.get('norm_force_pre_fl', float())
        self.norm_force_pre_fr = kwargs.get('norm_force_pre_fr', float())
        self.norm_force_pre_rl = kwargs.get('norm_force_pre_rl', float())
        self.norm_force_pre_rr = kwargs.get('norm_force_pre_rr', float())
        self.algorithm1 = kwargs.get('algorithm1', float())
        self.algorithm2 = kwargs.get('algorithm2', float())
        self.algorithm3 = kwargs.get('algorithm3', float())
        self.algorithm4 = kwargs.get('algorithm4', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.frame_id_num != other.frame_id_num:
            return False
        if self.lat_error_front_axis != other.lat_error_front_axis:
            return False
        if self.lat_error_cog != other.lat_error_cog:
            return False
        if self.lat_error_rear_axis != other.lat_error_rear_axis:
            return False
        if self.yaw_error_front_axis != other.yaw_error_front_axis:
            return False
        if self.yaw_error_cog != other.yaw_error_cog:
            return False
        if self.yaw_error_rear_axis != other.yaw_error_rear_axis:
            return False
        if self.yaw_rate_error != other.yaw_rate_error:
            return False
        if self.steering_error != other.steering_error:
            return False
        if self.vx_error != other.vx_error:
            return False
        if self.vy_error != other.vy_error:
            return False
        if self.sideslip_error != other.sideslip_error:
            return False
        if self.motor_torq_error_lr != other.motor_torq_error_lr:
            return False
        if self.motor_torq_error_rr != other.motor_torq_error_rr:
            return False
        if self.motor_speed_error_lr != other.motor_speed_error_lr:
            return False
        if self.motor_speed_error_rr != other.motor_speed_error_rr:
            return False
        if self.error1 != other.error1:
            return False
        if self.error2 != other.error2:
            return False
        if self.error3 != other.error3:
            return False
        if self.error4 != other.error4:
            return False
        if self.yaw_ref != other.yaw_ref:
            return False
        if self.yaw_ref_front_axis != other.yaw_ref_front_axis:
            return False
        if self.yaw_ref_cog != other.yaw_ref_cog:
            return False
        if self.yaw_ref_rear_axis != other.yaw_ref_rear_axis:
            return False
        if self.curvature_ref != other.curvature_ref:
            return False
        if self.curvature_ref_front_axis != other.curvature_ref_front_axis:
            return False
        if self.curvature_ref_cog != other.curvature_ref_cog:
            return False
        if self.curvature_ref_rear_axis != other.curvature_ref_rear_axis:
            return False
        if self.vx_ref != other.vx_ref:
            return False
        if self.vy_ref != other.vy_ref:
            return False
        if self.ax_ref != other.ax_ref:
            return False
        if self.ay_ref != other.ay_ref:
            return False
        if self.ref1 != other.ref1:
            return False
        if self.ref2 != other.ref2:
            return False
        if self.ref3 != other.ref3:
            return False
        if self.ref4 != other.ref4:
            return False
        if self.steering_without_compensation != other.steering_without_compensation:
            return False
        if self.steering_feedback != other.steering_feedback:
            return False
        if self.steering_feedforward != other.steering_feedforward:
            return False
        if self.lookforward_length != other.lookforward_length:
            return False
        if self.yaw_rate_pre != other.yaw_rate_pre:
            return False
        if self.turning_radius != other.turning_radius:
            return False
        if self.adhesion_coefficient_pre != other.adhesion_coefficient_pre:
            return False
        if self.sideslip_pre != other.sideslip_pre:
            return False
        if self.slip_angle_pre_fl != other.slip_angle_pre_fl:
            return False
        if self.slip_angle_pre_fr != other.slip_angle_pre_fr:
            return False
        if self.slip_angle_pre_rl != other.slip_angle_pre_rl:
            return False
        if self.slip_angle_pre_rr != other.slip_angle_pre_rr:
            return False
        if self.norm_force_pre_fl != other.norm_force_pre_fl:
            return False
        if self.norm_force_pre_fr != other.norm_force_pre_fr:
            return False
        if self.norm_force_pre_rl != other.norm_force_pre_rl:
            return False
        if self.norm_force_pre_rr != other.norm_force_pre_rr:
            return False
        if self.algorithm1 != other.algorithm1:
            return False
        if self.algorithm2 != other.algorithm2:
            return False
        if self.algorithm3 != other.algorithm3:
            return False
        if self.algorithm4 != other.algorithm4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def frame_id_num(self):
        """Message field 'frame_id_num'."""
        return self._frame_id_num

    @frame_id_num.setter
    def frame_id_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frame_id_num' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'frame_id_num' field must be an unsigned integer in [0, 18446744073709551615]"
        self._frame_id_num = value

    @builtins.property
    def lat_error_front_axis(self):
        """Message field 'lat_error_front_axis'."""
        return self._lat_error_front_axis

    @lat_error_front_axis.setter
    def lat_error_front_axis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_error_front_axis' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lat_error_front_axis' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lat_error_front_axis = value

    @builtins.property
    def lat_error_cog(self):
        """Message field 'lat_error_cog'."""
        return self._lat_error_cog

    @lat_error_cog.setter
    def lat_error_cog(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_error_cog' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lat_error_cog' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lat_error_cog = value

    @builtins.property
    def lat_error_rear_axis(self):
        """Message field 'lat_error_rear_axis'."""
        return self._lat_error_rear_axis

    @lat_error_rear_axis.setter
    def lat_error_rear_axis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_error_rear_axis' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lat_error_rear_axis' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lat_error_rear_axis = value

    @builtins.property
    def yaw_error_front_axis(self):
        """Message field 'yaw_error_front_axis'."""
        return self._yaw_error_front_axis

    @yaw_error_front_axis.setter
    def yaw_error_front_axis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_error_front_axis' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_error_front_axis' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_error_front_axis = value

    @builtins.property
    def yaw_error_cog(self):
        """Message field 'yaw_error_cog'."""
        return self._yaw_error_cog

    @yaw_error_cog.setter
    def yaw_error_cog(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_error_cog' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_error_cog' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_error_cog = value

    @builtins.property
    def yaw_error_rear_axis(self):
        """Message field 'yaw_error_rear_axis'."""
        return self._yaw_error_rear_axis

    @yaw_error_rear_axis.setter
    def yaw_error_rear_axis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_error_rear_axis' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_error_rear_axis' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_error_rear_axis = value

    @builtins.property
    def yaw_rate_error(self):
        """Message field 'yaw_rate_error'."""
        return self._yaw_rate_error

    @yaw_rate_error.setter
    def yaw_rate_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_rate_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_rate_error = value

    @builtins.property
    def steering_error(self):
        """Message field 'steering_error'."""
        return self._steering_error

    @steering_error.setter
    def steering_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_error = value

    @builtins.property
    def vx_error(self):
        """Message field 'vx_error'."""
        return self._vx_error

    @vx_error.setter
    def vx_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vx_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vx_error = value

    @builtins.property
    def vy_error(self):
        """Message field 'vy_error'."""
        return self._vy_error

    @vy_error.setter
    def vy_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vy_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vy_error = value

    @builtins.property
    def sideslip_error(self):
        """Message field 'sideslip_error'."""
        return self._sideslip_error

    @sideslip_error.setter
    def sideslip_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sideslip_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sideslip_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sideslip_error = value

    @builtins.property
    def motor_torq_error_lr(self):
        """Message field 'motor_torq_error_lr'."""
        return self._motor_torq_error_lr

    @motor_torq_error_lr.setter
    def motor_torq_error_lr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_torq_error_lr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_torq_error_lr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_torq_error_lr = value

    @builtins.property
    def motor_torq_error_rr(self):
        """Message field 'motor_torq_error_rr'."""
        return self._motor_torq_error_rr

    @motor_torq_error_rr.setter
    def motor_torq_error_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_torq_error_rr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_torq_error_rr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_torq_error_rr = value

    @builtins.property
    def motor_speed_error_lr(self):
        """Message field 'motor_speed_error_lr'."""
        return self._motor_speed_error_lr

    @motor_speed_error_lr.setter
    def motor_speed_error_lr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_speed_error_lr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_speed_error_lr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_speed_error_lr = value

    @builtins.property
    def motor_speed_error_rr(self):
        """Message field 'motor_speed_error_rr'."""
        return self._motor_speed_error_rr

    @motor_speed_error_rr.setter
    def motor_speed_error_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_speed_error_rr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_speed_error_rr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_speed_error_rr = value

    @builtins.property
    def error1(self):
        """Message field 'error1'."""
        return self._error1

    @error1.setter
    def error1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'error1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'error1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._error1 = value

    @builtins.property
    def error2(self):
        """Message field 'error2'."""
        return self._error2

    @error2.setter
    def error2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'error2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'error2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._error2 = value

    @builtins.property
    def error3(self):
        """Message field 'error3'."""
        return self._error3

    @error3.setter
    def error3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'error3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'error3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._error3 = value

    @builtins.property
    def error4(self):
        """Message field 'error4'."""
        return self._error4

    @error4.setter
    def error4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'error4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'error4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._error4 = value

    @builtins.property
    def yaw_ref(self):
        """Message field 'yaw_ref'."""
        return self._yaw_ref

    @yaw_ref.setter
    def yaw_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_ref' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_ref' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_ref = value

    @builtins.property
    def yaw_ref_front_axis(self):
        """Message field 'yaw_ref_front_axis'."""
        return self._yaw_ref_front_axis

    @yaw_ref_front_axis.setter
    def yaw_ref_front_axis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_ref_front_axis' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_ref_front_axis' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_ref_front_axis = value

    @builtins.property
    def yaw_ref_cog(self):
        """Message field 'yaw_ref_cog'."""
        return self._yaw_ref_cog

    @yaw_ref_cog.setter
    def yaw_ref_cog(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_ref_cog' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_ref_cog' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_ref_cog = value

    @builtins.property
    def yaw_ref_rear_axis(self):
        """Message field 'yaw_ref_rear_axis'."""
        return self._yaw_ref_rear_axis

    @yaw_ref_rear_axis.setter
    def yaw_ref_rear_axis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_ref_rear_axis' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_ref_rear_axis' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_ref_rear_axis = value

    @builtins.property
    def curvature_ref(self):
        """Message field 'curvature_ref'."""
        return self._curvature_ref

    @curvature_ref.setter
    def curvature_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curvature_ref' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'curvature_ref' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._curvature_ref = value

    @builtins.property
    def curvature_ref_front_axis(self):
        """Message field 'curvature_ref_front_axis'."""
        return self._curvature_ref_front_axis

    @curvature_ref_front_axis.setter
    def curvature_ref_front_axis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curvature_ref_front_axis' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'curvature_ref_front_axis' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._curvature_ref_front_axis = value

    @builtins.property
    def curvature_ref_cog(self):
        """Message field 'curvature_ref_cog'."""
        return self._curvature_ref_cog

    @curvature_ref_cog.setter
    def curvature_ref_cog(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curvature_ref_cog' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'curvature_ref_cog' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._curvature_ref_cog = value

    @builtins.property
    def curvature_ref_rear_axis(self):
        """Message field 'curvature_ref_rear_axis'."""
        return self._curvature_ref_rear_axis

    @curvature_ref_rear_axis.setter
    def curvature_ref_rear_axis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curvature_ref_rear_axis' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'curvature_ref_rear_axis' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._curvature_ref_rear_axis = value

    @builtins.property
    def vx_ref(self):
        """Message field 'vx_ref'."""
        return self._vx_ref

    @vx_ref.setter
    def vx_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx_ref' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vx_ref' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vx_ref = value

    @builtins.property
    def vy_ref(self):
        """Message field 'vy_ref'."""
        return self._vy_ref

    @vy_ref.setter
    def vy_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy_ref' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vy_ref' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vy_ref = value

    @builtins.property
    def ax_ref(self):
        """Message field 'ax_ref'."""
        return self._ax_ref

    @ax_ref.setter
    def ax_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ax_ref' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ax_ref' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ax_ref = value

    @builtins.property
    def ay_ref(self):
        """Message field 'ay_ref'."""
        return self._ay_ref

    @ay_ref.setter
    def ay_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ay_ref' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ay_ref' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ay_ref = value

    @builtins.property
    def ref1(self):
        """Message field 'ref1'."""
        return self._ref1

    @ref1.setter
    def ref1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ref1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ref1 = value

    @builtins.property
    def ref2(self):
        """Message field 'ref2'."""
        return self._ref2

    @ref2.setter
    def ref2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ref2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ref2 = value

    @builtins.property
    def ref3(self):
        """Message field 'ref3'."""
        return self._ref3

    @ref3.setter
    def ref3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ref3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ref3 = value

    @builtins.property
    def ref4(self):
        """Message field 'ref4'."""
        return self._ref4

    @ref4.setter
    def ref4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ref4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ref4 = value

    @builtins.property
    def steering_without_compensation(self):
        """Message field 'steering_without_compensation'."""
        return self._steering_without_compensation

    @steering_without_compensation.setter
    def steering_without_compensation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_without_compensation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_without_compensation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_without_compensation = value

    @builtins.property
    def steering_feedback(self):
        """Message field 'steering_feedback'."""
        return self._steering_feedback

    @steering_feedback.setter
    def steering_feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_feedback' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_feedback' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_feedback = value

    @builtins.property
    def steering_feedforward(self):
        """Message field 'steering_feedforward'."""
        return self._steering_feedforward

    @steering_feedforward.setter
    def steering_feedforward(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_feedforward' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_feedforward' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_feedforward = value

    @builtins.property
    def lookforward_length(self):
        """Message field 'lookforward_length'."""
        return self._lookforward_length

    @lookforward_length.setter
    def lookforward_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lookforward_length' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lookforward_length' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lookforward_length = value

    @builtins.property
    def yaw_rate_pre(self):
        """Message field 'yaw_rate_pre'."""
        return self._yaw_rate_pre

    @yaw_rate_pre.setter
    def yaw_rate_pre(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate_pre' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_rate_pre' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_rate_pre = value

    @builtins.property
    def turning_radius(self):
        """Message field 'turning_radius'."""
        return self._turning_radius

    @turning_radius.setter
    def turning_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turning_radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'turning_radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._turning_radius = value

    @builtins.property
    def adhesion_coefficient_pre(self):
        """Message field 'adhesion_coefficient_pre'."""
        return self._adhesion_coefficient_pre

    @adhesion_coefficient_pre.setter
    def adhesion_coefficient_pre(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'adhesion_coefficient_pre' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'adhesion_coefficient_pre' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._adhesion_coefficient_pre = value

    @builtins.property
    def sideslip_pre(self):
        """Message field 'sideslip_pre'."""
        return self._sideslip_pre

    @sideslip_pre.setter
    def sideslip_pre(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sideslip_pre' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sideslip_pre' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sideslip_pre = value

    @builtins.property
    def slip_angle_pre_fl(self):
        """Message field 'slip_angle_pre_fl'."""
        return self._slip_angle_pre_fl

    @slip_angle_pre_fl.setter
    def slip_angle_pre_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'slip_angle_pre_fl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'slip_angle_pre_fl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._slip_angle_pre_fl = value

    @builtins.property
    def slip_angle_pre_fr(self):
        """Message field 'slip_angle_pre_fr'."""
        return self._slip_angle_pre_fr

    @slip_angle_pre_fr.setter
    def slip_angle_pre_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'slip_angle_pre_fr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'slip_angle_pre_fr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._slip_angle_pre_fr = value

    @builtins.property
    def slip_angle_pre_rl(self):
        """Message field 'slip_angle_pre_rl'."""
        return self._slip_angle_pre_rl

    @slip_angle_pre_rl.setter
    def slip_angle_pre_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'slip_angle_pre_rl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'slip_angle_pre_rl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._slip_angle_pre_rl = value

    @builtins.property
    def slip_angle_pre_rr(self):
        """Message field 'slip_angle_pre_rr'."""
        return self._slip_angle_pre_rr

    @slip_angle_pre_rr.setter
    def slip_angle_pre_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'slip_angle_pre_rr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'slip_angle_pre_rr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._slip_angle_pre_rr = value

    @builtins.property
    def norm_force_pre_fl(self):
        """Message field 'norm_force_pre_fl'."""
        return self._norm_force_pre_fl

    @norm_force_pre_fl.setter
    def norm_force_pre_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'norm_force_pre_fl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'norm_force_pre_fl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._norm_force_pre_fl = value

    @builtins.property
    def norm_force_pre_fr(self):
        """Message field 'norm_force_pre_fr'."""
        return self._norm_force_pre_fr

    @norm_force_pre_fr.setter
    def norm_force_pre_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'norm_force_pre_fr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'norm_force_pre_fr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._norm_force_pre_fr = value

    @builtins.property
    def norm_force_pre_rl(self):
        """Message field 'norm_force_pre_rl'."""
        return self._norm_force_pre_rl

    @norm_force_pre_rl.setter
    def norm_force_pre_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'norm_force_pre_rl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'norm_force_pre_rl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._norm_force_pre_rl = value

    @builtins.property
    def norm_force_pre_rr(self):
        """Message field 'norm_force_pre_rr'."""
        return self._norm_force_pre_rr

    @norm_force_pre_rr.setter
    def norm_force_pre_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'norm_force_pre_rr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'norm_force_pre_rr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._norm_force_pre_rr = value

    @builtins.property
    def algorithm1(self):
        """Message field 'algorithm1'."""
        return self._algorithm1

    @algorithm1.setter
    def algorithm1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'algorithm1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'algorithm1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._algorithm1 = value

    @builtins.property
    def algorithm2(self):
        """Message field 'algorithm2'."""
        return self._algorithm2

    @algorithm2.setter
    def algorithm2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'algorithm2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'algorithm2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._algorithm2 = value

    @builtins.property
    def algorithm3(self):
        """Message field 'algorithm3'."""
        return self._algorithm3

    @algorithm3.setter
    def algorithm3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'algorithm3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'algorithm3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._algorithm3 = value

    @builtins.property
    def algorithm4(self):
        """Message field 'algorithm4'."""
        return self._algorithm4

    @algorithm4.setter
    def algorithm4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'algorithm4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'algorithm4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._algorithm4 = value
