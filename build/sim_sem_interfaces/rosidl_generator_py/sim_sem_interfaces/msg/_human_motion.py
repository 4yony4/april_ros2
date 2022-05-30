# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sim_sem_interfaces:msg/HumanMotion.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HumanMotion(type):
    """Metaclass of message 'HumanMotion'."""

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
                'sim_sem_interfaces.msg.HumanMotion')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__human_motion
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__human_motion
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__human_motion
            cls._TYPE_SUPPORT = module.type_support_msg__msg__human_motion
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__human_motion

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HumanMotion(metaclass=Metaclass_HumanMotion):
    """Message class 'HumanMotion'."""

    __slots__ = [
        '_hand_position',
        '_hand_velocity',
        '_hand_acceleration',
        '_body_position',
        '_body_velocity',
        '_body_acceleration',
        '_tools_position',
        '_tools_velocity',
        '_tools_acceleration',
    ]

    _fields_and_field_types = {
        'hand_position': 'string',
        'hand_velocity': 'string',
        'hand_acceleration': 'string',
        'body_position': 'string',
        'body_velocity': 'string',
        'body_acceleration': 'string',
        'tools_position': 'string',
        'tools_velocity': 'string',
        'tools_acceleration': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.hand_position = kwargs.get('hand_position', str())
        self.hand_velocity = kwargs.get('hand_velocity', str())
        self.hand_acceleration = kwargs.get('hand_acceleration', str())
        self.body_position = kwargs.get('body_position', str())
        self.body_velocity = kwargs.get('body_velocity', str())
        self.body_acceleration = kwargs.get('body_acceleration', str())
        self.tools_position = kwargs.get('tools_position', str())
        self.tools_velocity = kwargs.get('tools_velocity', str())
        self.tools_acceleration = kwargs.get('tools_acceleration', str())

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
        if self.hand_position != other.hand_position:
            return False
        if self.hand_velocity != other.hand_velocity:
            return False
        if self.hand_acceleration != other.hand_acceleration:
            return False
        if self.body_position != other.body_position:
            return False
        if self.body_velocity != other.body_velocity:
            return False
        if self.body_acceleration != other.body_acceleration:
            return False
        if self.tools_position != other.tools_position:
            return False
        if self.tools_velocity != other.tools_velocity:
            return False
        if self.tools_acceleration != other.tools_acceleration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def hand_position(self):
        """Message field 'hand_position'."""
        return self._hand_position

    @hand_position.setter
    def hand_position(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hand_position' field must be of type 'str'"
        self._hand_position = value

    @builtins.property
    def hand_velocity(self):
        """Message field 'hand_velocity'."""
        return self._hand_velocity

    @hand_velocity.setter
    def hand_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hand_velocity' field must be of type 'str'"
        self._hand_velocity = value

    @builtins.property
    def hand_acceleration(self):
        """Message field 'hand_acceleration'."""
        return self._hand_acceleration

    @hand_acceleration.setter
    def hand_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hand_acceleration' field must be of type 'str'"
        self._hand_acceleration = value

    @builtins.property
    def body_position(self):
        """Message field 'body_position'."""
        return self._body_position

    @body_position.setter
    def body_position(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'body_position' field must be of type 'str'"
        self._body_position = value

    @builtins.property
    def body_velocity(self):
        """Message field 'body_velocity'."""
        return self._body_velocity

    @body_velocity.setter
    def body_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'body_velocity' field must be of type 'str'"
        self._body_velocity = value

    @builtins.property
    def body_acceleration(self):
        """Message field 'body_acceleration'."""
        return self._body_acceleration

    @body_acceleration.setter
    def body_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'body_acceleration' field must be of type 'str'"
        self._body_acceleration = value

    @builtins.property
    def tools_position(self):
        """Message field 'tools_position'."""
        return self._tools_position

    @tools_position.setter
    def tools_position(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tools_position' field must be of type 'str'"
        self._tools_position = value

    @builtins.property
    def tools_velocity(self):
        """Message field 'tools_velocity'."""
        return self._tools_velocity

    @tools_velocity.setter
    def tools_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tools_velocity' field must be of type 'str'"
        self._tools_velocity = value

    @builtins.property
    def tools_acceleration(self):
        """Message field 'tools_acceleration'."""
        return self._tools_acceleration

    @tools_acceleration.setter
    def tools_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tools_acceleration' field must be of type 'str'"
        self._tools_acceleration = value
