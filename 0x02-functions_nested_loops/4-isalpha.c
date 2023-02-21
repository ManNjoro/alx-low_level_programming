#include "main.h"

/**
 * _isalpha - checks for an alphabet and returns true or false
 * @c: c is an ascii character
 *
 * Return: 1 if lowercase
 */

int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
