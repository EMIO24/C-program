#include <stdio.h>


int main()
{
    int list[10];
    int n = 10;
    int bsort[10];
    printf("Enter a list of 10 numbers: ");
    for(int i = 0; i < n; i++ )
    {
        scanf("%d", &list[i]);
    }
    printf("You inputted\n");

    for(int i = 0; i < n; i++ )
    {
        printf("%d ", list[i]);

    }
    for(int i = 0; i < n; i++)
    {
        bsort[i] = list[i];
    }
     for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (bsort[j] > bsort[j + 1]) {
                // Swap elements
                int temp = bsort[j];
                bsort[j] = bsort[j + 1];
                bsort[j + 1] = temp;
            }
        }
    }
    printf("Sorted list:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", bsort[i]);
    }
    printf("\n");




    return 0;
}
