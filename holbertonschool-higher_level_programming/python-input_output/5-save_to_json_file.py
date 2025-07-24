#!/usr/bin/python3

"""
    Module that writes an Object to a text file, using a JSON representation:
"""

import json


def save_to_json_file(my_obj, filename):
    """
    save_to_json_file

    Args:
        my_obj (obj): object we want to save
        filename (_type_): file name
    """
    with open(filename, "w", encoding="utf-8") as myfile:
        json.dump(my_obj, myfile)
