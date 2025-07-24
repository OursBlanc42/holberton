#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    result = []
    for item in matrix:
        square = list(map(lambda x: x * x, item))
        result.append(square)
    return result
