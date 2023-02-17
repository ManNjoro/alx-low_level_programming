#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * description: looping through numbers from 0 to 9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
