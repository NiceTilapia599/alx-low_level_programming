#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
  *main - entry point
  *Description - print the last digit ending with a new line
  *
*Return: 0
*/
int main(void)

	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;

	if (m > 5)
{
	printf("last digit of %d is %d and is greater than 5", n, m);
}
	else if (m == 0)
{
		printf("last digit of %d is %d and is zero", n, m);
}
		else (m < 6 && m != 0)
{
	printf("last digit of %d is %d and is less than and not zero", n, m);
}
{	
	printf("\n");

			return (0);
}