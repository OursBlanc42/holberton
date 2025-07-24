#!/usr/bin/python3
import sys
index = 1

if __name__ == "__main__":

    if len(sys.argv) == 1:
        print("0 arguments.")
        exit()

    elif len(sys.argv) == 2:
        print("1 argument:")

    else:
        print(f"{len(sys.argv)-1} arguments:")

    for item in sys.argv[1:]:
        print(f"{index}: {item}")
        index = index + 1
