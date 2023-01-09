#include "main.h"
/**
 * _memcpy - copies n bytes
 * @dest: area bytes area copied
 * @src: area bytes are copied from
 * @n: number of bytes
 * Return: a pointer to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
