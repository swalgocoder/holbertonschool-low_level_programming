#include <stdio.h>
/**
 * pre_print - prints text before main
 *
 * Return: void
 */
void pre_print(void) __attribute__ ((constructor));

void pre_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
