#include "main.h"
/**
  *_print_rev_recursion - fuction to print astring in reverse
  *@s: char to be printed
  *Return: 0
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
