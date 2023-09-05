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

void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> visited = matrix;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                for(int k=0; k<m; k++){
                    visited[i][k] = 0;
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                for(int k=0; k<n; k++){
                    visited[k][j] = 0;
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            matrix[i][j] = visited[i][j];
        }
    }
}

int main() {
    vector<vector<int>> matrix{
                                {0,1,1},
                                {1,0,1},
                                {1,1,1}
                            };
    setZeroes(matrix);
    print_matrix(matrix);
    /*
        [0 0 0]
        [0 0 0]
        [0 0 1]
    */
}
