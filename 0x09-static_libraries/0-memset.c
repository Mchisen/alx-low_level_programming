#include "main.h"

/**
  * _memset - function that fills memory with a constant byte.
  * @s: pointer charachter variable
  * @b: charachter
  * @n: integer
  * Return: 0
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
