#!/usr/bin/python3
import sys

if __name__ == "__main__":
    result = 0

    for item in sys.argv[1:]:
        result = result + int(item)

    print(f"{result}")
