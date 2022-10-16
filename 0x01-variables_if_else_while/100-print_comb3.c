#include <stdio.h>

/**
  * main - Entry
  * Return: Always 0
  */

int main(void)
{
	int a;
	int b;

	for (a = 48; a < 58; a++)
	{
		for (b = a + 1; b < 58; b++)
		{
			putchar(a);
			putchar(b);
			if (a != 56 && b != 58)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);

	return (0);
}
