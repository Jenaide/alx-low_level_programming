#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string
 * @accept: char to locate string s
 * Return: pointer to c location
 */
unsigned int _strspn(char *s, char *accept)
{
	int amx = 0, flag;
	char *strt = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				amx++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = strt;
		if (flag == 0)
			break;
	}
	return (amx);
}
