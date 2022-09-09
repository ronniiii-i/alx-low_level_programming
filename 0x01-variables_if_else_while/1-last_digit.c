#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Description: main - Print out a string to stdout.
 * Return: 0 if successfull.
 */
int main(void)
{
	int n;
	int L;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;
	/* your code goes there */
	if (L > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, L);
	if (L == 0)
		printf("%s %d is %d and is 0\n", str, n, L);
	if (L < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, L);

	return (0);
}
