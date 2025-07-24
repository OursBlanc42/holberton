#!/usr/bin/python3
def uppercase(str):
    result = ""
    for letter in str:
        if ord(letter) in range(97, 123):
            result += chr(ord(letter) - 32)
        else:
            result += letter
    print("{}".format(result))
