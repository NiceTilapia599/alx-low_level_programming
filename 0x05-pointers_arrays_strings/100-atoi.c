#include "main.h"
/**
 *_atoi - Converts a string to an integer.
 *@s: The string to be converted.
 *
 *Return: 0
 */
int _atoi(char *s)
{
	int sign = 1, num = 0, started = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			num = num * 10 + (*s - '0');
			if (num < 0)
			{
				if (sign == 1)
				{
					return (2147483647);
				}
				else
				{
					return (-2147483648);
				}
			}

		}
		else if (started == 1)
		{
			break;
		}
		s++;
	}
	return (num * sign);
}
