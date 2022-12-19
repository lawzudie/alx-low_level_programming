#include "main.h"

/**
 * print_array - function to print arrays
 * @a: array name
 * @n: number of elements of the aray
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	if (i == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
