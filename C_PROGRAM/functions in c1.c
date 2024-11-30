#include <stdio.h>
// functions parameters
void multiply(int num1, int num2)
{
    int mul = num1 * num2;
    printf("The multiplication of %d and %d is %d", num1, num2, mul);
}
int main()
{
    multiply(7,9);
    return 0;
}
// int num1 and int num2 are the parameters to the function and int is their return type
