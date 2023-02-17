#include <stdio.h>
/**
 * main - print alhabet using puchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
