#include <stdio.h>
#include <stdbool.h>
/* if the output is 1 it means true,
if it is 0 it means false*/
int main()
{
    bool value = (50 > 9);
    printf("%d", value);
    bool value1 = (5 < 9);
    printf("\n%d", value1);
    bool value2 = (90 == 9);
    printf("\n%d", value2);
    bool value3 = (5 != 9);
    printf("\n%d", value3);
    return 0;
}
