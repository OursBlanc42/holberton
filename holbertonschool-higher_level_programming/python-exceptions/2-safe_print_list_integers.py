#!/usr/bin/python3

def safe_print_list_integers(my_list=[], x=0):

    """
    safe_print_list_integers Prints the first x integers of a list

    Args:
        my_list (list, optional): The input list containing elements to print.
        Defaults to [].
        x (int, optional): Maximum number of element to display.
        Defaults to 0.

    Returns:
        int: The number of integers successfully printed.
    """

    counter = 0
    nb_printed = 0

    while counter < x:
        try:
            print("{:d}".format(my_list[counter]), end="")
            nb_printed += 1
        except (ValueError, TypeError):
            pass
        counter += 1

    print("")
    return nb_printed
