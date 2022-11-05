#include "main.h"

/**
  * _strlen_recursion - function that returns the length of a string
  * @s: Pointer s
  * Return: The length of the string
  */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}
