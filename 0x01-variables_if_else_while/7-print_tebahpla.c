#include <stdio.h>
/**
 * main - write a program that print in reverse
 *
 * Return: 0 complete
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
