#include "main.h"
#include<stddef.h>
/**
  *char *_strcpy - function to copy a string pointrd by src
  *@dest: copy to
  *@src: source to copy from
  *Return: string
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
