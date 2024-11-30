#include <stdio.h>

int main()
{
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    if (number > 0)
    {
        printf("The number is positive");
    }
    else if (number == 0)
    {
        printf("The number is zero");
    }
    else
    {
        printf("The number is negative");
    }
    return 0;
}
