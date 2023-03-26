#include<stdio.h>
/**
  *main - using putchar to print lowercase and uppecase
  *
  *Return: Always 0
  */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
