


#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void printnumber(int n)
{

    if (n < 0) {
        putchar('-');
        n = -n;
    }

    if (n == 0)
        putchar('0');

    if (n/10)
        printnumber(n/10);

    putchar(n%10 + '0');
}
