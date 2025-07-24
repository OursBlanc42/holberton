#!/usr/bin/python3

def print_matrix_integer(matrix=[[]]):

    for item in matrix:
        counter = 0
        for subitem in item:
            if counter < len(item) - 1:
                print("{:d}".format(subitem), end=" ")
            else:
                print("{:d}".format(subitem), end="")
            counter += 1

        print()
