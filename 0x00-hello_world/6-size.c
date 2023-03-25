#include<stdio.h>
/**
  *main - Entry point
  *Description - print data types ending with anew line
  *
  *Return: Always(0)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size char: %lu byte(s)\n", (char)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (int)sizeof(b));
	printf("Size of long int: %lu byte(s)\n", (long int)sizeof(c));
	printf("Size of long long int: %lu byte(s)\n", (long long int)sizeof(d));
	printf("Size of float: %lu byte(s)\n", (float)sizeof(f));
	return (0);
}
