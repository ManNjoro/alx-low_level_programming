#include <string.h>
#include "main.h"

/**
 * infinite_add - adds 2 nums
 * @n1: char 1
 * @n2: char 2
 * @r: char 3
 * @size_r: int
 *
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int lenr = size_r - 1;
	int carry = 0;
	int i, j;

	if (len1 + len2 >= lenr)
		return (0);

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		int d1 = (i >= 0) ? n1[i] - '0' : 0;
		int d2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = d1 + d2 + carry;

		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		} else
		{
			carry = 0;
		}
		r[lenr--] = sum + '0';
	}

	memmove(r, &r[lenr + 1], size_r - lenr - 1);
	r[size_r - lenr - 1] = '\0';

	return (r);
}

