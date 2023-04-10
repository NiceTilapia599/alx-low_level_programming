#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to memory
 * @b: constant byte
 * @n: number of times bytes change
 * Return: 0 on success
 */
char *_memset(char *s, char b, unsigned int n)
{
	int l = 0;

	for (; n > 0; l++)
	{
		s[l] = b;
		n--;
	}
	return (s);
}
