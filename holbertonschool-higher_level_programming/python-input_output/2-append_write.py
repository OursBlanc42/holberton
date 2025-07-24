#!/usr/bin/python3

"""
    Module appends a string at the end of a text file (UTF8)
    and returns the number of characters added:
"""


def append_write(filename="", text=""):
    """
    append_write append and write in file

    Args:
        filename (str, optional): file name. Defaults to "".
        text (str, optional): string appended to file. Defaults to "".
    """
    with open(filename, "a", encoding="utf-8") as myfile:
        myfile.write(text)

    return len(text)
