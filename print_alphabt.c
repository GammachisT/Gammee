Prints alphabet except e and q

#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints alphabet except e and q
 * Return: 0 (success)
 */


int main(void)
{
        int c;

        for (c = 'a'; c <= 'z'; c++)
        if  (c != 'e' && c != 'q')
                putchar(c);

        putchar('\n');
        return (c);
}

or

#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints alphabet except e and q
 * Return: 0 (success)
 */


int main(void)
{
        int c = 'a';

        while (c <= 'z')
        {
             if  (c != 'e' && c != 'q')
                putchar(c);
                c++;
        }
        putchar('\n');
        return (0);
}
