#!/usr/bin/python3
"""island_perimeter"""

def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    if not grid:
        return 0
    perimeter = 0
    rows, columns = len(grid), len(grid[0])

    for r in range(rows):
        for c in range(columns):
            if grid[r][c] == 1:
                perimeter += 4
                if r > 0 and grid[r - 1][c] == 1:
                    perimeter -= 2
                if c > 0 and grid[r][c - 1] == 1:
                    perimeter -= 2
    return perimeter
