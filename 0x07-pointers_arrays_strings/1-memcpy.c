#include "main.h"
/**
 * _memcpy - function copies memory
 * @dest: stored
 * @src: copied 
 * @n: number of bytes 
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i;

	for (i = n; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
