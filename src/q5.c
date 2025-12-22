#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;
    int length = 0;
    int size = 100;

    str = (char *)malloc(size * sizeof(char));
    if (str == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string:\n");
    fgets(str, size, stdin);

    char *ptr = str;
    while (*ptr != '\0' && *ptr != '\n')
    {
        length++;
        ptr++;
    }

    printf("Length of the string: %d\n", length);

    free(str);

    return 0;
}
