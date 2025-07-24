#!/usr/bin/python3

def print_sorted_dictionary(a_dictionary):
    sorted_dic = sorted(a_dictionary.items())
    for element in sorted_dic:
        print(f"{element[0]}: {element[1]}")
