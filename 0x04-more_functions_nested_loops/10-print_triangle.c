#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i = 0;
	int j;
	int k;

	if (size > 0)
	{
		while (i < size)
		{
			for (j = size - 1; j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i + 1; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
