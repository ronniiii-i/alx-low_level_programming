#include <stdio.h>

void __attribute__((constructor)) printbeforemain(void);
/**
 * printbeforemain - prints before main is executed
 */
void printbeforemain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
