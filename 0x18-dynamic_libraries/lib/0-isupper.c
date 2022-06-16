#include "main.h"
/**
 * _isupper-check for uppercase character
 * @c: the character to be checked
 * Return: 0 if c is not uppercase, 1 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
