#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int n, p, r = 0, c = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (n = 0; n < ac; n++)
	{
		for (p = 0; av[n][p]; p++)
			c++;
	}
	c += ac;
	str = malloc(sizeof(char) * c + 1);
	if (str == NULL)
		return (NULL);
	for (n = 0; n < ac; n++)
	{
		for (p = 0; av[n][p]; p++)
		{
			str[r] = av[n][p];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
