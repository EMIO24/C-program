#include <stdio.h>

int main()
{
    int numbers[5] = {1, 3, 2, 5, 7};
    for (int i = 0; i < 5; i++)
    {
        printf("%d = %p\n", numbers[i], &numbers[i]);
        // This prinf statement is printing the memory address of each numbers in the array
    }

    printf("Array address of 1: %p", numbers);
    printf("\nArray address of 3: %p", numbers + 1);
    printf("\nArray address of 2: %p", numbers + 2);
    printf("\nArray address of 5: %p", numbers + 3);
    printf("\nArray address of 7: %p", numbers + 4);
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d = %p", *(numbers +i), &numbers[i]);
        // This prinf statement is printing the value and the memory address of each numbers in the array.
    }
    *numbers = 5;
    *(numbers +1) = 4;
    *(numbers +4) = 3;

    printf("\nThe first number is %d", *numbers);
    printf("\nThe second number is %d", *(numbers + 1));
    printf("\nThe last number is %d", *(numbers + 4));
    // using pointers to change value of an array
    for(int i =0; i < 5; i++)
    {
        printf("\n%d ", numbers[i]);
        // using the for loop to print the new numbers of the array.
    }
    return 0;
}
