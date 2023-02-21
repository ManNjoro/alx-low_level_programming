#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int fib[50];

	int i;

	fib[0] = 1;

	fib[1] = 2;

	printf("%d, %d", fib[0], fib[1]);

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf(", %d", fib[i]);
	}

	printf("\n");

	return (0);
}
