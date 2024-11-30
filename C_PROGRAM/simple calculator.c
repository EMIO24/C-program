#include <stdio.h>

int main()
{
    double num1, num2;
    char opr;
    double result;
    printf("Enter the arithmetic operator ['+', '-', '/', '*': ");
    scanf("%c", &opr);
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    switch (opr)
    {
    case '+':
        result = num1 + num2;
        printf("%lf + %lf = %lf", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%lf - %lf = %lf", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("%lf / %lf = %lf", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%lf * %lf = %lf", num1, num2, result);
        break;

    default:
        printf("Invalid");
    }
    return 0;
}
