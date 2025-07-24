#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):

    """
    safe_print_list Prints up to x elements of a list safely.

    Args:
        my_list (list, optional): The input list (contains elements to print).
        Defaults to [].
        x (int, optional): Maximum number of elements to display.
        Defaults to 0.

    Returns:
        int: real length of number displayed
    """

    counter = 0
    while counter < x:
        try:
            print(my_list[counter], end="")
        except IndexError:
            break
        counter += 1

    print("")
    return counter
