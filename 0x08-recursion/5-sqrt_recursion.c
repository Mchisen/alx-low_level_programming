#include "main.h"

/**
  * isSqrt - function that returns the natural square root
  * @n: input number
  * @i: iteratotr
  * Return: 0
  */

int isSqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (isSqrt(n, i + 1));
}

/**
  * _sqrt_recursion - function that returns the natural square root
  * @n: integer n
  * Return: 0
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (isSqrt(n, 1));
}
