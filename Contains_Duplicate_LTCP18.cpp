#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    sort(nums.begin(), nums.end());

    if (n == 1) {
        return false;
    }

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i-1]) {
            count++;
        }
    }

    if (count > 0) return true;
    else           return false;
}

int main() {
    vector<int> arr{1,1,1,3,3,2,4,2};
    cout << containsDuplicate(arr);
    return 0;
}
