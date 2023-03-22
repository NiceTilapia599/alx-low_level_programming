#include "main.h"

/**
  *print_sign - function that print signs.
  *@n: Parameter to check for sign.
  *
  *Return: 1 and print + if n is greater than zero.
  *0 and print 0 if n is greater than zero.
  *-1 and print - if n is less than zero.
  */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(48);
		return (-1);
	}
}
