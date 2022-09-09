#include <stdio.h>
#include <stdlib.h>
/**
 * Description: main - Print out a string to stdout.
 * Return: 0 if successfull.
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	printf("\n");

	return (0);
}
