#include "main.h"

/**
 * _strdup - function that returns a pointer to a new allocated
 * space in memory
 * @str: pointer of the string to copy
 * Return: pointer to new string or NULL if string is NULL
 */
char *_strdup(char *str)
{
	char *new_string, *start;
	int x = 0, length = 0;

	if (str == NUL)
		return (NULL);

	start = str;

	while (*str)
	{
		lenght++;
		str++;
	}

	str = start;
	new_string = malloc(sizeof(char) * (length + 1));
	start = new_string;

	if (new_string != NULL)
	{
		for (; x < lenght; x++)
		{
			new_string[x] = *str;
			str++;
		}
		new_str[x] = '\0';
		return (start);
	}
	else
		return (NULL);
}
