#include "main.h"

/**
  * print_triangle - function that prints a triangle
  * @size: charachter to consider
  * Return: void
  */

void print_triangle(int size)
{
	int c;
	int s;
	int h;

	for (c = 1; c <= size; c++)
	{
		for (s = size - c; s > 0; s--)
		{
			_putchar(' ');
		}
		for (h = 0; h < c; h++)
		{
			_putchar(35);
		}
		if (c == size)
			continue;
		_putchar('\n');
	}
	_putchar('\n');
}
