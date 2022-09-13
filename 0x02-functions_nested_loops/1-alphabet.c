#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
