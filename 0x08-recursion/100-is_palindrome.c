#include "main.h"
/**
  *palindrome - function to print palindrome
  *@s: pointer to string
  *@l: position
  *Return: 0
  */
int palindrome(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + 1))
	{
		return (palindrome(s + 1, l - 2));
	}
	return (0);
}

/**
  *is_palindrome - funtion to print palindrome number
  *@s: pointer to string
  *Return: 0
  */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s)
		return (palindrome(s, len - 1));
}
