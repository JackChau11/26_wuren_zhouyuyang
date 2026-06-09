# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fsd_common_msgs:msg/EchievMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EchievMessage(type):
    """Metaclass of message 'EchievMessage'."""

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
                'fsd_common_msgs.msg.EchievMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__echiev_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__echiev_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__echiev_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__echiev_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__echiev_message

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


class EchievMessage(metaclass=Metaclass_EchievMessage):
    """Message class 'EchievMessage'."""

    __slots__ = [
        '_header',
        '_frame_id_num',
        '_ull_timestamp',
        '_lat',
        '_lon',
        '_h',
        '_vn',
        '_ve',
        '_vh',
        '_roll',
        '_pitch',
        '_yaw',
        '_acc_x',
        '_acc_y',
        '_acc_z',
        '_gyro_x',
        '_gyro_y',
        '_gyro_z',
        '_state',
        '_gps_state',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'frame_id_num': 'uint64',
        'ull_timestamp': 'uint64',
        'lat': 'double',
        'lon': 'double',
        'h': 'float',
        'vn': 'float',
        've': 'float',
        'vh': 'float',
        'roll': 'float',
        'pitch': 'float',
        'yaw': 'float',
        'acc_x': 'float',
        'acc_y': 'float',
        'acc_z': 'float',
        'gyro_x': 'float',
        'gyro_y': 'float',
        'gyro_z': 'float',
        'state': 'uint8',
        'gps_state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.frame_id_num = kwargs.get('frame_id_num', int())
        self.ull_timestamp = kwargs.get('ull_timestamp', int())
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.h = kwargs.get('h', float())
        self.vn = kwargs.get('vn', float())
        self.ve = kwargs.get('ve', float())
        self.vh = kwargs.get('vh', float())
        self.roll = kwargs.get('roll', float())
        self.pitch = kwargs.get('pitch', float())
        self.yaw = kwargs.get('yaw', float())
        self.acc_x = kwargs.get('acc_x', float())
        self.acc_y = kwargs.get('acc_y', float())
        self.acc_z = kwargs.get('acc_z', float())
        self.gyro_x = kwargs.get('gyro_x', float())
        self.gyro_y = kwargs.get('gyro_y', float())
        self.gyro_z = kwargs.get('gyro_z', float())
        self.state = kwargs.get('state', int())
        self.gps_state = kwargs.get('gps_state', int())

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
        if self.ull_timestamp != other.ull_timestamp:
            return False
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.h != other.h:
            return False
        if self.vn != other.vn:
            return False
        if self.ve != other.ve:
            return False
        if self.vh != other.vh:
            return False
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.yaw != other.yaw:
            return False
        if self.acc_x != other.acc_x:
            return False
        if self.acc_y != other.acc_y:
            return False
        if self.acc_z != other.acc_z:
            return False
        if self.gyro_x != other.gyro_x:
            return False
        if self.gyro_y != other.gyro_y:
            return False
        if self.gyro_z != other.gyro_z:
            return False
        if self.state != other.state:
            return False
        if self.gps_state != other.gps_state:
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
    def ull_timestamp(self):
        """Message field 'ull_timestamp'."""
        return self._ull_timestamp

    @ull_timestamp.setter
    def ull_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ull_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'ull_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._ull_timestamp = value

    @builtins.property
    def lat(self):
        """Message field 'lat'."""
        return self._lat

    @lat.setter
    def lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lat' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lat = value

    @builtins.property
    def lon(self):
        """Message field 'lon'."""
        return self._lon

    @lon.setter
    def lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lon' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lon = value

    @builtins.property
    def h(self):
        """Message field 'h'."""
        return self._h

    @h.setter
    def h(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'h' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'h' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._h = value

    @builtins.property
    def vn(self):
        """Message field 'vn'."""
        return self._vn

    @vn.setter
    def vn(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vn' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vn' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vn = value

    @builtins.property
    def ve(self):
        """Message field 've'."""
        return self._ve

    @ve.setter
    def ve(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 've' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 've' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ve = value

    @builtins.property
    def vh(self):
        """Message field 'vh'."""
        return self._vh

    @vh.setter
    def vh(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vh' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vh' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vh = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw = value

    @builtins.property
    def acc_x(self):
        """Message field 'acc_x'."""
        return self._acc_x

    @acc_x.setter
    def acc_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acc_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acc_x = value

    @builtins.property
    def acc_y(self):
        """Message field 'acc_y'."""
        return self._acc_y

    @acc_y.setter
    def acc_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acc_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acc_y = value

    @builtins.property
    def acc_z(self):
        """Message field 'acc_z'."""
        return self._acc_z

    @acc_z.setter
    def acc_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acc_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acc_z = value

    @builtins.property
    def gyro_x(self):
        """Message field 'gyro_x'."""
        return self._gyro_x

    @gyro_x.setter
    def gyro_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_x = value

    @builtins.property
    def gyro_y(self):
        """Message field 'gyro_y'."""
        return self._gyro_y

    @gyro_y.setter
    def gyro_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_y = value

    @builtins.property
    def gyro_z(self):
        """Message field 'gyro_z'."""
        return self._gyro_z

    @gyro_z.setter
    def gyro_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_z = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @builtins.property
    def gps_state(self):
        """Message field 'gps_state'."""
        return self._gps_state

    @gps_state.setter
    def gps_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gps_state' field must be an unsigned integer in [0, 255]"
        self._gps_state = value
