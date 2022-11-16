/* This program creates a memory and initialize all the blocks with zero */
#include "shell.h"
#include <stdlib.h>
/**
* _calloc - This  function creates and sets each memory block with a desired character
* @unit: size of data type
* @total_bytes: total bytes
*/
void *_calloc(unsigned int unit, unsigned int total_byte)
{
	void *ptr;
	if(unit == 0 || total_byte == 0)
		return(NULL);
	else{
		int length = unit * total_byte;
		ptr = malloc(length);
		if(!ptr)
			return(NULL);
		ptr = _memset(ptr, 0, length);
		return ptr;
	}
}
