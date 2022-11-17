/* This function compares two strings by comparing their int values */
#include "shell.h"
/**
* _strcmp - This function compares two strings, it is done by
* 			comparing their int value
*@str1: First string
@str2: Second string
@Returns: the diff i.e. int value
*/
int _strcmp(char *str1, char *str2)
{
	int i;
	for(i = 0; (str1[i] =! '\0'); i++)
	{
		if(str1[i] - str2[i] != 0)
			return(str1[i] - str2[i]);
	}
	return (0);
}
