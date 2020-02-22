#!/usr/bin/python3
""""Function to calculate perimeter of an island"""


def contiguous(grid, i, j):
    counter = 0
    if i > 0:
        if grid[i - 1][j] == 1:
            counter += 1
    if i < len(grid):
        if grid[i + 1][j] == 1:
            counter += 1
    if j > 0:
        if grid[i][j - 1] == 1:
            counter += 1
    if j < len(grid[0]):
        if grid[i][j + 1] == 1:
            counter += 1
    return counter

def island_perimeter(grid):
    counter = 0
    if len(grid) > 0:
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 1:
                    counter += 4 - contiguous(grid, i, j)
    return counter
