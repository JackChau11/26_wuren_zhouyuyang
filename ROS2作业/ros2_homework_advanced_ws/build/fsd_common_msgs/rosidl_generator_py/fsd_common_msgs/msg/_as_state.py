# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fsd_common_msgs:msg/AsState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AsState(type):
    """Metaclass of message 'AsState'."""

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
                'fsd_common_msgs.msg.AsState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__as_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__as_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__as_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__as_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__as_state

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


class AsState(metaclass=Metaclass_AsState):
    """Message class 'AsState'."""

    __slots__ = [
        '_header',
        '_mission',
        '_which_lap',
        '_end',
        '_finished',
        '_camera_state',
        '_lidar_state',
        '_ins_state',
        '_sensor_state',
        '_ready',
        '_count_time',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'mission': 'string',
        'which_lap': 'uint8',
        'end': 'uint8',
        'finished': 'uint8',
        'camera_state': 'uint8',
        'lidar_state': 'uint8',
        'ins_state': 'uint8',
        'sensor_state': 'uint8',
        'ready': 'uint8',
        'count_time': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.mission = kwargs.get('mission', str())
        self.which_lap = kwargs.get('which_lap', int())
        self.end = kwargs.get('end', int())
        self.finished = kwargs.get('finished', int())
        self.camera_state = kwargs.get('camera_state', int())
        self.lidar_state = kwargs.get('lidar_state', int())
        self.ins_state = kwargs.get('ins_state', int())
        self.sensor_state = kwargs.get('sensor_state', int())
        self.ready = kwargs.get('ready', int())
        self.count_time = kwargs.get('count_time', float())

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
        if self.mission != other.mission:
            return False
        if self.which_lap != other.which_lap:
            return False
        if self.end != other.end:
            return False
        if self.finished != other.finished:
            return False
        if self.camera_state != other.camera_state:
            return False
        if self.lidar_state != other.lidar_state:
            return False
        if self.ins_state != other.ins_state:
            return False
        if self.sensor_state != other.sensor_state:
            return False
        if self.ready != other.ready:
            return False
        if self.count_time != other.count_time:
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
    def mission(self):
        """Message field 'mission'."""
        return self._mission

    @mission.setter
    def mission(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'mission' field must be of type 'str'"
        self._mission = value

    @builtins.property
    def which_lap(self):
        """Message field 'which_lap'."""
        return self._which_lap

    @which_lap.setter
    def which_lap(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'which_lap' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'which_lap' field must be an unsigned integer in [0, 255]"
        self._which_lap = value

    @builtins.property
    def end(self):
        """Message field 'end'."""
        return self._end

    @end.setter
    def end(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'end' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'end' field must be an unsigned integer in [0, 255]"
        self._end = value

    @builtins.property
    def finished(self):
        """Message field 'finished'."""
        return self._finished

    @finished.setter
    def finished(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'finished' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'finished' field must be an unsigned integer in [0, 255]"
        self._finished = value

    @builtins.property
    def camera_state(self):
        """Message field 'camera_state'."""
        return self._camera_state

    @camera_state.setter
    def camera_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'camera_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'camera_state' field must be an unsigned integer in [0, 255]"
        self._camera_state = value

    @builtins.property
    def lidar_state(self):
        """Message field 'lidar_state'."""
        return self._lidar_state

    @lidar_state.setter
    def lidar_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lidar_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lidar_state' field must be an unsigned integer in [0, 255]"
        self._lidar_state = value

    @builtins.property
    def ins_state(self):
        """Message field 'ins_state'."""
        return self._ins_state

    @ins_state.setter
    def ins_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ins_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ins_state' field must be an unsigned integer in [0, 255]"
        self._ins_state = value

    @builtins.property
    def sensor_state(self):
        """Message field 'sensor_state'."""
        return self._sensor_state

    @sensor_state.setter
    def sensor_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensor_state' field must be an unsigned integer in [0, 255]"
        self._sensor_state = value

    @builtins.property
    def ready(self):
        """Message field 'ready'."""
        return self._ready

    @ready.setter
    def ready(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ready' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ready' field must be an unsigned integer in [0, 255]"
        self._ready = value

    @builtins.property
    def count_time(self):
        """Message field 'count_time'."""
        return self._count_time

    @count_time.setter
    def count_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'count_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'count_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._count_time = value
