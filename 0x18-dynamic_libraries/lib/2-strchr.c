#include "main.h"
/**
 * _strchr - locates a character in a string
 * if it don't find them  then return pointer to null
 * @s: string to search
 * @c: the char to look for
 * Return: pointer to c or to null if c not present
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		++s;
	}
	if (c == '\0')
		return (s);
	return (0);
}
