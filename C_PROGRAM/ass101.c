#include <stdio.h>


int main()
{
    int n = 7, buy = 0;
    int prices[n];
    printf("Input the prices: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &prices[i]);
    }


    for (int i = 0; i < n - 1; i++){
            if(i == 1 && prices[i + 1] > prices[i]){
                return 0;
            }
            if(i == 1 && prices[i] > prices[i + 1]){
                 buy = prices[i];
            }
            if(i == 4 && buy > prices[i]){
                    int profit = buy - prices[i];
                    printf("Profit: %d", profit);
                    break;
                }
            }
    return 0;
}
