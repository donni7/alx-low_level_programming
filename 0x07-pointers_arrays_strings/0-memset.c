#include "main.h"
/**
 * _memset - The _memset() function
 * @s: target
 * @b: constant
 * @n: number of byte
 * Return: new value of target
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
