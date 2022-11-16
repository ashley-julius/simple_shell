#include "shell.h"

/**
 * _strstr - locates a substring.
 *
 * @target: string where to search
 * @c: string to search
 * @Begin: force to start at begin if true
 *
 * Return: the address to first location
 */
char *_strstr(char *target, char *c, int Begin)
{
	int i = 0, j = 0, size = _strlen(c);

	if (c[0] == '\0')
	{
		return (target);
	}

	for (i = 0, j = 0; (i + j) < _strlen(target); j++)
	{
		if (c[j] != target[i + j])
		{
			if (Begin == 0)
			{
				i += j;
				j = 0;
			}
			else
				return (NULL);
		}

		if (j == size - 1)
		{
			return (&target[i]);
		}
	}

	return (NULL);
}
