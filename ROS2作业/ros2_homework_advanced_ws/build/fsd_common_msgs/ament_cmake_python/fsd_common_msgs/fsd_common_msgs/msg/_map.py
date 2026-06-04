# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fsd_common_msgs:msg/Map.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Map(type):
    """Metaclass of message 'Map'."""

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
                'fsd_common_msgs.msg.Map')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map

            from fsd_common_msgs.msg import Cone
            if Cone.__class__._TYPE_SUPPORT is None:
                Cone.__class__.__import_type_support__()

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


class Map(metaclass=Metaclass_Map):
    """Message class 'Map'."""

    __slots__ = [
        '_header',
        '_cone_yellow',
        '_cone_blue',
        '_cone_red',
        '_cone_unknown',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'cone_yellow': 'sequence<fsd_common_msgs/Cone>',
        'cone_blue': 'sequence<fsd_common_msgs/Cone>',
        'cone_red': 'sequence<fsd_common_msgs/Cone>',
        'cone_unknown': 'sequence<fsd_common_msgs/Cone>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['fsd_common_msgs', 'msg'], 'Cone')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['fsd_common_msgs', 'msg'], 'Cone')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['fsd_common_msgs', 'msg'], 'Cone')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['fsd_common_msgs', 'msg'], 'Cone')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.cone_yellow = kwargs.get('cone_yellow', [])
        self.cone_blue = kwargs.get('cone_blue', [])
        self.cone_red = kwargs.get('cone_red', [])
        self.cone_unknown = kwargs.get('cone_unknown', [])

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
        if self.cone_yellow != other.cone_yellow:
            return False
        if self.cone_blue != other.cone_blue:
            return False
        if self.cone_red != other.cone_red:
            return False
        if self.cone_unknown != other.cone_unknown:
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
    def cone_yellow(self):
        """Message field 'cone_yellow'."""
        return self._cone_yellow

    @cone_yellow.setter
    def cone_yellow(self, value):
        if __debug__:
            from fsd_common_msgs.msg import Cone
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Cone) for v in value) and
                 True), \
                "The 'cone_yellow' field must be a set or sequence and each value of type 'Cone'"
        self._cone_yellow = value

    @builtins.property
    def cone_blue(self):
        """Message field 'cone_blue'."""
        return self._cone_blue

    @cone_blue.setter
    def cone_blue(self, value):
        if __debug__:
            from fsd_common_msgs.msg import Cone
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Cone) for v in value) and
                 True), \
                "The 'cone_blue' field must be a set or sequence and each value of type 'Cone'"
        self._cone_blue = value

    @builtins.property
    def cone_red(self):
        """Message field 'cone_red'."""
        return self._cone_red

    @cone_red.setter
    def cone_red(self, value):
        if __debug__:
            from fsd_common_msgs.msg import Cone
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Cone) for v in value) and
                 True), \
                "The 'cone_red' field must be a set or sequence and each value of type 'Cone'"
        self._cone_red = value

    @builtins.property
    def cone_unknown(self):
        """Message field 'cone_unknown'."""
        return self._cone_unknown

    @cone_unknown.setter
    def cone_unknown(self, value):
        if __debug__:
            from fsd_common_msgs.msg import Cone
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Cone) for v in value) and
                 True), \
                "The 'cone_unknown' field must be a set or sequence and each value of type 'Cone'"
        self._cone_unknown = value
