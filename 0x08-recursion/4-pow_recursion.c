#include "main.h"
/**
 * _pow_recursion - raises x to power of y
 * @x: number to raise to power
 * @y: power of the number
 * Return: x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, --y));
}
