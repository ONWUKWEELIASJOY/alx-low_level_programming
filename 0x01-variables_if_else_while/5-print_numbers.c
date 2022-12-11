#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base ten starting from zero
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');

	return (0);
}
