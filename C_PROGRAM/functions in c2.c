// function return type
#include <stdio.h>
double fun(double num, double num1)
{
    double div = num / num1;
    return div;
}
int main()
{
    double result = fun(71.00, 3.00);
    printf("The result is %lf", result);
    return 0;
}
