#include<iostream>
using namespace std;
#include<climits>

int maxProfit(int price[], int n) {
    int bestBuy[n];
    bestBuy[0] = INT_MAX;
    for(int i = 1; i < n; i++) {
        bestBuy[i] = min(bestBuy[i-1], price[i-1]);
    }
    int maxProfit = 0;
    for(int i = 0; i < n; i++) {
        int currProfit = price[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    return maxProfit;
}

int main() {
    int price[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(price) / sizeof(int);
    int ans = maxProfit(price, n);
    cout << "The maximum profit that you can get is: " << ans << endl;
}