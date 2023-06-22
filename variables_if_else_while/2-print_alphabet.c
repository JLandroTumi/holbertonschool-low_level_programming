#include <stdio.h>
/**
*main - putchar print alphabet in lowercase
*Description: usign the main function
*this program print "Alphabet in lowercase"
*Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
