#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: The array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 22 index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
