#!/usr/bin/python3


def island_perimeter(grid):
    '''A function that returns the perimeter of the island in grid'''
    length = len(grid)
    width = len(grid[0])
    side = 0
    corner = 0

    for m in range(length):
        for n in range(width):
            if grid[m][n] == 1:
                side += 1
                if (n > 0 and grid[m][n - 1] == 1):
                    corner += 1
                if (m > 0 and grid[m - 1][n] == 1):
                    corner += 1
    return ((side * 4) - (corner * 2))
