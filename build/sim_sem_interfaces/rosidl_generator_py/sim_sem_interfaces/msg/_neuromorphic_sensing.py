# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sim_sem_interfaces:msg/NeuromorphicSensing.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NeuromorphicSensing(type):
    """Metaclass of message 'NeuromorphicSensing'."""

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
            module = import_type_support('sim_sem_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sim_sem_interfaces.msg.NeuromorphicSensing')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__neuromorphic_sensing
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__neuromorphic_sensing
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__neuromorphic_sensing
            cls._TYPE_SUPPORT = module.type_support_msg__msg__neuromorphic_sensing
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__neuromorphic_sensing

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NeuromorphicSensing(metaclass=Metaclass_NeuromorphicSensing):
    """Message class 'NeuromorphicSensing'."""

    __slots__ = [
        '_point1_speed',
        '_point2_speed',
    ]

    _fields_and_field_types = {
        'point1_speed': 'string',
        'point2_speed': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.point1_speed = kwargs.get('point1_speed', str())
        self.point2_speed = kwargs.get('point2_speed', str())

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
        if self.point1_speed != other.point1_speed:
            return False
        if self.point2_speed != other.point2_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def point1_speed(self):
        """Message field 'point1_speed'."""
        return self._point1_speed

    @point1_speed.setter
    def point1_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'point1_speed' field must be of type 'str'"
        self._point1_speed = value

    @builtins.property
    def point2_speed(self):
        """Message field 'point2_speed'."""
        return self._point2_speed

    @point2_speed.setter
    def point2_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'point2_speed' field must be of type 'str'"
        self._point2_speed = value
