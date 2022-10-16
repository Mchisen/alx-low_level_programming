#include <stdio.h>

/**
  * main - print the number in base 16
  * Return: Always 0
  */

int main(void)
{
	int ch;
	int la;

	for (ch = 0; ch < 10; ch++)
		putchar((ch % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}
