#!/usr/bin/python3
"""
This file contain a funtion called :
    island_perimeter
"""


def island_perimeter(grid):
    start_x = []
    start_y = []
    for i, row in enumerate(grid):
        for j, cell in enumerate(row):
            if cell == 1:
                start_x.append(j)
                start_y.append(i)
    return (most_common_element(start_x) + most_common_element(start_y)) * 2


def most_common_element(lst):
    if not lst:
        return 0
    max_count = 0

    for item in set(lst):
        count = lst.count(item)
        if count > max_count:
            max_count = count
    return max_count
