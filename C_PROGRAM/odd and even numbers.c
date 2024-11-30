#include <stdio.h>

int main()
{
    int even;
    printf("Enter a number: ");
    scanf("%d", &even);
    (even % 2 == 0) ? printf("This is an even number"): printf("This is an odd number");
    return 0;
}
