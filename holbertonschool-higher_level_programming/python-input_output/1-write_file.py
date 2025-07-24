#!/usr/bin/python3

"""
    Module to writes a string to a text file (UTF8)
    and returns the number of characters written:
"""


def write_file(filename="", text=""):
    """
    write_file Write a file

    Args:
        filename (str, optional): Name of the file. Defaults to "".
        text (str, optional): string written. Defaults to "".
    """
    with open(filename, "w", encoding="utf-8") as myfile:
        myfile.write(text)

    return len(text)
