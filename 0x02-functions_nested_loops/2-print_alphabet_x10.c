#include "main.h"

/**
  * print_alphabet_x10 - prints alpha 10 times
  */
void print_alphabet_x10(void)
{
	int ten;
	char ch;

	for (ten = 0; ten <= 9; ten++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
