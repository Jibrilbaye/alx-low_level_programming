#include <stdio.h>

/**
 * main - Printing the alpabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyxABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchr(alp[i]);
	}
	putchar('\n');
	return (0);
}
