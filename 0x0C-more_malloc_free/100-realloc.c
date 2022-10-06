#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the previous memory
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: ptr with new memory allocated, if failed return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p2;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p2 = malloc(new_size);

	if (!p2)
		return (NULL);
	if (new_size < old_size)
		while (i <  new_size)
		{
			((char *)p2)[i] = ((char *)ptr)[i];
			i++;
		}
	if (new_size > old_size)
		while (i < old_size)
		{
			((char *)p2)[i] = ((char *)ptr)[i];
			i++;
		}
	free(ptr);
	return (p2);

}
