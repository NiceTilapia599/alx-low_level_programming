#include "main.h"
/**
  *char *_strcpy - function to copy a string pointrd by src
  *@dest: copy to
  *@src: source to copy from
  *Return: string
  */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = ('\0');
	return (dest);
}
