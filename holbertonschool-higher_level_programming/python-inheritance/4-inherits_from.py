#!/usr/bin/python3

"""
    Module for inherits from
"""


def inherits_from(obj, a_class):
    """
    inherits_from:
    check if the object is an instance of a
    class that inherited (directly or indirectly)
    from the specified class

    Args:
        obj (obj): object to check
        a_class (class): subclass to check

    Returns:
        boolean: True or False
    """
    obj_type = type(obj)
    if issubclass(obj_type, a_class) and obj_type is not a_class:
        return True
    else:
        return False
