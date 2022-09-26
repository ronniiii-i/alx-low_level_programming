#include "main.h"

/**
 * _memcpy - memset function
 * @dest: start point of string to change
 * @src: value that will replace
 * @n: number of bytes to change
 * Return: changed pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1
	char *src1

	for (*dest1 = dest, *src1 = src; n != 0; dest1++, n--, src1++)
		*dest1 = *src1;
	return (dest);
}
