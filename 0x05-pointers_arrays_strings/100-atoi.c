#include "main.h"
#include <limits.h>
/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			int digit = *s - '0';

			if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10))

			{
				num = (sign == -1) ? INT_MIN : INT_MAX;
				break;
			}
			num = num * 10 + digit;
		}
		else if (num != 0)
		{
			break;
		}
		s++;
	}

	return (sign * num);
}
