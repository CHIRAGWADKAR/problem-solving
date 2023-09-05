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

void swap_nums(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void rotateMatrix(vector<vector<int>> &matrix) {
    int n = matrix.size(), m = matrix[0].size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            swap_nums(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector<vector<int>> matrix  {
                                {1,2,3},
                                {4,5,6},
                                {7,8,9},
                                };
                                
    rotateMatrix(matrix);
    print_matrix(matrix);
}