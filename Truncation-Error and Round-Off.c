#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double Ea, Er, Ep, X, Y;
    X = 1.7643923;
    int choice;
    printf("\n\n");
    printf("*****************Computation Error**************\n\n\n");
    printf("Choose the option: \n");
    printf("1. Round off\n");
    printf("2. Truncate\n");
    scanf("%d", &choice);
    int numberOfDecimalPlaces;
    printf("Enter the number of decimal places: ");
    scanf("%d", &numberOfDecimalPlaces);
    if (choice == 1)
    {
        Y = (int)(X * pow(10, numberOfDecimalPlaces) + 0.5) / pow(10, numberOfDecimalPlaces);
    }
    else if (choice == 2)
    {
        Y = (int)(X * pow(10, numberOfDecimalPlaces)) / pow(10, numberOfDecimalPlaces);
    }
    else
    {
        printf("Invalid choice");
        return 0;
    }

    Ea = fabs(X - Y);
    Er = (Ea / Y);    
    Ep = (Er)*100;
    printf("Absolute Error: %.8lf   Relative Error: %.8lf   Percentage Error: %.8lf", Ea, Er, Ep);

    printf("\n\n");
    printf("*****************Program Finished*****************");
    return 0;
}