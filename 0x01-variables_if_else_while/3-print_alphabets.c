#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
  * main - Print alphabet in lower and upper case
  * Return: Always 0
  */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');
}

