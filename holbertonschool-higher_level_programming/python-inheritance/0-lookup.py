#!/usr/bin/python3

"""
    _summary_
"""


def lookup(obj):
    """
    lookup Return the list of avaiable attributes and methods
            of an object

    Args:
        obj (obj): The object we want to check

    Returns:
        list: list of available attributes and methods
    """
    lookup_list = dir(obj)
    return lookup_list
