#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    fp = fopen("output.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a string to write into the file:\n");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("File has been written successfully.\n");

    return 0;
}
