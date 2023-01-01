#include "main.h"
/**
 * _strcmp - copies string
 * @s1: s1
 * @s2: s2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
