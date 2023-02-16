#include <stdio.h>
/**
 * main - C [rogam that prints the size of various types
 * Return: 0 (complete)
 */
int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("size of int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %lu bytes(s)", sizeof(long int));
	printf("size of a long long int: %lu bytes(s)", sizeof(long long int));
	printf("size of a float: %lu bytes(s)", sizeof(float));
	return (0);
}
