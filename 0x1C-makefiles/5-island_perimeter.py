#!/usr/bin/python3
"""
The module that contains the island_perimeter function
"""


def island_perimeter(grid):
    """
    a function  that returns the perimeter of the island described in grid
    """
    size_grid = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col]:
                size_grid += 4
                temp = grid[row - 1][col]
                if row > 0 and temp == 1:
                    size_grid -= 2
                temp = grid[row][col - 1]
                if row > 0 and grid[row][col - 1] == 1:
                    size_grid -= 2

    return size_grid
