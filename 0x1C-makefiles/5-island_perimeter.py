#!/usr/bin/python3
"""
returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    count adyacent free sides
    """
    count = 0
    if grid is None:
        return count
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    count += 1
                if j == 0 or grid[i][j - 1] == 0:
                    count += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    count += 1
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    count += 1
    return(count)
