/* This program prints a character to the specified stream */
#include <unistd.h>
#include "shell.h"
/**
* _putchar - This function prints a character to standard output

* @x: character to be printed to STDOUT_FILENO

* Return: number to printed character
*/

int _putchar(char x)
{
	return(write(1, &x, 1));
}
