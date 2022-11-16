/* This function demonstrates the memset function, which fill a block

*	of memory with a same character or string until the stated limit
*/
#include "shell.h"	
/**
* _memset - This function fills a memory with constant character or string
* @ptr: pointer to start of string
* @x: character to fill the memory with
* @limit: Where to stop filling the memory with the character
* Return: ptr, pointer to the start of the string
*/
char *_memset(char *ptr, char x, unsigned int limit)
{
	unsigned int i;
	for(i = 0; i < limit; i++)
		ptr[i] = x;
	return ptr;
}
