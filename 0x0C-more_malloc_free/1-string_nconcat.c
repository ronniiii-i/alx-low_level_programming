#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of string 2
 * Return: concatenated string, if failed, NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, len2 = 0, len = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s2[len2])
		len2++;
	len2++;
	if (n >= len2)
		n = len2;
	while (s1[len])
		len++;
	ptr = malloc((len + n + 1) * sizeof(char));

	if (!ptr)
		return (NULL);
	for (i = 0; i < (len + n); i++)
		if (i < len)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - len];
	ptr[i] = '\0';
	return (ptr);
}
