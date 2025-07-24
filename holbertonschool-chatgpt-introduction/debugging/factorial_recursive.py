#!/usr/bin/python3
import sys


def factorial(n):
    """
    Calculate the factorial of a given number.

    Parameters:
    n (int): The number to calculate the factorial of. It should be a
    non-negative integer.

    Returns:
    int: The factorial of the given number.
    """
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)


# Get the number from the command line argument
f = factorial(int(sys.argv[1]))

# Print the factorial
print(f)
