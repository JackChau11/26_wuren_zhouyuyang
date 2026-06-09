# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fsd_common_msgs:msg/Feedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Feedback(type):
    """Metaclass of message 'Feedback'."""

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
                'fsd_common_msgs.msg.Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__msg__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__feedback

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


class Feedback(metaclass=Metaclass_Feedback):
    """Message class 'Feedback'."""

    __slots__ = [
        '_header',
        '_frame_id_num',
        '_wheel_speed_fl',
        '_wheel_speed_fr',
        '_wheel_speed_rl',
        '_wheel_speed_rr',
        '_motor_command_speed_rl',
        '_motor_command_speed_rr',
        '_motor_return_speed_rl',
        '_motor_return_speed_rr',
        '_motor_command_torq_rl',
        '_motor_command_torq_rr',
        '_motor_return_torq_rl',
        '_motor_return_torq_rr',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'frame_id_num': 'uint64',
        'wheel_speed_fl': 'float',
        'wheel_speed_fr': 'float',
        'wheel_speed_rl': 'float',
        'wheel_speed_rr': 'float',
        'motor_command_speed_rl': 'float',
        'motor_command_speed_rr': 'float',
        'motor_return_speed_rl': 'float',
        'motor_return_speed_rr': 'float',
        'motor_command_torq_rl': 'float',
        'motor_command_torq_rr': 'float',
        'motor_return_torq_rl': 'float',
        'motor_return_torq_rr': 'float',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.frame_id_num = kwargs.get('frame_id_num', int())
        self.wheel_speed_fl = kwargs.get('wheel_speed_fl', float())
        self.wheel_speed_fr = kwargs.get('wheel_speed_fr', float())
        self.wheel_speed_rl = kwargs.get('wheel_speed_rl', float())
        self.wheel_speed_rr = kwargs.get('wheel_speed_rr', float())
        self.motor_command_speed_rl = kwargs.get('motor_command_speed_rl', float())
        self.motor_command_speed_rr = kwargs.get('motor_command_speed_rr', float())
        self.motor_return_speed_rl = kwargs.get('motor_return_speed_rl', float())
        self.motor_return_speed_rr = kwargs.get('motor_return_speed_rr', float())
        self.motor_command_torq_rl = kwargs.get('motor_command_torq_rl', float())
        self.motor_command_torq_rr = kwargs.get('motor_command_torq_rr', float())
        self.motor_return_torq_rl = kwargs.get('motor_return_torq_rl', float())
        self.motor_return_torq_rr = kwargs.get('motor_return_torq_rr', float())

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
        if self.wheel_speed_fl != other.wheel_speed_fl:
            return False
        if self.wheel_speed_fr != other.wheel_speed_fr:
            return False
        if self.wheel_speed_rl != other.wheel_speed_rl:
            return False
        if self.wheel_speed_rr != other.wheel_speed_rr:
            return False
        if self.motor_command_speed_rl != other.motor_command_speed_rl:
            return False
        if self.motor_command_speed_rr != other.motor_command_speed_rr:
            return False
        if self.motor_return_speed_rl != other.motor_return_speed_rl:
            return False
        if self.motor_return_speed_rr != other.motor_return_speed_rr:
            return False
        if self.motor_command_torq_rl != other.motor_command_torq_rl:
            return False
        if self.motor_command_torq_rr != other.motor_command_torq_rr:
            return False
        if self.motor_return_torq_rl != other.motor_return_torq_rl:
            return False
        if self.motor_return_torq_rr != other.motor_return_torq_rr:
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
    def wheel_speed_fl(self):
        """Message field 'wheel_speed_fl'."""
        return self._wheel_speed_fl

    @wheel_speed_fl.setter
    def wheel_speed_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_speed_fl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_speed_fl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_speed_fl = value

    @builtins.property
    def wheel_speed_fr(self):
        """Message field 'wheel_speed_fr'."""
        return self._wheel_speed_fr

    @wheel_speed_fr.setter
    def wheel_speed_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_speed_fr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_speed_fr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_speed_fr = value

    @builtins.property
    def wheel_speed_rl(self):
        """Message field 'wheel_speed_rl'."""
        return self._wheel_speed_rl

    @wheel_speed_rl.setter
    def wheel_speed_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_speed_rl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_speed_rl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_speed_rl = value

    @builtins.property
    def wheel_speed_rr(self):
        """Message field 'wheel_speed_rr'."""
        return self._wheel_speed_rr

    @wheel_speed_rr.setter
    def wheel_speed_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_speed_rr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wheel_speed_rr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wheel_speed_rr = value

    @builtins.property
    def motor_command_speed_rl(self):
        """Message field 'motor_command_speed_rl'."""
        return self._motor_command_speed_rl

    @motor_command_speed_rl.setter
    def motor_command_speed_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_command_speed_rl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_command_speed_rl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_command_speed_rl = value

    @builtins.property
    def motor_command_speed_rr(self):
        """Message field 'motor_command_speed_rr'."""
        return self._motor_command_speed_rr

    @motor_command_speed_rr.setter
    def motor_command_speed_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_command_speed_rr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_command_speed_rr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_command_speed_rr = value

    @builtins.property
    def motor_return_speed_rl(self):
        """Message field 'motor_return_speed_rl'."""
        return self._motor_return_speed_rl

    @motor_return_speed_rl.setter
    def motor_return_speed_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_return_speed_rl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_return_speed_rl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_return_speed_rl = value

    @builtins.property
    def motor_return_speed_rr(self):
        """Message field 'motor_return_speed_rr'."""
        return self._motor_return_speed_rr

    @motor_return_speed_rr.setter
    def motor_return_speed_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_return_speed_rr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_return_speed_rr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_return_speed_rr = value

    @builtins.property
    def motor_command_torq_rl(self):
        """Message field 'motor_command_torq_rl'."""
        return self._motor_command_torq_rl

    @motor_command_torq_rl.setter
    def motor_command_torq_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_command_torq_rl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_command_torq_rl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_command_torq_rl = value

    @builtins.property
    def motor_command_torq_rr(self):
        """Message field 'motor_command_torq_rr'."""
        return self._motor_command_torq_rr

    @motor_command_torq_rr.setter
    def motor_command_torq_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_command_torq_rr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_command_torq_rr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_command_torq_rr = value

    @builtins.property
    def motor_return_torq_rl(self):
        """Message field 'motor_return_torq_rl'."""
        return self._motor_return_torq_rl

    @motor_return_torq_rl.setter
    def motor_return_torq_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_return_torq_rl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_return_torq_rl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_return_torq_rl = value

    @builtins.property
    def motor_return_torq_rr(self):
        """Message field 'motor_return_torq_rr'."""
        return self._motor_return_torq_rr

    @motor_return_torq_rr.setter
    def motor_return_torq_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_return_torq_rr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_return_torq_rr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_return_torq_rr = value
