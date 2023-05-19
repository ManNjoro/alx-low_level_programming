#include "main.h"

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  *
  * Return: the string since the first found accepted character
  */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, i;

	while (s[a])
	{
		i = 0;

		while (accept[i])
		{
			if (s[a] == accept[i])
			{
				s += a;
				return (s);
			}

			i++;
		}

		a++;
	}

	return ('\0');
}

