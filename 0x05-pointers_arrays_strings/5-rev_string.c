#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: string
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, c, k;
	char *a, t;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		t = s[i];
		s[i] = *a;
		*a = t;
		a--;
	}
}
