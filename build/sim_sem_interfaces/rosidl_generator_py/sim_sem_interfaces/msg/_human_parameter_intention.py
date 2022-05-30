# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sim_sem_interfaces:msg/HumanParameterIntention.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HumanParameterIntention(type):
    """Metaclass of message 'HumanParameterIntention'."""

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
                'sim_sem_interfaces.msg.HumanParameterIntention')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__human_parameter_intention
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__human_parameter_intention
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__human_parameter_intention
            cls._TYPE_SUPPORT = module.type_support_msg__msg__human_parameter_intention
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__human_parameter_intention

            from sim_sem_interfaces.msg import HumanMotion
            if HumanMotion.__class__._TYPE_SUPPORT is None:
                HumanMotion.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HumanParameterIntention(metaclass=Metaclass_HumanParameterIntention):
    """Message class 'HumanParameterIntention'."""

    __slots__ = [
        '_motion_prediction',
        '_engagement_level',
        '_cognitive_level',
        '_mood_level',
        '_humanmotion_list',
    ]

    _fields_and_field_types = {
        'motion_prediction': 'string',
        'engagement_level': 'float',
        'cognitive_level': 'float',
        'mood_level': 'float',
        'humanmotion_list': 'sequence<sim_sem_interfaces/HumanMotion>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sim_sem_interfaces', 'msg'], 'HumanMotion')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motion_prediction = kwargs.get('motion_prediction', str())
        self.engagement_level = kwargs.get('engagement_level', float())
        self.cognitive_level = kwargs.get('cognitive_level', float())
        self.mood_level = kwargs.get('mood_level', float())
        self.humanmotion_list = kwargs.get('humanmotion_list', [])

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
        if self.motion_prediction != other.motion_prediction:
            return False
        if self.engagement_level != other.engagement_level:
            return False
        if self.cognitive_level != other.cognitive_level:
            return False
        if self.mood_level != other.mood_level:
            return False
        if self.humanmotion_list != other.humanmotion_list:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motion_prediction(self):
        """Message field 'motion_prediction'."""
        return self._motion_prediction

    @motion_prediction.setter
    def motion_prediction(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'motion_prediction' field must be of type 'str'"
        self._motion_prediction = value

    @builtins.property
    def engagement_level(self):
        """Message field 'engagement_level'."""
        return self._engagement_level

    @engagement_level.setter
    def engagement_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engagement_level' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'engagement_level' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._engagement_level = value

    @builtins.property
    def cognitive_level(self):
        """Message field 'cognitive_level'."""
        return self._cognitive_level

    @cognitive_level.setter
    def cognitive_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cognitive_level' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'cognitive_level' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._cognitive_level = value

    @builtins.property
    def mood_level(self):
        """Message field 'mood_level'."""
        return self._mood_level

    @mood_level.setter
    def mood_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mood_level' field must be of type 'float'"
            assert value >= -3.402823e+38 and value <= 3.402823e+38, \
                "The 'mood_level' field must be a float in [-3.402823e+38, 3.402823e+38]"
        self._mood_level = value

    @builtins.property
    def humanmotion_list(self):
        """Message field 'humanmotion_list'."""
        return self._humanmotion_list

    @humanmotion_list.setter
    def humanmotion_list(self, value):
        if __debug__:
            from sim_sem_interfaces.msg import HumanMotion
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
                 all(isinstance(v, HumanMotion) for v in value) and
                 True), \
                "The 'humanmotion_list' field must be a set or sequence and each value of type 'HumanMotion'"
        self._humanmotion_list = value
