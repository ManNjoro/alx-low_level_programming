#include <stdio.h>

/**
 * main - prints the sum of all even Fibonacci numbers below 4,000,000
 *
 * Return: 0
 */

int main(void)
{
	long int total, sum, first, second;

	total = 0;
	sum = 0;
	first = 0;
	second = 1;

	while (sum < 4000000)
	{
		sum = first + second;
		if (sum % 2 == 0)
		{
			total += sum;
		}
		first = second;
		second = sum;
	}

	printf("%li\n", total);

	return (0);
}
