#include <stdio.h>
int fun()
{
    int num = 0, num1 = 0;
    printf("Enter the first number: ");
    scanf("%d", &num);
    printf("Enter the second number: ");
    scanf("%d", &num1);
    int mul = num * num1;
    return mul;
}
int main()
{
    int result = fun();
    printf("The result is %d", result);
    return 0;
}
