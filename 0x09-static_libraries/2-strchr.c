#include "main.h"
/**
 * _strchr - locates a character
 * @s: string
 * @c: character
 * Return: Pointer to c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
