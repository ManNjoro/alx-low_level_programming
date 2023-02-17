#include <stdio.h>

/**
 * main - prints single digits from 0-10
 *
 * description: looping through the single digits and
 * displaying them using putchar()
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
