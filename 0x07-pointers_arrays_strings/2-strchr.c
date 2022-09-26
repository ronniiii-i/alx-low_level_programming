#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer where we search for charachter
 * @c: character we search for
 * Return: NULL if character is not found, return pointer
 */

char *_strchr(char *s, char c)
{
	char *str = s - 1;

	for (; *str != '\0'; str++)
		if (*str == c)
			return (str);
	return (0);
}
