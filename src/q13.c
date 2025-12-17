// Write a C program that copies the contents of one file to another file.
#include <stdio.h>

int main()
{
    FILE *sourceFile, *destinationFile;
    char ch;

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL)
    {
        printf("Error: Source file cannot be opened.\n");
        return 1;
    }

    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL)
    {
        printf("Error: Destination file cannot be opened.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
