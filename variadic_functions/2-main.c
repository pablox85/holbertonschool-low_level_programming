#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    const char *strings[] = {"Jay", "Django", "pepe", "pipo", "pupu"};
    
    unsigned int n = sizeof(strings) / sizeof(strings[0]);

    print_strings(", ", n, strings[0], strings[1], strings[2], strings[3],
		    strings[4]);
    
    return (0);
}
