#!/usr/bin/python3

"""
    Module that returns an object (Python data structure) represented
    by a JSON string:
"""

import json


def from_json_string(my_str):
    """
    from_json_string

    Args:
        my_str (str): json string

    Returns:
        python object: data structure of the json converted in python
    """
    py_data_struct = json.loads(my_str)
    return py_data_struct
