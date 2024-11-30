#include <stdio.h>

int main()
{
    int number;
    printf("enter a number from 1 to 7: ");
    scanf("%d", &number);
    switch (number)
    {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Weekday");
        break;

    case 1:
    case 7:
        printf("Weekend");
        break;

    default:
        printf("Invalid number");
    }
    return 0;
}
/* switch without the break after every case
*/
