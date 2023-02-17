#include <stdio.h>
/**
 * main - print single digit using putchar
 *
 * Return: 0 complete
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
