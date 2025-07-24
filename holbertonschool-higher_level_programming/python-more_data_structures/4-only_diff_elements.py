#!/usr/bin/python3

def only_diff_elements(set_1, set_2):
    isection = set_1.intersection(set_2)
    result_list = []
    for item in set_1:
        if item not in isection:
            result_list.append(item)
    for item in set_2:
        if item not in isection:
            result_list.append(item)

    return (result_list)
