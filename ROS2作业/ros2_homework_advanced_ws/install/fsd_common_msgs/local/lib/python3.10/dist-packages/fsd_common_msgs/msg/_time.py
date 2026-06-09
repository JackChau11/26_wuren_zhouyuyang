# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fsd_common_msgs:msg/Time.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Time(type):
    """Metaclass of message 'Time'."""

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
                'fsd_common_msgs.msg.Time')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__time
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__time
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__time
            cls._TYPE_SUPPORT = module.type_support_msg__msg__time
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__time

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


class Time(metaclass=Metaclass_Time):
    """Message class 'Time'."""

    __slots__ = [
        '_header',
        '_frame_id_num',
        '_sum_compute_time',
        '_control_compute_time',
        '_boundary_detector_compute_time',
        '_line_detector_compute_time',
        '_skidpad_detector_compute_time',
        '_lidar_detection_compute_time',
        '_camera_detection_compute_time',
        '_fusion_detection_compute_time',
        '_time2',
        '_time3',
        '_time4',
        '_time5',
        '_time6',
        '_time7',
        '_time8',
        '_time9',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'frame_id_num': 'uint64',
        'sum_compute_time': 'float',
        'control_compute_time': 'float',
        'boundary_detector_compute_time': 'float',
        'line_detector_compute_time': 'float',
        'skidpad_detector_compute_time': 'float',
        'lidar_detection_compute_time': 'float',
        'camera_detection_compute_time': 'float',
        'fusion_detection_compute_time': 'float',
        'time2': 'float',
        'time3': 'float',
        'time4': 'float',
        'time5': 'float',
        'time6': 'float',
        'time7': 'float',
        'time8': 'float',
        'time9': 'float',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.frame_id_num = kwargs.get('frame_id_num', int())
        self.sum_compute_time = kwargs.get('sum_compute_time', float())
        self.control_compute_time = kwargs.get('control_compute_time', float())
        self.boundary_detector_compute_time = kwargs.get('boundary_detector_compute_time', float())
        self.line_detector_compute_time = kwargs.get('line_detector_compute_time', float())
        self.skidpad_detector_compute_time = kwargs.get('skidpad_detector_compute_time', float())
        self.lidar_detection_compute_time = kwargs.get('lidar_detection_compute_time', float())
        self.camera_detection_compute_time = kwargs.get('camera_detection_compute_time', float())
        self.fusion_detection_compute_time = kwargs.get('fusion_detection_compute_time', float())
        self.time2 = kwargs.get('time2', float())
        self.time3 = kwargs.get('time3', float())
        self.time4 = kwargs.get('time4', float())
        self.time5 = kwargs.get('time5', float())
        self.time6 = kwargs.get('time6', float())
        self.time7 = kwargs.get('time7', float())
        self.time8 = kwargs.get('time8', float())
        self.time9 = kwargs.get('time9', float())

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
        if self.sum_compute_time != other.sum_compute_time:
            return False
        if self.control_compute_time != other.control_compute_time:
            return False
        if self.boundary_detector_compute_time != other.boundary_detector_compute_time:
            return False
        if self.line_detector_compute_time != other.line_detector_compute_time:
            return False
        if self.skidpad_detector_compute_time != other.skidpad_detector_compute_time:
            return False
        if self.lidar_detection_compute_time != other.lidar_detection_compute_time:
            return False
        if self.camera_detection_compute_time != other.camera_detection_compute_time:
            return False
        if self.fusion_detection_compute_time != other.fusion_detection_compute_time:
            return False
        if self.time2 != other.time2:
            return False
        if self.time3 != other.time3:
            return False
        if self.time4 != other.time4:
            return False
        if self.time5 != other.time5:
            return False
        if self.time6 != other.time6:
            return False
        if self.time7 != other.time7:
            return False
        if self.time8 != other.time8:
            return False
        if self.time9 != other.time9:
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
    def sum_compute_time(self):
        """Message field 'sum_compute_time'."""
        return self._sum_compute_time

    @sum_compute_time.setter
    def sum_compute_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sum_compute_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'sum_compute_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._sum_compute_time = value

    @builtins.property
    def control_compute_time(self):
        """Message field 'control_compute_time'."""
        return self._control_compute_time

    @control_compute_time.setter
    def control_compute_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'control_compute_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'control_compute_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._control_compute_time = value

    @builtins.property
    def boundary_detector_compute_time(self):
        """Message field 'boundary_detector_compute_time'."""
        return self._boundary_detector_compute_time

    @boundary_detector_compute_time.setter
    def boundary_detector_compute_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'boundary_detector_compute_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'boundary_detector_compute_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._boundary_detector_compute_time = value

    @builtins.property
    def line_detector_compute_time(self):
        """Message field 'line_detector_compute_time'."""
        return self._line_detector_compute_time

    @line_detector_compute_time.setter
    def line_detector_compute_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'line_detector_compute_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'line_detector_compute_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._line_detector_compute_time = value

    @builtins.property
    def skidpad_detector_compute_time(self):
        """Message field 'skidpad_detector_compute_time'."""
        return self._skidpad_detector_compute_time

    @skidpad_detector_compute_time.setter
    def skidpad_detector_compute_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'skidpad_detector_compute_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'skidpad_detector_compute_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._skidpad_detector_compute_time = value

    @builtins.property
    def lidar_detection_compute_time(self):
        """Message field 'lidar_detection_compute_time'."""
        return self._lidar_detection_compute_time

    @lidar_detection_compute_time.setter
    def lidar_detection_compute_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lidar_detection_compute_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lidar_detection_compute_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lidar_detection_compute_time = value

    @builtins.property
    def camera_detection_compute_time(self):
        """Message field 'camera_detection_compute_time'."""
        return self._camera_detection_compute_time

    @camera_detection_compute_time.setter
    def camera_detection_compute_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'camera_detection_compute_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'camera_detection_compute_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._camera_detection_compute_time = value

    @builtins.property
    def fusion_detection_compute_time(self):
        """Message field 'fusion_detection_compute_time'."""
        return self._fusion_detection_compute_time

    @fusion_detection_compute_time.setter
    def fusion_detection_compute_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fusion_detection_compute_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fusion_detection_compute_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fusion_detection_compute_time = value

    @builtins.property
    def time2(self):
        """Message field 'time2'."""
        return self._time2

    @time2.setter
    def time2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time2 = value

    @builtins.property
    def time3(self):
        """Message field 'time3'."""
        return self._time3

    @time3.setter
    def time3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time3 = value

    @builtins.property
    def time4(self):
        """Message field 'time4'."""
        return self._time4

    @time4.setter
    def time4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time4 = value

    @builtins.property
    def time5(self):
        """Message field 'time5'."""
        return self._time5

    @time5.setter
    def time5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time5 = value

    @builtins.property
    def time6(self):
        """Message field 'time6'."""
        return self._time6

    @time6.setter
    def time6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time6' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time6' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time6 = value

    @builtins.property
    def time7(self):
        """Message field 'time7'."""
        return self._time7

    @time7.setter
    def time7(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time7' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time7' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time7 = value

    @builtins.property
    def time8(self):
        """Message field 'time8'."""
        return self._time8

    @time8.setter
    def time8(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time8' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time8' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time8 = value

    @builtins.property
    def time9(self):
        """Message field 'time9'."""
        return self._time9

    @time9.setter
    def time9(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time9' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time9' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time9 = value
