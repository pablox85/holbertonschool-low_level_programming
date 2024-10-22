#include <stdio.h>
/**
 * main - Entry point
 * Description: del 0 al 9 y despues letras correspondientes
 * hasta el 16
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
