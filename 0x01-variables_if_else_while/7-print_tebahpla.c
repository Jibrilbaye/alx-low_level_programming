#include <stdio.h>

/**
 * main - Printing lowercase alpabets in reverse.
 * followed by a new line
 * Return: Always (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
