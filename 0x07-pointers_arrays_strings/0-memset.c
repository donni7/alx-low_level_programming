#include "main.h"
/**
 * _memset - fill a block memory
 * @s: starting adress of memory
 * @b: desired value
 * @n: number of bytes
 * Return: changed array of new value for n
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
