#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for(int i=0; i<n; i++) {
        if(nums[i] != i) {
            return i;
        }
    }
}

int main() {
    vector<int> arr{0,1};
    cout << missingNumber(arr);
    return 0;
}
