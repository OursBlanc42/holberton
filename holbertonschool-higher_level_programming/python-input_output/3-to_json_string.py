#!/usr/bin/python3

"""
    Module that returns the JSON representation of an object (string):
"""

import json


def to_json_string(my_obj):
    """
    to_json_string convert python obj to string

    Args:
        my_obj (obj): obj to convert
    """
    json_string = json.dumps(my_obj)
    return json_string
