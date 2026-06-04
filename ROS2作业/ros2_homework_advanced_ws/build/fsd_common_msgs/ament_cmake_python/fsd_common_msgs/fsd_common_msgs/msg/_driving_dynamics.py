# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fsd_common_msgs:msg/DrivingDynamics.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DrivingDynamics(type):
    """Metaclass of message 'DrivingDynamics'."""

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
                'fsd_common_msgs.msg.DrivingDynamics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__driving_dynamics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__driving_dynamics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__driving_dynamics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__driving_dynamics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__driving_dynamics

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


class DrivingDynamics(metaclass=Metaclass_DrivingDynamics):
    """Message class 'DrivingDynamics'."""

    __slots__ = [
        '_header',
        '_speed_target',
        '_speed_actual',
        '_steering_angle_target',
        '_steering_angle_actual',
        '_brake_hydr_target',
        '_brake_hydr_actual',
        '_motor_moment_target',
        '_motor_moment_actual',
        '_acceleration_longitudinal',
        '_acceleration_lateral',
        '_yaw_rate',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'speed_target': 'float',
        'speed_actual': 'float',
        'steering_angle_target': 'float',
        'steering_angle_actual': 'float',
        'brake_hydr_target': 'float',
        'brake_hydr_actual': 'float',
        'motor_moment_target': 'float',
        'motor_moment_actual': 'float',
        'acceleration_longitudinal': 'float',
        'acceleration_lateral': 'float',
        'yaw_rate': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
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
        self.speed_target = kwargs.get('speed_target', float())
        self.speed_actual = kwargs.get('speed_actual', float())
        self.steering_angle_target = kwargs.get('steering_angle_target', float())
        self.steering_angle_actual = kwargs.get('steering_angle_actual', float())
        self.brake_hydr_target = kwargs.get('brake_hydr_target', float())
        self.brake_hydr_actual = kwargs.get('brake_hydr_actual', float())
        self.motor_moment_target = kwargs.get('motor_moment_target', float())
        self.motor_moment_actual = kwargs.get('motor_moment_actual', float())
        self.acceleration_longitudinal = kwargs.get('acceleration_longitudinal', float())
        self.acceleration_lateral = kwargs.get('acceleration_lateral', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())

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
        if self.speed_target != other.speed_target:
            return False
        if self.speed_actual != other.speed_actual:
            return False
        if self.steering_angle_target != other.steering_angle_target:
            return False
        if self.steering_angle_actual != other.steering_angle_actual:
            return False
        if self.brake_hydr_target != other.brake_hydr_target:
            return False
        if self.brake_hydr_actual != other.brake_hydr_actual:
            return False
        if self.motor_moment_target != other.motor_moment_target:
            return False
        if self.motor_moment_actual != other.motor_moment_actual:
            return False
        if self.acceleration_longitudinal != other.acceleration_longitudinal:
            return False
        if self.acceleration_lateral != other.acceleration_lateral:
            return False
        if self.yaw_rate != other.yaw_rate:
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
    def speed_target(self):
        """Message field 'speed_target'."""
        return self._speed_target

    @speed_target.setter
    def speed_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_target = value

    @builtins.property
    def speed_actual(self):
        """Message field 'speed_actual'."""
        return self._speed_actual

    @speed_actual.setter
    def speed_actual(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_actual' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_actual' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_actual = value

    @builtins.property
    def steering_angle_target(self):
        """Message field 'steering_angle_target'."""
        return self._steering_angle_target

    @steering_angle_target.setter
    def steering_angle_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_angle_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_angle_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_angle_target = value

    @builtins.property
    def steering_angle_actual(self):
        """Message field 'steering_angle_actual'."""
        return self._steering_angle_actual

    @steering_angle_actual.setter
    def steering_angle_actual(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steering_angle_actual' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steering_angle_actual' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steering_angle_actual = value

    @builtins.property
    def brake_hydr_target(self):
        """Message field 'brake_hydr_target'."""
        return self._brake_hydr_target

    @brake_hydr_target.setter
    def brake_hydr_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_hydr_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brake_hydr_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brake_hydr_target = value

    @builtins.property
    def brake_hydr_actual(self):
        """Message field 'brake_hydr_actual'."""
        return self._brake_hydr_actual

    @brake_hydr_actual.setter
    def brake_hydr_actual(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake_hydr_actual' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brake_hydr_actual' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brake_hydr_actual = value

    @builtins.property
    def motor_moment_target(self):
        """Message field 'motor_moment_target'."""
        return self._motor_moment_target

    @motor_moment_target.setter
    def motor_moment_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_moment_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_moment_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_moment_target = value

    @builtins.property
    def motor_moment_actual(self):
        """Message field 'motor_moment_actual'."""
        return self._motor_moment_actual

    @motor_moment_actual.setter
    def motor_moment_actual(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_moment_actual' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'motor_moment_actual' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._motor_moment_actual = value

    @builtins.property
    def acceleration_longitudinal(self):
        """Message field 'acceleration_longitudinal'."""
        return self._acceleration_longitudinal

    @acceleration_longitudinal.setter
    def acceleration_longitudinal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration_longitudinal' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acceleration_longitudinal' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acceleration_longitudinal = value

    @builtins.property
    def acceleration_lateral(self):
        """Message field 'acceleration_lateral'."""
        return self._acceleration_lateral

    @acceleration_lateral.setter
    def acceleration_lateral(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration_lateral' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acceleration_lateral' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acceleration_lateral = value

    @builtins.property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_rate = value
