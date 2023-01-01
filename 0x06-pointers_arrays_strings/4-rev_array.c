#include "main.h"
/**
 * reverse_array - reverse the content of an array
 * @a: a
 * @n: number of elements
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0, Aux;

	n = n - 1;
	while (i <= n)
	{
		Aux = a[i];
		a[i++] = a[n];
		a[n--] = Aux;
	}
}
