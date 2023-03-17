#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet letters in lowercase, then in uppercase
 *
 * Return: Always 0 (Success)
*/
int main()
{
    char ch = 'a';
    char ch2 = 'A';

    while (ch <= 'z')
    {
        putchar(ch);
        ++ch;
    }
    
    while (ch2 <= 'Z')
    {
        putchar(ch2);
        ++ch2;
    }

    putchar('\n');

    return (0);
}
