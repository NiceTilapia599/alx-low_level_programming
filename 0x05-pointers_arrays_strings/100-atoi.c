#include "main.h"
/**
 *_atoi - converts a string to integer
 *@s: the string to convert
 *Return: 0
 */
int _atoi(char *s)
{
	int sign = 1, num = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0) /* stop at first non-digit after number */
			break;

		s++;
	}

	return (sign * num);
}
