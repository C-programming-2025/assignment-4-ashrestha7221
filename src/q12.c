// Write a C program to read the contents of a text file and display them on the screen.
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("output.txt", "r");

    if (fp == NULL)
    {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
