#include<bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int m_size = accounts.size(), r_size = accounts[0].size();
    vector<int> wealth{};
    int sum = 0;
    // [1,2,3]
    // [3,2,1]
    for (int row = 0; row < m_size; row++) {
        for (int col = 0; col < r_size; col++) {
            sum += accounts[row][col];
        }
        wealth.push_back(sum);
        sum = 0;
    }
    return *max_element(wealth.begin(), wealth.end());
}

int main() {
    vector<vector<int>> accounts{{1,2,3}, {3,2,1}};
    cout << maximumWealth(accounts);
}