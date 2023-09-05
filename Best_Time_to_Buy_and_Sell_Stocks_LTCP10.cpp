#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int min_price = prices[0];
    int maxProfit = 0;
    int n = prices.size();

    for(int i=0; i<n;i++) {
        int profit = prices[i] - min_price;
        maxProfit = max(maxProfit, profit);
        min_price = min(min_price, prices[i]);
    }
    return maxProfit;
}

int main() {
    vector<int> arr{7,1,5,3,6,4};
    cout << maxProfit(arr);
    return 0;
}
