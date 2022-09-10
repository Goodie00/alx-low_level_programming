#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print if the number is positive, zero or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int L;
	char str[] = "Last digit of %d is %d and is greater than 5\n"

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L =n % 10;

	if (L > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", str, n, L);
	}
	else if ((n % 10) < 6 && (n % 10) L == 0)
	{
		else
		printf("Last digit of %d is %d and is 0\n", n, L);
	}
	return (0);
}
