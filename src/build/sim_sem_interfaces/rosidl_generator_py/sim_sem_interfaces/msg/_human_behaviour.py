# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sim_sem_interfaces:msg/HumanBehaviour.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HumanBehaviour(type):
    """Metaclass of message 'HumanBehaviour'."""

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
                'sim_sem_interfaces.msg.HumanBehaviour')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__human_behaviour
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__human_behaviour
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__human_behaviour
            cls._TYPE_SUPPORT = module.type_support_msg__msg__human_behaviour
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__human_behaviour

            from sim_sem_interfaces.msg import HumanGraspingStrategies
            if HumanGraspingStrategies.__class__._TYPE_SUPPORT is None:
                HumanGraspingStrategies.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HumanBehaviour(metaclass=Metaclass_HumanBehaviour):
    """Message class 'HumanBehaviour'."""

    __slots__ = [
        '_body_posture',
        '_humamgrasping_list',
    ]

    _fields_and_field_types = {
        'body_posture': 'string',
        'humamgrasping_list': 'sequence<sim_sem_interfaces/HumanGraspingStrategies>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sim_sem_interfaces', 'msg'], 'HumanGraspingStrategies')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.body_posture = kwargs.get('body_posture', str())
        self.humamgrasping_list = kwargs.get('humamgrasping_list', [])

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
        if self.body_posture != other.body_posture:
            return False
        if self.humamgrasping_list != other.humamgrasping_list:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def body_posture(self):
        """Message field 'body_posture'."""
        return self._body_posture

    @body_posture.setter
    def body_posture(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'body_posture' field must be of type 'str'"
        self._body_posture = value

    @builtins.property
    def humamgrasping_list(self):
        """Message field 'humamgrasping_list'."""
        return self._humamgrasping_list

    @humamgrasping_list.setter
    def humamgrasping_list(self, value):
        if __debug__:
            from sim_sem_interfaces.msg import HumanGraspingStrategies
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
                 all(isinstance(v, HumanGraspingStrategies) for v in value) and
                 True), \
                "The 'humamgrasping_list' field must be a set or sequence and each value of type 'HumanGraspingStrategies'"
        self._humamgrasping_list = value
