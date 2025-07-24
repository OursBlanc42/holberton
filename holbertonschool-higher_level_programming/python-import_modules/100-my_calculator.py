#!/usr/bin/python3
from calculator_1 import add, sub, mul, div
import sys

"""
This program do basic calculation
Usage: ./100-my_calculator.py <a> <operator> <b>
"""

if __name__ == "__main__":

    if len(sys.argv) != 4:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        sys.exit(1)

    operator = ["+", "-", "*", "/"]
    funcall = [add, sub, mul, div]

    if sys.argv[2] not in operator:
        print("Unknown operator. Available operators: +, -, * and /")
        sys.exit(1)
    else:
        a = int(sys.argv[1])
        b = int(sys.argv[3])
        op_index = operator.index(sys.argv[2])
        result = funcall[op_index](a, b)
        print("{} {} {} = {}".format(a, sys.argv[2], b, result))
