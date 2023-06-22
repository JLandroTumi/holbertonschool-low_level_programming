#include <stdio.h>
/*
 * mains - putchar print alphABET
 * Description: usign the main function
 * this program print "The alphabet in lowercase, and then in up uppercase"
 * Return: 0
 * */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
