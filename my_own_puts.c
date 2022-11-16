/*
* This program prints a string to stdout and return the total characters
*  printed
*/
#include "shell.h"
/**
 * _puts - This function prints a string and returns the total string
 * *		printed
 * @str: string of characters
 * Return: the total character printed
 */
int _puts(char *str)
{
	int i = 0;
	int sum = 0;

	if(!str)
		sum = 0;
		
	else{
		while(str[i])
		{
			sum += _putchar(str[i]);
			i++;
		}
	}
	return sum;
}

