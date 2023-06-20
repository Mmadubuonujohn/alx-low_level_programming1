#include <stdio.h>
/**
 * main - Entry point
 * Return: Always return success (0)
 */
int main()
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}

