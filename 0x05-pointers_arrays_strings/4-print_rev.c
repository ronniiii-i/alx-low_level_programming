#include "main.h"
/**
 * print_rev - print a string in reverse followed by a new line
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int c, i;

	c = 0;
	while (s[c] != '\0')
		c++;
	c--;
	for (i = c; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
