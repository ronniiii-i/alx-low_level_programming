#include "main.h"
/**
 * _sqrt_recursion - find square root of n
 * @n: number to find square root of
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int square(int n,  int val)
	{
		if (val * val == n)
			return (val);
		if (val * val < n)
			return (square(n, val + 1));
		return (-1);
	}

	return (square(n, 1));
}
