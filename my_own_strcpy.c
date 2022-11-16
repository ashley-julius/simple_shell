/* This function shows how to create a copy of one string to another */
#include "header.h"

/**
 *_strcpy - This function copies one string to the other
 * 
 * @src: source, where strings are copied from
 * @dest: destination, where strings are copied to 
 * Returns: the Dest with a null terminating at the end
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;
	len = _strlen(src);

	for(i = 0; i < len; i++)
		dest[i] = src[i];
	dest[len] = '\0';
	return dest;
}
