#include <unistd.h>

/**
 * _putchar - outputs char c
 *
 * Return - 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
