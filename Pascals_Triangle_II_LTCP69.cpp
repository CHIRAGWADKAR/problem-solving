#include<bits/stdc++.h>
using namespace std;

void print_array(vector<int>& nums) {
    int n = nums.size();
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << nums[i];
        if (i != (n-1)) {
            cout << ", ";
        }
    }
    cout << "]";
}

long long int factorial(long int n) {
    int facto = 1;
    if (n == 0) {
        return facto;
    }
    for(int i = 1; i <= n; i++) {
        facto *= i;
    }
    return facto;
}

long long int nCr(int n, int r) {
    long long int C;
    C = factorial(n)/(factorial(r) * factorial(n-r));
    return C;
}

vector<int> getRow(int rowIndex) {
    int row = rowIndex;
    vector<int> Row{};
    for (int col = 0; col <= row; col++) {
        Row.push_back(nCr(row, col));
    }
    print_array(Row);
    return Row;
}

int main() {
    int n = 5;
    getRow(n);
}