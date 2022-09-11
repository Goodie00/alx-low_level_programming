#include <stdio.h>
/**
 * main - Entry point
 * Description: using the main function
 * this program prints "Programming is positive, zero or negative"
 * Return: 0
 */
int main(void)
{
	int i, y;

	for (i = 0; i < 10; i++)

	{
		putchar (i + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar (y);
	}
	putchar ('\n');
	return (0);
}
