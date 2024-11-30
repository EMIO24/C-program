#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 90 || age <= 0)
    {
        printf("Invalid age");
    }
    else if (age < 18)
    {
        printf ("You are not eligible to vote");
    }
    else
    {
        printf("you are eligible to vote");
    }
    return 0;
}
/* syntax for if, else statement
if (test condition)
{
    Body of if statement
}
else if
{
     body of else if statement
}
else
{
 body of else statement
}
*/
