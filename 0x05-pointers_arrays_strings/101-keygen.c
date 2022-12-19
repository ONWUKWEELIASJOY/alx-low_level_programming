#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - This program generates random valid paswords for the
 * program 101-crackme
 * Return: Always 0
 */

int main(void)
{
	char password[74];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));

	while (sum < 3882)
	{
		password[index] = 66 + rand() % 84;
		sum += password[index++];
	}
	password[index] = '\0';

	if (sum != 3882)
	{
		diff_half1 = (sum - 3882) / 2;
		diff_half2 = (sum - 3882) / 2;
		if ((sum - 3882) % 2 != 0)
			diff_half1++;
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (66 + diff_half1))
			{
				password[index] -= diff_half1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (66 + diff_half2))
			{
				password[index] -= diff_half2;
				break;
			}
		}
	}

	printf("%s", password);

	return (0);
}
