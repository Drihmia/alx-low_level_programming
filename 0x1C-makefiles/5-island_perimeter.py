#!/usr/bin/python3
"""
This file contain a funtion called :
    island_perimeter
"""


def island_perimeter(grid):
    """ a funtion that returns the perimeter of the
    island described in grid
    """
    if not grid:
        return 0
    start_x, start_y = [], []
    for i, row in enumerate(grid):
        for j, cell in enumerate(row):
            if cell == 1:
                start_x.append(j)
                start_y.append(i)
    most_common_x = most_common_element(start_x)
    most_common_y = most_common_element(start_y)
    if not most_common_x or not most_common_y:
        return 0
    return (most_common_element(start_x) + most_common_element(start_y)) * 2


def most_common_element(lst):
    """  funtion that return the max_count of the
    most repated element in the list
    """

    if not lst:
        return 0
    max_count = 0

    for item in set(lst):
        count = lst.count(item)
        if count > max_count:
            max_count = count
    if max_count == 1:
        max_count = 0
    return max_count
