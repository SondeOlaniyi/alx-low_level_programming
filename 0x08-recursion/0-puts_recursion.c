#include "main.h"
/**
 * _puts_recursion - function that prints string
 * @s: input
 *
 * Return: Always 0 (succeed)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar_recursion(s + 1);
	}
	else
		_putchar('\n');
}
