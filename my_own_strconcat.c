/* This program concatenates two strings */
#include "shell.h"
#include <stdlib.h>
/**
* _strconcat - This function concatenates the two strings to a newly
*				created space on the heap
*@str1: First string to concantenate
*@str2: Secong string to concantenate
*Returns: The address to the concatenated
*/
char *_strconcat(char *str1, char *str2)
{
	int i, j, total_length;
	char *ptr;

	if(!str1)
		str1 = '\0';
	if(!str2)
		str2 = '\0';

	total_length = (_strlen(str1) + _strlen(str2));
	ptr = malloc(sizeof(char) * (total_length + 1));

	if(!ptr)
		return ptr;
	for(i = 0; str1[i]; i++)
		ptr[i] = str1[i];
	for(j = 0; str2[j]; j++, i++)
		ptr[i] = str2[j];
	ptr[i] = '\0';
	return ptr;

}
