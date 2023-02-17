#include <stdio.h>

/**
 * main - prints hexadecimal numbers
 *
 * description: looping through 0-9 and a-f
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}
	ch = 'a';
	do {
		putchar(ch);
		ch++;
	} while (ch <= 'f');
	putchar('\n');
	return (0);
}
