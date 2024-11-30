/*
 Recursion can be used as a loop
 that's why i need to add the base condition to end the recursion
 else it will become a infinite loop.
The syntax for recursion is
void recurse()
{
    ...
    recurse();
    ...
}

int main()
{
    ...
    recurse();
    ...
    return 0;
}
*/
#include <stdio.h>
int num;
int fun(int num);
int main()
{
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = fun(num);
    printf("The sum of the first %d number is %d", num, result);
    return 0;
}
int fun(int num)
{
    if (num != 0)
    {
        return num + fun(num - 1);
    }
    else{
        return num;
    }
}
