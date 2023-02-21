#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets a-z 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char alpha = 'a';

	while (count < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');

		count++;
	}
}
