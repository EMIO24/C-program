#include <stdio.h>

int main()
{
    int num, count = 12;
    int sum;
    printf("Enter the given number: ");
    scanf("%d", &num);
    while (count >= 1)
    {
        sum = num * count;
        printf("%d*%d = %d\n", num, count, sum);
        count--;
    }
    return 0;
}
