// Write a C program that checks if a given string is a palindrome using pointers.
#include <stdio.h>

int main()
{
    char str[100];
    char *start, *end;
    int length = 0;

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0')
    {
        if (str[length] == '\n')
        {
            str[length] = '\0';
            break;
        }
        length++;
    }

    start = str;
    end = str + length - 1;
  
    while (start < end)
    {
        if (*start != *end)
        {
            printf("The string is NOT a palindrome.\n");
            return 0;
        }
        start++;
        end--;
    }

    printf("The string IS a palindrome.\n");

    return 0;
}
