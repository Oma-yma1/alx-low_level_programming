#!/usr/bin/python3
"""funct returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """return the perimeter of an island"""
    is_width = len(grid[0])
    is_height = len(grid)
    edge = 0
    size = 0
    for j in range(is_height):
        for k in range(is_width):
            if grid[j][k] == 1:
                size += 1
                if (k > 0 and grid[j][k - 1] == 1):
                    edge += 1
                if (j > 0 and grid[j - 1][k] == 1):
                    edge += 1
    return size * 4 - edge * 2
