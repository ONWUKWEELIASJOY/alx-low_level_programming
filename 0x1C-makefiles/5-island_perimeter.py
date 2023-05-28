#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def num_water_neighbors(grid, c, d):
    """Returns the number of water neighbors a cell has in a grid."""

    num = 0

    if c <= 0 or not grid[c - 1][d]:
        num += 1
    if d <= 0 or not grid[c][d - 1]:
        num += 1
    if c >= len(grid[c]) - 1 or not grid[c][d + 1]:
        num += 1
    if c >= len(grid) - 1 or not grid[c + 1][d]:
        num += 1

    return num


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perimeter = 0
    for c in range(len(grid)):
        for d in range(len(grid[c])):
            if grid[c][d]:
                perimeter += num_water_neighbors(grid, c, d)

    return perimeter
