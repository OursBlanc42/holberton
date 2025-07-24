#!/usr/bin/python3

"""
    Module for is_kind_of_class
"""


def is_kind_of_class(obj, a_class):
    """
    is_kind_of_class:
        Check if the object is an instance of, or if the object is an instance
        of a class that inherited from, the specified class

    Args:
        obj (obj): obj to check
        a_class (class): class or subclass to check

    Returns:
        boolean: true or false
    """
    return (isinstance(obj, a_class))
