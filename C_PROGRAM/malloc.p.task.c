#include <stdio.h>
#include <stdlib.h>
// malloc syntax  ptr = (int*) malloc(n * sizeof(int));
int main()
{
    int* ages;
    int n = 4;
    ages =(int*) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ages[i]);
    }
     printf("Array element\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", *(ages + i));
    }
    n = 6;
    ages = realloc (ages, n *sizeof(int));
    ages[4] = 32;
    ages[5] = 59;
    printf("New array element\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", *(ages + i));
    }
    free(ages);
    return 0;
}
