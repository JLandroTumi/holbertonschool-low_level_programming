#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - assign a random number to the variable n each time it is executed
* Description: usign the main function
* This program print variables_if_else_while
* Return: 0
*/
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and 0\n", n, l);
	}
	else
	{
		printf("Las digit of %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
