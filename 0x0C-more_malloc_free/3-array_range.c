#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array. if failed return NULL
 */
int *array_range(int min, int max)
{
	int *ptr, i = min, j;

	if (min > max)
		return (NULL);
	while (i <= max)
		i++;
	i++;
	ptr = malloc(i * sizeof(int));
	if (!ptr)
		return (NULL);
	for (j = 0; (min + j) <= max; j++)
		ptr[j] = (min + j);
	return (ptr);
}

