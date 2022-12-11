#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n')
		;
	return (0);
}
