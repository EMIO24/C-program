#include <stdio.h>


int main()
{
    int n;
    printf("Input the number of array element: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input the array element: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int revarr[n];
    for(int i = n-1, j=0; i >= 0; i--, j++){
        revarr[j] = arr[i];
        printf("%d ",revarr[j]);
    }
    return 0;
}
