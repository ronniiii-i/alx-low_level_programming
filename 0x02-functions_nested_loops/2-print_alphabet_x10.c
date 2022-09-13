#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = '1' ; i <= '10'; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++
		}
	}
	_putchar('\n');
}
