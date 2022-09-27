#include "main.h"

/**
 * _memset - fill a block of memory
 * @s: starting address
 * @b: value
 * @n: no of bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
