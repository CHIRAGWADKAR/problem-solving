#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> nums) {
    int n = nums.size();
    int m = n/2;
    int i, j;
    int count = 0;

    if (n == 1) {
        return nums[0];
    }

    sort(nums.begin(), nums.end());

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i-1]) {
            count++;
        }
        if (count >= m) {
            return nums[i];
        }
    }
    return -1;
}

int main() {
    vector<int> arr{1,2,2,3,2};
    cout << majorityElement(arr);
    return 0;
}
