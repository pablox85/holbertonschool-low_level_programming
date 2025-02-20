#include "main.h"

void times_table(void)
{
        int j;
int l;	
		for (j = '0'; j <= '9'; j++)
	{
			_putchar(j), _putchar(','), _putchar(' ');
			
	}
		_putchar('\n');

        
	{
                 for (j = '0'; j <= '9'; j+=2)
                          _putchar(j), _putchar(','), _putchar(' ');
		 if ( j >= 10)
		 {
			 l = j % 10;
			 _putchar(l + 48);
		 }
        }
		_putchar('\n');
	
	
	{ 
		for (j = '0'; j <= '9'; j+=3) 
			_putchar(j), _putchar(','), _putchar(' ');
	}
		_putchar('\n');
	
	
	{
		for (j = '0'; j <= '9'; j+=4)
			_putchar(j), _putchar(','), _putchar(' ');
	}
		_putchar('\n');
		
        
	{
                for (j = '0'; j <= '9'; j+=5)
                        _putchar(j), _putchar(','), _putchar(' ');
        }
		_putchar('\n');
        
	
	{
                for (j = '0'; j <= '9'; j+=6)
                        _putchar(j), _putchar(','), _putchar(' ');
        }
		_putchar('\n');
        
	
	{
                for (j = '0'; j <= '9'; j+=7)
                        _putchar(j), _putchar(','), _putchar(' ');
	}
		_putchar('\n');
        
	
	{       
		for (j = '0'; j <= '9'; j +=8)
			_putchar(j), _putchar(','), _putchar(' ');
        }
		_putchar('\n');
		
		for (j = '0'; j <= '9'; j+=9)
	{
			_putchar(j); _putchar(','); _putchar(' ');
	
	}
		_putchar('\n');
 
}
