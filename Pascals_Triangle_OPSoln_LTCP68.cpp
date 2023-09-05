// Optimised Solution: Just by adding the numbers of the previous row.
// Time Complexity: O(n^2)
// Gives correct answer for all values of n.
// Naive Soution in other program file: Pascals_Triangle_NaiveSoln.cpp
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

vector<vector<int>> pascalsTriangle(int n) {
    vector<vector<int>> matrix(n);

    for (int rows = 0; rows < n; rows++) {
        matrix[rows].resize(rows+1);
        for (int cols = 0; cols < rows+1; cols++) {
            if (cols == 0 || cols == rows) {
                matrix[rows][cols] = 1;
            }
            else {
                matrix[rows][cols] = matrix[rows-1][cols] + matrix[rows-1][cols-1];
            }
        }
    }

    print_matrix(matrix);
    return matrix;
}

int main() {
    int n = 5;
    pascalsTriangle(n);
}