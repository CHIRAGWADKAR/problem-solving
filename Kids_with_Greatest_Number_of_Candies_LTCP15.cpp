#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int ex = extraCandies;
    int n = candies.size();
    int m = *max_element(candies.begin(), candies.end());
    vector<bool> TF;

    for (int i = 0; i < n; i++) {
        if (candies[i] + ex >= m) {
            TF[i] = true;
        }
        else {
            TF[i] = false;
        }
    }
    return TF;
}

int main() {
    vector<int> c{2,3,5,1,3};
    int eC = 3;
    kidsWithCandies(c, eC);
}
