#include "main.h"

/**
  * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the initial segment
  * of s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, i = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				i++;
			}

			b++;
		}

		a++;
	}

	return (i);
}

