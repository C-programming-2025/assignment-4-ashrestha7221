// Write a C program that counts the number of characters, words, and lines in a text file.
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;


    fp = fopen("input.txt", "r");

    if (fp == NULL)
    {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;


        if (ch == '\n')
        {
            lines++;
        }


        if (ch == ' ' || ch == '\n' || ch == '\t')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Number of lines: %d\n", lines);

    return 0;
}
