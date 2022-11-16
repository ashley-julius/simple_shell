/* This program concatenates two string */
#include "shell.h"
/**
* _strcat - This function concantenates two string
*
*@src: copy this string to destination
*@dest: where to copy it to 
*Returns: Base address of the concantenated string (dest)
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int src_size, dest_size;

	src_size = _strlen(src);
	dest_size = _strlen(dest);

	for(i = 0; i < src_size; i++)
		dest[dest_size + i] = src[i];
	return dest;
}
