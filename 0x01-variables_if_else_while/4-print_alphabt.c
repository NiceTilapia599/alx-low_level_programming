#include<stdio.h>
/**
  *main - print lowercase letters except q and e
  *
  *Return: 0
  */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');

	return (0);
}
