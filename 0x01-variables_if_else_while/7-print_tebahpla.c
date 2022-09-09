#include <stdio.h>
#include <stdlib.h>
/**
 * Description: main - Print out a string to stdout.
 * Return: 0 if successfull.
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);
}
