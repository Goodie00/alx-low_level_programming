#include "main.h"
/**
 * _sqrt_recursion - evaluate sqrt
 * @n: interger
 * Return: Sqrt_recursion
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	else if (i == 0)
		return (1);
	return (_evaluate(i, n));
}
