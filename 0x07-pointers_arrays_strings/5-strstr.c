#include <stdio.h>
#include "main.h"
/**
 * _strstr - locates a character in a string
 * @haystack: pointer where we search for charachter
 * @needle: character we search for
 * Return: NULL if character is not found, return pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *str = haystack;
	char *c = needle;
	int i;

	for (; *str != '\0'; str++)
	{
		for (i = 0; *c != '\0'; i++, c++)
			if (*(str + i) != *(c + i))
				break;
		if (!c[i])
			return(str);
	}
	return (0);
}

int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
