#include "main.h"

/**
  * isPrime - helper function for is_prime_number
  * @n: input number
  * @i: iterator
  * Return: 1 if true, 0 if false
  */

int isPrime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (isPrime(n, i - 1));
}

/**
  * is_prime_number - function that returns 1 if the input integer is a pn
  * @n: as integer
  * Return: 1 and 0
  */

int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (isPrime(n, n - 1));
}

