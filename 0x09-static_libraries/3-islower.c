#include "main.h"
/**
 * _islower - Check Main
 * @c : An input
 * Description: function uses _putchar
 * Return: 1 if it is lower case or 0 if uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
