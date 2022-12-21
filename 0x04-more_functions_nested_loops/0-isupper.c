#include "main.h"
/**
 * _isupper - function that verifies a character is uppercase
 * @c: tested
 * Return: returns 1 if it is uppercate, 0 if not
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
