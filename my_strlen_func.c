/* Calculating the length of any string using recursion */
#include "shell.h"
/**
* _strlen - This function calculates the length of any string 
*			recursively
*@str: The string to calculate the length of
*Return: the length of the string
*/
int _strlen(char *str)
{
	if(!str || *str == '\0')
		return (0);
	else
		return(_strlen(str + 1) + 1);
}
