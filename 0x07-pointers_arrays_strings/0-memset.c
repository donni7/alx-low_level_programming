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
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
