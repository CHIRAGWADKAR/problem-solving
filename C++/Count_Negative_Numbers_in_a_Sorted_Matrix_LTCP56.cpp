#include<bits/stdc++.h>
using namespace std;

void print_matrix(vector<vector<int>>& matrix) {
    int s1 = matrix.size();
    int s2 = matrix[0].size();

    for (int i = 0; i < s1; i++) {
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

int countNegatives(vector<vector<int>>& grid) {
    int s1 = grid.size(), s2 = grid[0].size();
    int count = 0;

    for (int i = 0; i < s1; i++) {
        int left = 0, right = s2-1;
        while (left <= right) {
            int mid = left + (right - left)/2;
            if (grid[i][mid] < 0) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        count += (s2 - left);
    }
    return count;
}

int main() {
    vector<vector<int>> grid{
                                {4,3,2,-1},
                                {3,2,1,-1},
                                {1,1,-1,-2},
                                {-1,-1,-2,-3}
                            };
    print_matrix(grid);
    cout << endl << countNegatives(grid);
}