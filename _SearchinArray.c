/* This function searches in an array for a character, and if it finds
*  it, it returns true (1) */
#include "shell.h"
#include <stddef.h>
/**
* SearchArray - Search for character in an Array

* @c: character to search for

* @Array: where to search for it

* Returns: true (1), if found
*/
int SearchArray(char c, char *Array)
{
	int i;
	if(!Array)
	{
		return(0);
	}
	else
	{
		for(i = 0; Array[i] != '\0'; i++)
			if(Array[i] == c)
				return(1);

	}
}
