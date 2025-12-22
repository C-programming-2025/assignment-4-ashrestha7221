#include <stdio.h>

struct Book
{
    char title[100];
    char author[100];
    float price;
};

int main()
{
    struct Book books[50];
    int n, i;
    float limit;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Title: ");
        scanf(" %[^\n]", books[i].title);

        printf("Author: ");
        scanf(" %[^\n]", books[i].author);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    printf("\nEnter price limit: ");
    scanf("%f", &limit);

    printf("\n--- Books with price above %.2f ---\n", limit);

    for (i = 0; i < n; i++)
    {
        if (books[i].price > limit)
        {
            printf("\nTitle: %s", books[i].title);
            printf("\nAuthor: %s", books[i].author);
            printf("\nPrice: %.2f\n", books[i].price);
        }
    }

    return 0;
}
