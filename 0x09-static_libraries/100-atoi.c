#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: string
 *
 * Return: An integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int con = 0;
	int less = 1;
	int i = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			less *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			i = 1;
			con = (con * 10) + (s[c] - '0');
			c++;
		}

		if (i == 1)
		{
			break;
		}

		c++;
	}

	con *= less;
	return (con);
}

