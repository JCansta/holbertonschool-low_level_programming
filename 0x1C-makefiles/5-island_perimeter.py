#!/usr/bin/python3
"""
5-main
"""
def find_neight(tgrid, i, j):
    neigth = 0
    #left
    if j > 0 and tgrid[i][j-1] is 1:
        neigth += 1
    #up
    if i > 0 and tgrid[i-1][j] is 1:
        neigth += 1
    #down
    if i < (len(tgrid) - 1) and tgrid[i+1][j] is 1:
        neigth += 1

    #right
    if j < (len(tgrid[0]) - 1) and tgrid[i][j+1] is 1:
        neigth += 1

    return neigth


def island_perimeter(grid):
    '''define the perimeter of the island'''
    perimeter = 0;
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j]:
                perimeter += 4 - find_neight(grid, i, j)
    return perimeter
