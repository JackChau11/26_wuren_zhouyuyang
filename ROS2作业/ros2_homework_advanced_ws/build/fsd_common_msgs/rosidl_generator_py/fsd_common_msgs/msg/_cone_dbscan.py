# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fsd_common_msgs:msg/ConeDbscan.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'corepts'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConeDbscan(type):
    """Metaclass of message 'ConeDbscan'."""

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
                'fsd_common_msgs.msg.ConeDbscan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cone_dbscan
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cone_dbscan
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cone_dbscan
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cone_dbscan
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cone_dbscan

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

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


class ConeDbscan(metaclass=Metaclass_ConeDbscan):
    """Message class 'ConeDbscan'."""

    __slots__ = [
        '_position',
        '_color',
        '_pose_confidence',
        '_color_confidence',
        '_cluster',
        '_point_type',
        '_pts',
        '_visited',
        '_corepts',
    ]

    _fields_and_field_types = {
        'position': 'geometry_msgs/Point',
        'color': 'std_msgs/String',
        'pose_confidence': 'std_msgs/Float32',
        'color_confidence': 'std_msgs/Float32',
        'cluster': 'uint8',
        'point_type': 'uint8',
        'pts': 'uint8',
        'visited': 'uint8',
        'corepts': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        from std_msgs.msg import String
        self.color = kwargs.get('color', String())
        from std_msgs.msg import Float32
        self.pose_confidence = kwargs.get('pose_confidence', Float32())
        from std_msgs.msg import Float32
        self.color_confidence = kwargs.get('color_confidence', Float32())
        self.cluster = kwargs.get('cluster', int())
        self.point_type = kwargs.get('point_type', int())
        self.pts = kwargs.get('pts', int())
        self.visited = kwargs.get('visited', int())
        self.corepts = array.array('B', kwargs.get('corepts', []))

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
        if self.position != other.position:
            return False
        if self.color != other.color:
            return False
        if self.pose_confidence != other.pose_confidence:
            return False
        if self.color_confidence != other.color_confidence:
            return False
        if self.cluster != other.cluster:
            return False
        if self.point_type != other.point_type:
            return False
        if self.pts != other.pts:
            return False
        if self.visited != other.visited:
            return False
        if self.corepts != other.corepts:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

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
    def pose_confidence(self):
        """Message field 'pose_confidence'."""
        return self._pose_confidence

    @pose_confidence.setter
    def pose_confidence(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'pose_confidence' field must be a sub message of type 'Float32'"
        self._pose_confidence = value

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

    @builtins.property
    def cluster(self):
        """Message field 'cluster'."""
        return self._cluster

    @cluster.setter
    def cluster(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cluster' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cluster' field must be an unsigned integer in [0, 255]"
        self._cluster = value

    @builtins.property
    def point_type(self):
        """Message field 'point_type'."""
        return self._point_type

    @point_type.setter
    def point_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'point_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'point_type' field must be an unsigned integer in [0, 255]"
        self._point_type = value

    @builtins.property
    def pts(self):
        """Message field 'pts'."""
        return self._pts

    @pts.setter
    def pts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pts' field must be an unsigned integer in [0, 255]"
        self._pts = value

    @builtins.property
    def visited(self):
        """Message field 'visited'."""
        return self._visited

    @visited.setter
    def visited(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'visited' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'visited' field must be an unsigned integer in [0, 255]"
        self._visited = value

    @builtins.property
    def corepts(self):
        """Message field 'corepts'."""
        return self._corepts

    @corepts.setter
    def corepts(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'corepts' array.array() must have the type code of 'B'"
            self._corepts = value
            return
        if __debug__:
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'corepts' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._corepts = array.array('B', value)
