#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies the string given as parameter
 * @str: strings
 *
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *collection;
	unsigned int a, dex;

	a = 0;
	dex = 0;

	if (str == NULL)
		return (NULL);

	while (str[dex])
		dex++;
	collection = malloc(sizeof(char) * (dex + 1));

	if (collection == NULL)
		return (NULL);

	while ((collection[a] = str[a]) != '\0')
		a++;

	return (collection);
}
