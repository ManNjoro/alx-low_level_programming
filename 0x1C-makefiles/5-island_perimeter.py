#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (list of list of integers): Represents the island grid.

    Returns:
    int: The perimeter of the island.
    """

    perimeter = 0

    # Check each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:  # If it's land, calculate its perimeter
                perimeter += 4  # Start with 4, as a single cell has 4 sides
                # Check the adjacent cells (up, down, left, right)
                if i > 0 and grid[i - 1][j] == 1:  # Up
                    perimeter -= 2  # Reduce 2 sides (top and bottom)
                if j > 0 and grid[i][j - 1] == 1:  # Left
                    perimeter -= 2  # Reduce 2 sides (left and right)

    return perimeter
