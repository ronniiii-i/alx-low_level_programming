#include <stdio.h>
#include <stdlib.h>
/**
 * Description: main - Print out a string to stdout.
 * Return: 0 if successfull.
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	printf("\n");

	return (0);
}
