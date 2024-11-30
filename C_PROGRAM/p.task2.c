#include <stdio.h>
int fun(int num);
int num;
int main()
{
    int result;
    printf("Enter a number: ");
    scanf("%d", &num);

    result = fun(num);
    printf("The factorial of %d is %d", num, result);
    return 0;
}

int fun(int num)
{
    if(num > 0)
    {
        return num * fun(num - 1);
    }
    else
    {
        return 1;
    }
}
