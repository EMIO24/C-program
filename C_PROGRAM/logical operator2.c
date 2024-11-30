/*
&& logical AND
|| logical OR
!  logical NOT
*/
#include <stdio.h>
#include <stdbool.h>
/* if the output is 1 it means true,
if it is 0 it means false*/
int main()
{
    int age =18;
    bool result = !(age >= 18);
    printf("%d", result);
    int age1 =19;
    bool result1 = !(age1 >= 18);
    printf("\n%d", result1);
    int age2 =14;
    bool result2 = !(age2 >= 18);
    printf("\n%d", result2);
    /* it means logical NOT returns true
    when the expression is false*/
    return 0;
}
