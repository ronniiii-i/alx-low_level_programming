#include <stdio.h>
#include "main.h"
/**
 * _strstr - locates a character in a string
 * @haystack: pointer where we search for character
 * @needle: character we search for
 * Return: NULL if character is not found, return pointer
 */
char +_strstr(char *haystack, char *needle)
{
	char *str = haystack;
	char *c = needle;
	int i;

	while (*str != '\0')
	{
		for (i = 0; *c != '\0'; i++)
			if (*(str + i) == *(c + i))
				return(str);
		str++;
	}
	return (0);
}
