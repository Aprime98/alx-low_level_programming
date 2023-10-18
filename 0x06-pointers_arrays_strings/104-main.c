#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: pointer to the buffer
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%02x", b[i]);
        if (i % 2 == 1)
            printf(" ");
        if (i % 10 == 9 || i == size - 1)
            printf("\n");
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

    printf("%s\n", buffer);
    printf("---------------------------------\n");
    print_buffer(buffer, sizeof(buffer));
    return (0);
}
