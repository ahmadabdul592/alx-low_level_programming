#include "main.h"
/**
 * _isdigit -checks for a digit 0 through 9
 * @c: int to be checked
 * Return: 0 if c is not a digit, 1 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
