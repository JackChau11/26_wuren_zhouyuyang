# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fsd_common_msgs:msg/YoloCone.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_YoloCone(type):
    """Metaclass of message 'YoloCone'."""

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
                'fsd_common_msgs.msg.YoloCone')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__yolo_cone
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__yolo_cone
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__yolo_cone
            cls._TYPE_SUPPORT = module.type_support_msg__msg__yolo_cone
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__yolo_cone

            from std_msgs.msg import Float32
            if Float32.__class__._TYPE_SUPPORT is None:
                Float32.__class__.__import_type_support__()

            from std_msgs.msg import String
            if String.__class__._TYPE_SUPPORT is None:
                String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class YoloCone(metaclass=Metaclass_YoloCone):
    """Message class 'YoloCone'."""

    __slots__ = [
        '_x',
        '_y',
        '_width',
        '_height',
        '_color',
        '_color_confidence',
    ]

    _fields_and_field_types = {
        'x': 'std_msgs/Float32',
        'y': 'std_msgs/Float32',
        'width': 'std_msgs/Float32',
        'height': 'std_msgs/Float32',
        'color': 'std_msgs/String',
        'color_confidence': 'std_msgs/Float32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float32
        self.x = kwargs.get('x', Float32())
        from std_msgs.msg import Float32
        self.y = kwargs.get('y', Float32())
        from std_msgs.msg import Float32
        self.width = kwargs.get('width', Float32())
        from std_msgs.msg import Float32
        self.height = kwargs.get('height', Float32())
        from std_msgs.msg import String
        self.color = kwargs.get('color', String())
        from std_msgs.msg import Float32
        self.color_confidence = kwargs.get('color_confidence', Float32())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.color != other.color:
            return False
        if self.color_confidence != other.color_confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'x' field must be a sub message of type 'Float32'"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'y' field must be a sub message of type 'Float32'"
        self._y = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'width' field must be a sub message of type 'Float32'"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'height' field must be a sub message of type 'Float32'"
        self._height = value

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'color' field must be a sub message of type 'String'"
        self._color = value

    @builtins.property
    def color_confidence(self):
        """Message field 'color_confidence'."""
        return self._color_confidence

    @color_confidence.setter
    def color_confidence(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'color_confidence' field must be a sub message of type 'Float32'"
        self._color_confidence = value
