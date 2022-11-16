/* This program demonstrate how to create our strdup */
#include "shell.h"
#include <stdlib.h>
/**
*strdup - The function copys a string to the heap and returns the 
*	  base address on the heap
* 
*@str: String to be copied
* 
*Returns: the base address of the duplicated string
*/
char *_strdup(char *str)
{
	char *string; /* pointer to the returned address */
	int i; /* Iterator variable */
	if(!str)
	{
		return(str);
	}
	else
	{
		int len = _strlen(str);
		string = malloc(sizeof(char) * (len + 1));
		if(!string)
			return(string);
		for(i = 0; i < (len + 1); i++)
			string[i] = str[i];
		return string;
	}

}
