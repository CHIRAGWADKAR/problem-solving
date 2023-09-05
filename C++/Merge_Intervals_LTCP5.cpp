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

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals) {
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> merged;
    for (auto interval : intervals) {
        // if the list of merged intervals is empty or if the current
        // interval does not overlap with the previous, simply append it.
        if (merged.empty() || merged.back()[1] < interval[0]) {
            merged.push_back(interval);
        }
        // otherwise, there is overlap, so we merge the current and previous
        // intervals.
        else {
            merged.back()[1] = max(merged.back()[1], interval[1]);
        }
    }
    print_matrix(merged);
    return merged;
}

int main() {
    vector<vector<int>> arr{{6,8},{1,3},{2,4},{9,10}};
    mergeIntervals(arr);
}
