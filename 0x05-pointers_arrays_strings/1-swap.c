#include "main.h"
/**
  *swap_int - swap two values.
  *@a: value 1 to swap
  *@b: value 2 to swap
  *Return: 0
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
