#!/usr/bin/python3

def multiply_by_2(a_dictionary):
    dict_copy = a_dictionary.copy()

    for key in dict_copy:
        dict_copy[key] *= 2

    return dict_copy
