#!/usr/bin/python3

def search_replace(my_list, search, replace):
    index = 0
    result_list = my_list[:]
    for item in my_list:
        if item == search:
            result_list.pop(index)
            result_list.insert(index, replace)
        index += 1
    return result_list
