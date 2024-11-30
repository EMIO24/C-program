#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("you are eligible to vote");
    }
    else
    {
        printf("you are not eligible to vote");
    }
    return 0;
}
/* syntax for if, else statement
if (test condition)
{
    Body of if statement
}
else
{
 body of else statement
}
*/
