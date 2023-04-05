#include "main.h"
/**
  *_puts_recursion - function to print character s
  *@s: char to be printed
  *Return: 0
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
