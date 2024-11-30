#include <stdio.h>
// addition of even and odd num.
int main()
{
    int even = 0, odd = 0;
    for (int i = 0; i <= 100; i = i + 2){
        even = even + i;
    }
    for (int i = 1; i <= 100; i = i + 2 ){
        odd = odd + i;
    }
    printf("Even number = %d\n",even);
    printf("odd number = %d",odd);
    return 0;
}
