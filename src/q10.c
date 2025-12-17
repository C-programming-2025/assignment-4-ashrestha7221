#include <stdio.h>

struct Car
{
    char model[50];
    int year;
    float mileage;
};

int main()
{
    struct Car cars[3];
    int i, minIndex = 0;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter details for Car %d\n", i + 1);

        printf("Model: ");
        scanf(" %[^\n]", cars[i].model);

        printf("Year: ");
        scanf("%d", &cars[i].year);

        printf("Mileage: ");
        scanf("%f", &cars[i].mileage);
    }

    for (i = 1; i < 3; i++)
    {
        if (cars[i].mileage < cars[minIndex].mileage)
        {
            minIndex = i;
        }
    }

    printf("\nCar with the lowest mileage:\n");
    printf("Model: %s\n", cars[minIndex].model);
    printf("Year: %d\n", cars[minIndex].year);
    printf("Mileage: %.2f\n", cars[minIndex].mileage);

    return 0;
}
