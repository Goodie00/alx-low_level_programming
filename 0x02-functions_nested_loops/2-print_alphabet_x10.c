#include "main.h"

/**
 * main - alphabeth
 * print_alphabeth_x10 - print a - z ten times
 */

void print_alphabeth_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
