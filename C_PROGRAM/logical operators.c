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
        double height = 6.6;
        bool result = (age >= 18) && (height > 6.0);
        printf("%d", result);
        int age1 =14;
        double height1 = 6.5;
        bool result1 = (age1 >= 18) && (height1 > 6.0);
        printf("\n%d", result1);
        /* it means logical AND returns true
        if both expressions are satisfied*/
        return 0;
    }
