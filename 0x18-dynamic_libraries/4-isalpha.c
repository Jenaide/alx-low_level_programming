#include "main.h"

/**
 * _isalpha - Check main
 * @c: character will be checked
 * Return: 1 if character is a letter 0 if otherwise
 */
int _isalpha(int c)
{
	char al, ah;
	int ak = 0;

	for (al = 'a'; al <= 'z'; al++)
	{
		for (ah = 'A'; ah <= 'Z'; ah++)
		{
			if (c == al || c == ah)
				ak = 1;
		}
	}
	return (ak);
}
