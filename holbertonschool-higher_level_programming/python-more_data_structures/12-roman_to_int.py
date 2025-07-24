#!/usr/bin/python3
def roman_to_int(roman_string):
    result = 0
    previous_number = 0
    convert_table = {
        "I": 1,
        "V": 5,
        "X": 10,
        "L": 50,
        "C": 100,
        "D": 500,
        "M": 1000
        }

    if type(roman_string) is not str or roman_string is None:
        return 0

    for item in roman_string:

        number = convert_table[item]

        if number > previous_number:
            result = result + number - (previous_number * 2)
        else:
            result = result + number

        previous_number = number

    return (result)
