/* This function copys a memory area to another destination */
#include "shell.h"
#include <stddef.h>

/**
* _memcpy - This function copys one memory i.e. src to a destination
* i.e. dest
* @src: copy from this location
* @dest: to this location
* @n: size of bytes to be copied
* Return: a pointer to the copied area (base address)
*/
char *_memcpy(char *dest, char *src, size_t n)
{
	size_t i;

	for(i = 0; i < n; i++)
		dest[i] = src[i];
	return dest;

}
