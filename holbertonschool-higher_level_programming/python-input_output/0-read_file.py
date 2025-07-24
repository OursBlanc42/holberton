#!/usr/bin/python3

"""
    Module to read file
"""


def read_file(filename=""):
    """
    read_file Function to read a file and prints it to stdout

    Args:
        filename (str, optional): Filename to read. Defaults to "".
    """
    with open(filename, "r", encoding="utf-8") as myfile:
        content = myfile.read()
        print(content, end="")
