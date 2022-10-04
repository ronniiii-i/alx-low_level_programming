#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copy the string given to a newly allocated space in memory
 * @str: string to copy
 * Return: returns a pointer to the copy, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *s = str; /*to access the address of the string*/
	char *ptr; /*pointer for string*/
	unsigned int i = 0, j;/*i to get length of str and j for loop*/

	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	i++;
	ptr = (char *)malloc(i * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		ptr[j] = s[j];
	return (ptr);
}
