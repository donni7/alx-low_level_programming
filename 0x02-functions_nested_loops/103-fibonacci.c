#include <stdio.h>
/**
 * main - print first fifty fibonacci
 * Return: 0
 */
int main(void)
{
	int i, x = 1, y = 2, sum = 0, tsum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			tsum = tsum + y;
		}
		sum = x + y;
		x = y;
		y = sum;
	}
	printf("%1d\n", tsum);
	return (0);
}
