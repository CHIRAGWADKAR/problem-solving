#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i=1; i<n; i++) {
        if(nums[i] == nums[i-1]) {
            return nums[i];
        }
    }
    return nums[n-1];
}

int main() {
    vector<int> arr{3,1,3,4,2};
    cout << findDuplicate(arr);
    return 0;
}
