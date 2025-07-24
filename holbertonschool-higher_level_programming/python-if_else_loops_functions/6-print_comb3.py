#!/usr/bin/python3
start = 0
for num_ten in range(start, 10):
    for num_unit in range(start, 10):
        if num_ten == num_unit:
            continue
        print("{}{}".format(num_ten, num_unit), end="")
        if not (num_ten == 8 and num_unit == 9):
            print(", ", end="")
    start += 1
print()
