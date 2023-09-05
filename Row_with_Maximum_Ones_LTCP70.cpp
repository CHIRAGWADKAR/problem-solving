#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v) {
    int n = v.size();
    sort(v.begin(), v.end());
    int left = 0, right = n-1, ans = n;

    while (left <= right) {
        int mid = left + (right - left)/2;
        if (v[mid] == 1) {
            ans = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return ans;
}

vector<int> maxOnesRow(vector<vector<int>> &matrix) {
    int n = matrix.size(), m = matrix[0].size();
    int maxOnes = -1, maxRow = -1;

    for (int i = 0; i < n; i++) {
        int ones = m - binarySearch(matrix[i]);
        if (ones > maxOnes) {
            maxRow = i;
        }
        maxOnes = max(maxOnes, ones);
    }
    cout << "[" << maxRow << ", " << maxOnes << "]";
    return {maxRow, maxOnes};
}

int main() {
    vector<vector<int>> matrix  {
                                    {0,1},
                                    {1,0}
                                };
                                
    maxOnesRow(matrix);
}