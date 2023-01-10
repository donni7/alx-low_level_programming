#include "main.h"
/**
 * _memset - fills memory
 * @s: source string
 * @b: the constant byte
 * @n: length buffer
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
