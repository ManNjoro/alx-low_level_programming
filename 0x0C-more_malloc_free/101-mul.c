#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
void _puts(char *s);
void print_error(void);
int multiply(char *num1, char *num2);

/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc != 3 || !multiply(argv[1], argv[2]))
	{
		print_error();
		return (98);
	}

	return (0);
}

/**
 * multiply - Multiplies two numbers
 *
 * @num1: First number
 * @num2: Second number
 *
 * Return: 1 if successful, 0 otherwise
 */
int multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int i, j, carry, n1, n2, sum, *result;

	result = malloc(sizeof(int) * (len1 + len2));

	if (!result)
		return (0);

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}

		if (carry)
			result[i + j + 1] += carry;
	}

	for (i = 0; i < len1 + len2; i++)
	{
		if (result[i] != 0)
			break;
	}

	if (i == len1 + len2)
	{
		_putchar('0');
		_putchar('\n');
	}
	else
	{
		for (; i < len1 + len2; i++)
			_putchar(result[i] + '0');

		_putchar('\n');
	}

	free(result);
	return (1);
}

/**
 * _strlen - Calculates the length of a string
 *
 * @s: String
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}

	return (i);
}

/**
 * _puts - Prints a string, followed by a new line, to stdout
 *
 * @s: String
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	_putchar('\n');
}

/**
 * print_error - Prints an error message
 */
void print_error(void)
{
	_puts("Error");
}
