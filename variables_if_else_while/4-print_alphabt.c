#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except 'e' and 'q'
 * Description: Uses a loop to print all letters except 'e' and 'q'
 * Return: 0 (Success)
 */

int main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != 'e' && i != 'q')
	{
		putchar(i);
	}
    }

	putchar('\n');
	return (0);
}

