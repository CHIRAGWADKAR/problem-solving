#include<bits/stdc++.h>
#include<vector>
using namespace std;

int countKDifference(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            abs(nums[i] - nums[j]) == k ? count += 1 : count += 0;
        }
    }
    return count;
}

int main() {
    vector<int> arr{1,2,2,1};
    int kd = 1;
    cout << countKDifference(arr, kd);
}