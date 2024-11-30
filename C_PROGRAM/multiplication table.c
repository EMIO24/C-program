#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int sum, count = 1;
    while(count <= 12)
    {
        sum = num * count;
        printf("%d*%d = %d\n", num, count, sum);
        count++;
    }
    return 0;
}
