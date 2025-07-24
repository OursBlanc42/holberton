#!/usr/bin/python3
result = ""
for number in range(0, 100):
    result += "{:02d}".format(number)
    if number != 99:
        result += ", "
print(result)
