#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Except the best. Prepare for the worst. Capitalize on what comes. \nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%S", ptr);
	printf("%s", str);
	return (0);
}

