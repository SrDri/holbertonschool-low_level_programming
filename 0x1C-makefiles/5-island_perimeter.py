#!/usr/bin/python3
""" island perimeter """


def island_perimeter(grid):
    """ Return the perimeter island """

    len_x = len(grid)
    len_y = len(grid[0])
    suma = 0
    for i in range(len_x):
        for j in range(len_y):
            if grid[i][j] == 1:
                suma = suma + 4
                if i > 0:
                    suma = suma - grid[i - 1][j]
                if i + 1 < len(grid):
                    suma = suma - grid[i + 1][j]
                if j > 0:
                    if grid[i][j - 1] == 1:
                        suma = suma - 1
                if j + 1 < len(grid[i]):
                    suma = suma - grid[i][j + 1]
    return suma
