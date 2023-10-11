#include <stdio.h>
/**
 * main - Print all single digit numbers
 *
 * Return:0
 */
int main(void)
{
    int c = 0;

    while (c <= 9)
        putchar(c + '0');
        c++;

    putchar('\n');

    return 0;
}
