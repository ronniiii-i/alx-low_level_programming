#include <stdlib.h>
#include "dog.h"
/**
 * dog_t *new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer for new dog details
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	char *n, *o;
	int l1 = 0, l2 = 0, i;

	ptr = malloc(sizeof(dog_t));

	if (!ptr)
		return (NULL);
	while (name[l1])
		l1++;
	while (owner[l2])
		l2++;
	l1++;
	l2++;
	n = malloc(l1);
	if (!n)
	{
		free(ptr);
		return (NULL);
	}
	o = malloc(l2);
	if (!o)
	{
		free(n);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		n[i] = name[i];
	for (i = 0; i < l2; i++)
		o[i] = owner[i];

	ptr->name = n;
	ptr->owner = o;
	ptr->age = age;
	return (ptr);
}
