#include <stdio.h>
#include <stdlib.h>
/**
 * *alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr, row, col;

	if (width < 1 || height < 1)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(int *));

	if (!ptr)
		return (NULL);
	for (row = 0; row < height; row++)
	{
		ptr[row] = (int *)malloc(width * sizeof(int));

		if (!ptr[row])
		{
			while (row)
			{
				free(ptr[row]);
				row--;
			}
			free(ptr);
			return (NULL);
		}
		for (col = 0; col < width; col++)
			ptr[row][col] = 0;
	}
	return (ptr);
}
