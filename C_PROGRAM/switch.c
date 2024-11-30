#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number assigned to a weekday: ");
    scanf("%d", &number);
    switch(number)
    {

    case 1:
    printf("This number is assigned to Sunday");
    break;

    case 2:
    printf("This number is assigned to Monday");
    break;

    case 3:
    printf("This number is assigned to Tuesday");
    break;

    case 4:
    printf("This number is assigned to Wednesday");
    break;

    case 5:
    printf("This number is assigned to Thursday");
    break;

    case 6:
    printf("This number is assigned to Friday");
    break;

    case 7:
    printf("This number is assigned to Saturday");
    break;

    default:
        printf("Invalid number");

    }

    return 0;
}
/*
switch(variable/expression)
{
 case value1:
// body of case 1
 break;
case value2:
// body of case 2
break;
case value3:
// body of case 3 break;

default:
// body of default
}
*/
