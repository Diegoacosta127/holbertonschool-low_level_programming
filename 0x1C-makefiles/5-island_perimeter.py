#!/usr/bin/python3
"""module doc"""


def island_perimeter(grid):
    """island perimeter doc"""
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            try:
                if grid[i][j] == 1:
                    if grid[i - 1][j] == 0 or i == 0:
                        perimeter += 1
                    if grid[i + 1][j] == 0 or i == len(grid) - 1:
                        perimeter += 1
                    if grid[i][j - 1] == 0 or j == 0:
                        perimeter += 1
                    if grid[i][j + 1] == 0 or j == len(grid) - 1:
                        perimeter += 1
            except Exception as ex:
                pass
    return perimeter
