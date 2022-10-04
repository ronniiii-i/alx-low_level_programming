#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *p1; /*malloc pointers for the two strings*/
	unsigned int c1 = 0, c2 = 0, i;

	if (!s1)
		s1 = "";
	else
		while (s1[c1])
			c1++;
	if (!s2)
		s2 = "";
	else
		while (s2[c2])
			c2++;
	c2++;
	p1 = malloc((c1 * sizeof(char)) + (c2 * sizeof(char)));

	if (!p1)
		return (NULL);
	for (i = 0; i < (c1 + c2); i++)
		if (i < c1)
			p1[i] = s1[i];
		else
			p1[i] = s2[i - c1];
	return (p1);
}
