#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i=0; i<n;) {
        if(i == n-1) {
            return nums[i];
        }
        else if(nums[i] == nums[i+1]) {
            i += 2;
        }
        else {
            return nums[i];
        }
    }
    return 0;
}

int main() {
    vector<int> arr{2,2,1};
    cout << singleNumber(arr);
    return 0;
}
