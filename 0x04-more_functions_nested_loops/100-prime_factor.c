#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	long int n = 612852475143;
	long int q = n;
	long int d = 2;

	while (q != d)
	{
		if (q % d == 0)
		{
			q /= d;
		}
		else
		{
			d++;
		}
	}

	printf("%li\n", q);

	return (0);
}
