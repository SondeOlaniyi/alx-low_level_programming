#include <stdio.h>

/**
 * main - print letter while omittting some
 *
 * Return: 0 (complete)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
