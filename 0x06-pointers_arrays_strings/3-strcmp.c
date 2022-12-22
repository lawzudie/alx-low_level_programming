#include "main.h"

/**
 * _strcmp - comparing two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: negative difference if s1 < s2, 0 if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
