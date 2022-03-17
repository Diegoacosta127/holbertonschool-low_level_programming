#!/usr/bin/python3
"""module doc"""


def island_perimeter(grid):
    """island perimeter doc"""
    perimeter = 0

    for i in range(1, len(grid)):
        for j in range(1, len(grid[i])):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
