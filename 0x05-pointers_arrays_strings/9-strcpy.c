#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
