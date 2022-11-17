/*
* This program creates a new memory in the heap, by extending it
* and later copy to the memory block what was there 
*/
#include "shell.h"
#include <stdlib.h>
/**
* realloc - reallocates a memory block using malloc and free
*
* @src: source pointer (start here)
* @oldsize: The way the memory was
* @newsize: How big you want it
* Returns: a pointer to the newly allocated memory in the heap
*/
void *_realloc(void *src, unsigned int oldsize, unsigned int newsize)
{
	void *s;

	if(!src)
		return(malloc(newsize));
	if(oldsize == newsize)
		return(src);
	if(newsize == 0)
	{
		free(src);
		return(NULL);
	}
	s = malloc(newsize);
	if(!s)
		return(s);
	else
		s = _memcpy(s, src, oldsize);
	return(s);
}
