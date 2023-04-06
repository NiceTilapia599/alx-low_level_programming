#include "main.h"
/**
  *_compute - compute the function to be printed
  *@d: integer
  *@n: integer
  *Return: on success 1
  *on error, -1 is returned
  */
int _compute(int d, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (d * d < n)
		return (_compute(d + 1, n));
	else if (d * d == n)
		return (d);
	return (-1);
}

/**
  *_sqrt_recursion - function to compute
  *@n: integer
  *Return: on succesa 1
  *on error, -1 is returned
  */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	else
		return (_compute(i, n));
}
