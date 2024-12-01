#include <stdio.h>


int main()
{
    int N;
    printf("Input the value of N: ");
    scanf("%d", &N);
    if (N % 2 == 1){
        printf("Weird");
    }
    if(N % 2 == 0 && N > 2 && N <= 5){
        printf("Not Weird");
    }
    if(N % 2 == 0 && N >= 6 && N <= 20){
        printf("Weird");
    }
    if(N % 2 == 0 && N > 20){
        printf("Not Weird");
    }

    return 0;
}
