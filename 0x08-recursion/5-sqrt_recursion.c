#include "main.h"
/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */
int square(int n,  int val)
{
	if (val * val == n)
		return (val);
	if (val * val < n)
		return (square(n, val + 1));
	return (-1);
}
/**
 * _sqrt_recursion - find square root of n
 * @n: number to find square root of
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
