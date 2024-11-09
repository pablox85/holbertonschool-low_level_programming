#include "main.h"
/**
 *
 *
 *
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i = 0;


        while (i < n)
        {
                *dest++ = *src++;
                        i++;
        }





        return(dest);



}
