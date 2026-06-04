# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fsd_common_msgs:msg/DecisionFlag.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DecisionFlag(type):
    """Metaclass of message 'DecisionFlag'."""

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
                'fsd_common_msgs.msg.DecisionFlag')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__decision_flag
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__decision_flag
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__decision_flag
            cls._TYPE_SUPPORT = module.type_support_msg__msg__decision_flag
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__decision_flag

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


class DecisionFlag(metaclass=Metaclass_DecisionFlag):
    """Message class 'DecisionFlag'."""

    __slots__ = [
        '_header',
        '_lap1_state',
        '_lap2_state',
        '_map_state',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'lap1_state': 'uint8',
        'lap2_state': 'uint8',
        'map_state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.lap1_state = kwargs.get('lap1_state', int())
        self.lap2_state = kwargs.get('lap2_state', int())
        self.map_state = kwargs.get('map_state', int())

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
        if self.lap1_state != other.lap1_state:
            return False
        if self.lap2_state != other.lap2_state:
            return False
        if self.map_state != other.map_state:
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
    def lap1_state(self):
        """Message field 'lap1_state'."""
        return self._lap1_state

    @lap1_state.setter
    def lap1_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lap1_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lap1_state' field must be an unsigned integer in [0, 255]"
        self._lap1_state = value

    @builtins.property
    def lap2_state(self):
        """Message field 'lap2_state'."""
        return self._lap2_state

    @lap2_state.setter
    def lap2_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lap2_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lap2_state' field must be an unsigned integer in [0, 255]"
        self._lap2_state = value

    @builtins.property
    def map_state(self):
        """Message field 'map_state'."""
        return self._map_state

    @map_state.setter
    def map_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'map_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'map_state' field must be an unsigned integer in [0, 255]"
        self._map_state = value
