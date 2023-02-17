#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints alphabets in lowercase in reverse
 *
 * description - looping through the letters of alphabets and
 * using putchar() to display them
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'z';

	do {
	putchar(ch);
	ch--;
	} while (ch >= 'a');
	putchar('\n');
	return (0);
}
