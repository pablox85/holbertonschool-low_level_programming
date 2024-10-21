#include <stdio.h>
/**
 *main - 2-print_alphabet.c
 *Return: 0
 */

	int main(void)
{
	char i[26];

	for (int j  = 0; j <= 26; j++)
	{
	i[j] = 'a' +j;
	}
	for (int j = 0; j < 26; j++)
	{
	putchar (i[j]);
	}
	return (0);
}
