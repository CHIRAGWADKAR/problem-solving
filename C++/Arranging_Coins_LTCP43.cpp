#include<bits/stdc++.h>
#include<vector>
using namespace std;

int arrangeCoins(int n) {
    long long k = sqrt(2 * (long long)n);
    long long sum = k * (k+1)/2;
    return (sum > n) ? k-1 : k;
}

int main() {
    int n = 6;
    cout << arrangeCoins(n);
}