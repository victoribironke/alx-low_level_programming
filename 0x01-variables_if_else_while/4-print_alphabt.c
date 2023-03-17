#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters except q and e
 *
 * Return: Always 0 (Success)
*/
int main()
{
    char ch = 'a';

    while (ch <= 'z')
    {
        if (ch == 'q' || ch == 'e') 
        {
            ++ch;
            continue;
        }
        putchar(ch);
        ++ch;
    }

    putchar('\n');

    return (0);
}
