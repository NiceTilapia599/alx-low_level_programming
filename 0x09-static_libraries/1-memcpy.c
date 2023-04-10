#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory destination
 *@src: copy from
 *@n: number of times mem bytes go
 *Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int m = n;

	for (; k < m; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
