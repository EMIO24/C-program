#include <stdio.h>

int main()
{
    int num;
    while (1)
    {
        printf("Enter a negative number: ");
    scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("Negative Even\n");
            continue;
        }
        if (num < 0)
        {
            printf("%d", num);
            break;
        }
        if (num > 0)
        {
            printf("Positive Value");
            break;

        }

    }
    return 0;
}
