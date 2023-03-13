#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function definition
 * Description: create an array of chars and
 * initilize with char c
 * @size: size of array to create
 * @c: char to initialize array with
 * Return: char value
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
