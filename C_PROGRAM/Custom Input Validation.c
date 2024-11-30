#include <stdio.h>


int main()
{

    while(1)
    {
        int num = 4;
        int n;
        printf("Enter a number between 1 and 10: ");
        scanf("%d", &n);
        if (n == num)
        {
            printf("Thank you! You entered %d.", n);
        return 0;
        }
        else
             printf("Invalid input. Please try again.\n");
    }


    return 0;
}
