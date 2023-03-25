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

	printf("Size a  char: %lu byte(s)\n", (char)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (int)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (long int)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (long long int)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (float)sizeof(float));
	return (0);
}
