#include "main.h"

void times_table(void)
{
        int i, j;


        for (i = '0'; i <= '9'; i++)
        {
                for (j = '0'; j <= '9'; j++)
                        /*filas y columnas 9X9*/
                _putchar(j), _putchar(','), _putchar(' ');
                _putchar('\n'); break;

        }
        {
                 for (j = '0'; j <= '9'; j+=2)
                          _putchar(j), _putchar(','), _putchar(' ');
 	             _putchar('\n');
        }
	{ 
		for (j = '0'; j <= '9'; j+=3) 
			_putchar(j), _putchar(','), _putchar(' ');
		_putchar('\n');
	}
	{
		for (j = '0'; j <= '9'; j+=4)
			_putchar(j), _putchar(','), _putchar(' ');
		_putchar('\n');
	}
        {
                for (j = '0'; j <= '9'; j+=5)
                        _putchar(j), _putchar(','), _putchar(' ');
                _putchar('\n');
        }
        {
                for (j = '0'; j <= '9'; j+=6)
                        _putchar(j), _putchar(','), _putchar(' ');
                _putchar('\n');
        }
        {
                for (j = '0'; j <= '9'; j+=7)
                        _putchar(j), _putchar(','), _putchar(' ');
                _putchar('\n');
	}
        {       
		for (j = '0'; j <= '9'; j +=8)
			_putchar(j), _putchar(','), _putchar(' ');
		_putchar('\n');	
        }
		for (j = '0'; j <= '9'; j+=9)
		{
			_putchar(j); _putchar(','); _putchar(' ');
		
		}
		_putchar('\n');
 
}
