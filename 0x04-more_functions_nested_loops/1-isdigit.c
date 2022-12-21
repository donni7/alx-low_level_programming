#include "main.h"
/**
 * _isdigit - functions that verifies a character is a digit
 * @c: tested
 * Return: returns 1 if it si digit, 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
