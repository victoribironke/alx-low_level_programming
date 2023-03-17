#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters backwards
 *
 * Return: Always 0 (Success)
*/
int main()
{
    char ch = 'z';

    while (ch >= 'a')
    {
        putchar(ch);
        --ch;
    }
    
    putchar('\n');

    return (0);
}
