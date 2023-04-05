#include "main.h"
/**
  *_pow_recursion - function to print power of x
  *@x: base element to power element
  *@y: power of x element
  *Return: on success 1
  *on erro, -1 is returned
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
