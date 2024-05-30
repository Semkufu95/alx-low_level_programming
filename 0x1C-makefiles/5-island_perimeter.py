#!/usr/bin/python3
''' perimeter of island '''


def island_perimeter(grid):
    '''A function that returns the perimeter of the island in grid'''

    length = len(grid)
    width = len(grid[0])
    perimeter = 0

    for m in range(length):
        for n in range(width):
            if grid[m][n] == 1:
                perimeter += 4
                if (n > 0 and grid[m][n - 1] == 1):
                    perimeter -= 2
                if (m > 0 and grid[m - 1][n] == 1):
                    perimeter -= 2
    return perimeter
