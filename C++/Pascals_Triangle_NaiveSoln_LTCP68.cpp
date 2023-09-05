// Naive Solution: Using nCr formula of combinations
// Time Complexity: O(n^2)
// Gives correct answer only till n = 13.
// Optimised Soution in other program file: Pascals_Triangle_OPSoln.cpp
#include<bits/stdc++.h>
using namespace std;

void print_matrix(vector<vector<int>> &matrix) {
    int s1 = matrix.size();
    for (int i = 0; i < s1; i++) {
        int s2 = matrix[i].size();
        cout << "[";
        for (int j = 0; j < s2; j++) {
            cout << matrix[i][j];
            if (j != s2 - 1) {
                cout << ", ";
            }
        }
        cout << "]";
        if (i != s1 - 1) {
            cout << "\n";
        }
    }
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

vector<vector<int>> pascalsTriangle(int n) {
    vector<vector<int>> matrix(n);

    for (int rows = 0; rows < n; rows++) {
        matrix[rows].resize(rows+1);
        for (int cols = 0; cols < rows+1; cols++) {
            if (cols == 0 || cols == rows) {
                matrix[rows][cols] = 1;
            }
            else {
                matrix[rows][cols] = nCr(rows, cols);
            }
        }
    }

    print_matrix(matrix);
    return matrix;
}

int main() {
    int n = 13;
    pascalsTriangle(n);
}