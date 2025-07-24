#!/usr/bin/python3

def uniq_add(my_list=[]):
    my_set = set(my_list)
    result = 0
    for item in my_set:
        if type(item) is int:
            result += item
    return result
