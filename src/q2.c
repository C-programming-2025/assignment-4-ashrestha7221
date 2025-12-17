// Write a C program that reverses an array of characters using pointers.
#include <stdio.h>

int main()
{
    char arr[100];
    char *start, *end;
    int length = 0;

    printf("Enter a string:\n");
    fgets(arr, sizeof(arr), stdin);

    while (arr[length] != '\0')
    {
        if (arr[length] == '\n')
        {
            arr[length] = '\0';
            break;
        }
        length++;
    }

    start = arr;
    end = arr + length - 1;

    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", arr);

    return 0;
}
