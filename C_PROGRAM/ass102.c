#include <stdio.h>
#include <stdlib.h>

int maxProfit(int* prices, int pricesSize) {
    int mprofit = 0;

    for (int k = 0; k < 2; k++) { // Repeat for two transactions
        int n, m, buy, profit = 0;

        // Get buy and sell days from the user
        printf("Input your buy day in number ranging from 1 to %d: ", pricesSize);
        scanf("%d", &n);
        printf("Input your sell day in number ranging from 1 to %d: ", pricesSize);
        scanf("%d", &m);

        // Adjust for zero-based indexing
        n -= 1;
        m -= 1;

        // Validate user inputs
        if (n < 0 || n >= pricesSize || m < 0 || m >= pricesSize || n >= m) {
            printf("Invalid days. Buy day must be before sell day.\n");
            return -1; // Error value
        }

        // Calculate profit
        buy = prices[n]; // Buying price on day `n`
        profit = prices[m] - buy; // Profit if sold on day `m`

        // Add profit to total if valid
        if (profit > 0) {
            printf("Profit for transaction %d: %d\n", k + 1, profit);
            mprofit += profit;
        } else {
            printf("No profit possible for transaction %d.\n", k + 1);
        }
    }

    return mprofit; // Return total profit
}

int main() {
    int pricesSize;

    // Get the number of prices
    printf("Enter the number of prices: ");
    scanf("%d", &pricesSize);

    // Allocate memory for prices array
    int* prices = (int*)malloc(pricesSize * sizeof(int));
    if (prices == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input prices
    printf("Input the prices: ");
    for (int i = 0; i < pricesSize; i++) {
        scanf("%d", &prices[i]);
    }

    // Calculate max profit
    int totalProfit = maxProfit(prices, pricesSize);

    // Output total profit
    if (totalProfit >= 0) {
        printf("Total Profit: %d\n", totalProfit);
    }

    // Free allocated memory
    free(prices);

    return 0;
}

