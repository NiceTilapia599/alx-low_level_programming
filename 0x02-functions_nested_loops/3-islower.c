#include "main.h"
/**
  *_islower - functions to print lowercase
  *
  *@c: Parameter to be printed.
  *
  *Return: 1 if it is lowercase and 0 otherwise
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
