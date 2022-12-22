#include "main.h"

/**
 * _strcat - a function to concatenate two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concatenate strings.
 */

char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;
	
	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
