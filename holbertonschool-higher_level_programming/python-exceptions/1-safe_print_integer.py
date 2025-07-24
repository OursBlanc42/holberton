#!/usr/bin/python3

def safe_print_integer(value):

    """
    safe_print_integer Prints an integer with {:d}.format()

    Args:
        value : input can be any type

    Returns:
        boolean: True or false
    """

    try:
        print("{:d}".format(value))
        return True
    except (ValueError, TypeError):
        return False
