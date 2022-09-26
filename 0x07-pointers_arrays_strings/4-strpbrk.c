#include "main.h"

/**
 * _strpbrk - locates a character in a string
 * @s: pointer where we search for charachter
 * @accept: character we search for
 * Return: NULL if character is not found, return pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *str = s;
	int i;

	while (*str != '\0')
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*str == *(accept + i))
				return(str);
		str++;
	return (0);
}
