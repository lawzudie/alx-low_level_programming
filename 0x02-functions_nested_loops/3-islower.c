#include "main.h"

/**
 * _islower - shows if 1 at input is a
 * lowercase character and another shows 0
 * @c: The character in ASCII code
 * Return: 1 for lowercase and 0 for others
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
