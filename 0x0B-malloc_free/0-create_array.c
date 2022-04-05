#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array of chars, and initializes
 * it with a specific char
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; ++i)
		arr[i] = c;

	return (arr);
}
