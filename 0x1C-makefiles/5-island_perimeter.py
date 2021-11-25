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
                # up
                if grid[i - 1][j] == 0 or not grid[i][j]:
                    count += 1
                # right
                if grid[i][j + 1] == 0 or not grid[i][j]:
                    count += 1
                # bottom
                if grid[i + 1][j] == 0 or not grid[i][j]:
                    count += 1
                # left
                if grid[i][j - 1] == 0 or not grid[i][j]:
                    count += 1
    return(count)
