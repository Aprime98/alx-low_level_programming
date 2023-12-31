#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
**/

int main(void)
{
    int i, j;

    for (i = 0; i < 100; i++)
    {
        for (j = i; j < 100; j++)
        {
            if (i != 0 || j != 0)  // Exclude "00 00"
            {
                printf("%02d %02d", i, j);

                if (!(i == 99 && j == 99))  // Exclude "99 99"
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return (0);
}
