#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sqr = sqrt(num);
    printf("The square root of %d is %d", num, sqr);
    int result = pow(num, sqr);
    printf("\nResult is %d", result);
    return 0;
}
