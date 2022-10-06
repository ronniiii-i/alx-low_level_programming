#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of bytes of element in array
 * Return: pointer to array. if failed return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		((char *) ptr)[i] = 0;
	return (ptr);
}
